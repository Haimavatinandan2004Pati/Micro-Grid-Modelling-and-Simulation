clear all;close all;clc
load("BatteryChargingData.mat")

%% Step 1: Plot I_battery, V_battery, SOC_battery
figure;
plot(out.I_battery.Time, out.I_battery.Data, 'LineWidth', 1.5);
title('Battery Current (I\_battery)');
xlabel('Time (s)'); ylabel('Current (A)');

figure;
plot(out.V_battery.Time, out.V_battery.Data, 'LineWidth', 1.5);
title('Battery Voltage (V\_battery)');
xlabel('Time (s)'); ylabel('Voltage (V)');

figure;
plot(out.SOC_battery.Time, out.SOC_battery.Data, 'LineWidth', 1.5);
title('State of Charge (SOC\_battery)');
xlabel('Time (s)'); ylabel('SOC (%)');

%% Step 2: Define function to split and process grid timeseries
process_grid_signal = @(ts, name) deal(...
    timeseries(ts.Data(:,1), ts.Time, 'Name', [name ' A']), ...
    timeseries(ts.Data(:,2), ts.Time, 'Name', [name ' B']), ...
    timeseries(ts.Data(:,3), ts.Time, 'Name', [name ' C']) ...
);

%% Step 3: Split I_grid and V_grid into phases
[Ia_grid, Ib_grid, Ic_grid] = process_grid_signal(out.I_grid, 'I\_grid');
[Va_grid, Vb_grid, Vc_grid] = process_grid_signal(out.V_grid, 'V\_grid');

%% Step 4: Plot I_grid phases
figure;
plot(Ia_grid, 'r', 'LineWidth', 1.5); hold on;
plot(Ib_grid, 'g', 'LineWidth', 1.5);
plot(Ic_grid, 'b', 'LineWidth', 1.5);
legend('Phase A', 'Phase B', 'Phase C');
title('Grid Current (I\_grid) - 3 Phases');
xlabel('Time (s)'); ylabel('Current (A)');
grid on;

%% Step 5: Plot V_grid phases
figure;
plot(Va_grid, 'r', 'LineWidth', 1.5); hold on;
plot(Vb_grid, 'g', 'LineWidth', 1.5);
plot(Vc_grid, 'b', 'LineWidth', 1.5);
legend('Phase A', 'Phase B', 'Phase C');
title('Grid Voltage (V\_grid) - 3 Phases');
xlabel('Time (s)'); ylabel('Voltage (V)');
grid on;

%% Step 6: FFT & THD Function (with DC component)
function plot_fft(ts, title_prefix)
    signal = ts.Data;
    t = ts.Time;
    dt = mean(diff(t));
    Fs = 1/dt;
    N = length(signal);

    f = Fs*(0:(N/2))/N;
    Y = fft(signal);
    P2 = abs(Y / N);
    P1 = P2(1:N/2+1);
    P1(2:end-1) = 2 * P1(2:end-1);

    % Plot FFT
    figure;
    plot(f, P1, 'LineWidth', 2);
    title(['FFT of ' title_prefix ' - ' ts.Name]);
    xlabel('Frequency (Hz)');
    ylabel('|Amplitude|');
    xlim([0 2000]);
    grid on;

    % DC Component
    dc_component = P1(1);

    % THD Calculation (excluding DC)
    [~, fundamental_idx] = min(abs(f - 50));
    fundamental = P1(fundamental_idx);
    max_harmonic_order = 10;
    harmonics = zeros(1, max_harmonic_order - 1);
    for k = 2:max_harmonic_order
        idx = fundamental_idx * k;
        if idx <= length(P1)
            harmonics(k-1) = P1(idx);
        end
    end
    thd_val = sqrt(sum(harmonics.^2)) / fundamental * 100;

    % Display in Command Window
    fprintf('--- %s (%s) ---\n', title_prefix, ts.Name);
    fprintf('DC Component: %.4f\n', dc_component);
    fprintf('Fundamental (%.2f Hz): %.4f\n', f(fundamental_idx), fundamental);
    fprintf('THD (2nd–%dth): %.2f %%\n\n', max_harmonic_order, thd_val);

    % Annotate on plot
    annotation_str = {
        sprintf('DC = %.2f', dc_component)
        sprintf('Fundamental = %.2f Hz', f(fundamental_idx))
        sprintf('Amplitude = %.2f', fundamental)
        sprintf('THD (2nd–%dth) = %.2f%%', max_harmonic_order, thd_val)
    };
    x_pos = 0.05 * max(f);
    y_pos = 0.9 * max(P1);
    text(x_pos, y_pos, annotation_str, ...
         'FontSize', 12, 'Color', 'r', 'VerticalAlignment', 'top');
end

%% Step 7: Compute FFTs and THD for each phase

% I_grid FFTs
plot_fft(Ia_grid, 'I\_grid');
plot_fft(Ib_grid, 'I\_grid');
plot_fft(Ic_grid, 'I\_grid');

% V_grid FFTs
plot_fft(Va_grid, 'V\_grid');
plot_fft(Vb_grid, 'V\_grid');
plot_fft(Vc_grid, 'V\_grid');
