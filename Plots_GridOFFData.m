clear all; close all; clc;
load("GridOFFData.mat");

%% Step 1: Define helper function to split 3-phase signals
process_3phase = @(ts, name) deal( ...
    timeseries(ts.Data(:,1), ts.Time, 'Name', [name ' A']), ...
    timeseries(ts.Data(:,2), ts.Time, 'Name', [name ' B']), ...
    timeseries(ts.Data(:,3), ts.Time, 'Name', [name ' C']) ...
);

%% Step 2: Split and process signals
[Ia_grid, Ib_grid, Ic_grid] = process_3phase(out.I_grid, 'I\_grid');
[Va_grid, Vb_grid, Vc_grid] = process_3phase(out.V_grid, 'V\_grid');

[Ia_DG, Ib_DG, Ic_DG] = process_3phase(out.I_DG, 'I\_DG');
[Va_DG, Vb_DG, Vc_DG] = process_3phase(out.V_DG, 'V\_DG');

[Ia_inv, Ib_inv, Ic_inv] = process_3phase(out.I_inverter, 'I\_inverter');
[Va_inv, Vb_inv, Vc_inv] = process_3phase(out.V_inverter, 'V\_inverter');

[Ia_out, Ib_out, Ic_out] = process_3phase(out.I_out, 'I\_out');
[Va_out, Vb_out, Vc_out] = process_3phase(out.V_out, 'V\_out');

%% Step 2.5: Compute Instantaneous Powers
p_grid = timeseries( ...
    Va_grid.Data .* Ia_grid.Data + ...
    Vb_grid.Data .* Ib_grid.Data + ...
    Vc_grid.Data .* Ic_grid.Data, ...
    Va_grid.Time, 'Name', 'P\_grid');

p_DG = timeseries( ...
    Va_DG.Data .* Ia_DG.Data + ...
    Vb_DG.Data .* Ib_DG.Data + ...
    Vc_DG.Data .* Ic_DG.Data, ...
    Va_DG.Time, 'Name', 'P\_DG');

p_inv = timeseries( ...
    Va_inv.Data .* Ia_inv.Data + ...
    Vb_inv.Data .* Ib_inv.Data + ...
    Vc_inv.Data .* Ic_inv.Data, ...
    Va_inv.Time, 'Name', 'P\_inverter');

p_out = timeseries( ...
    Va_out.Data .* Ia_out.Data + ...
    Vb_out.Data .* Ib_out.Data + ...
    Vc_out.Data .* Ic_out.Data, ...
    Va_out.Time, 'Name', 'P\_out');

%% Step 3: Plot function for 3-phase time series
function plot_3phase(a, b, c, title_text, y_label)
    figure;
    plot(a, 'r', 'LineWidth', 2); hold on;
    plot(b, 'g', 'LineWidth', 2);
    plot(c, 'b', 'LineWidth', 2);
    legend('Phase A', 'Phase B', 'Phase C');
    title(title_text);
    xlabel('Time (s)');
    ylabel(y_label);
    grid on;
end

%% Step 4: Plot all time-domain waveforms
plot_3phase(Ia_grid, Ib_grid, Ic_grid, 'Grid Current (I\_grid)', 'Current (A)');
plot_3phase(Va_grid, Vb_grid, Vc_grid, 'Grid Voltage (V\_grid)', 'Voltage (V)');

plot_3phase(Ia_DG, Ib_DG, Ic_DG, 'DG Current (I\_DG)', 'Current (A)');
plot_3phase(Va_DG, Vb_DG, Vc_DG, 'DG Voltage (V\_DG)', 'Voltage (V)');

plot_3phase(Ia_inv, Ib_inv, Ic_inv, 'Inverter Current (I\_inverter)', 'Current (A)');
plot_3phase(Va_inv, Vb_inv, Vc_inv, 'Inverter Voltage (V\_inverter)', 'Voltage (V)');

plot_3phase(Ia_out, Ib_out, Ic_out, 'Output Current (I\_out)', 'Current (A)');
plot_3phase(Va_out, Vb_out, Vc_out, 'Output Voltage (V\_out)', 'Voltage (V)');

%% Step 4.5: Plot Instantaneous Power
figure;
plot(p_grid.Time, p_grid.Data, 'LineWidth', 2); grid on;
title('Instantaneous Power - Grid (P\_grid)');
xlabel('Time (s)'); ylabel('Power (W)');

figure;
plot(p_DG.Time, p_DG.Data, 'LineWidth', 2); grid on;
title('Instantaneous Power - DG (P\_DG)');
xlabel('Time (s)'); ylabel('Power (W)');

figure;
plot(p_inv.Time, p_inv.Data, 'LineWidth', 2); grid on;
title('Instantaneous Power - Inverter (P\_inverter)');
xlabel('Time (s)'); ylabel('Power (W)');

figure;
plot(p_out.Time, p_out.Data, 'LineWidth', 2); grid on;
title('Instantaneous Power - Output (P\_out)');
xlabel('Time (s)'); ylabel('Power (W)');

%% Step 5: FFT & THD Function (with DC component)
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
    max_harmonic_order = 20;
    harmonics = zeros(1, max_harmonic_order - 1);
    for k = 2:max_harmonic_order
        harmonic_freq = 50 * k;
        [~, idx] = min(abs(f - harmonic_freq));
        if idx <= length(P1)
            harmonics(k-1) = P1(idx);
        end
    end
    thd_val = (sqrt(sum(harmonics.^2)) / fundamental )* 100;

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

%% Step 6: Run FFT & THD on All Signals

% Currents
plot_fft(Ia_grid, 'I\_grid');   plot_fft(Ib_grid, 'I\_grid');   plot_fft(Ic_grid, 'I\_grid');
plot_fft(Ia_DG, 'I\_DG');       plot_fft(Ib_DG, 'I\_DG');       plot_fft(Ic_DG, 'I\_DG');
plot_fft(Ia_inv, 'I\_inverter');plot_fft(Ib_inv, 'I\_inverter');plot_fft(Ic_inv, 'I\_inverter');
plot_fft(Ia_out, 'I\_out');     plot_fft(Ib_out, 'I\_out');     plot_fft(Ic_out, 'I\_out');

% Voltages
plot_fft(Va_grid, 'V\_grid');   plot_fft(Vb_grid, 'V\_grid');   plot_fft(Vc_grid, 'V\_grid');
plot_fft(Va_DG, 'V\_DG');       plot_fft(Vb_DG, 'V\_DG');       plot_fft(Vc_DG, 'V\_DG');
plot_fft(Va_inv, 'V\_inverter');plot_fft(Vb_inv, 'V\_inverter');plot_fft(Vc_inv, 'V\_inverter');
plot_fft(Va_out, 'V\_out');     plot_fft(Vb_out, 'V\_out');     plot_fft(Vc_out, 'V\_out');

% Power FFT
plot_fft(p_grid, 'P\_grid');
plot_fft(p_DG, 'P\_DG');
plot_fft(p_inv, 'P\_inverter');
plot_fft(p_out, 'P\_out');
