clc;
clear all;
close all;

%% Parameters for Diesel Generator
% Base Machine Parameters
Pn = 50e3;         % Nominal power (VA)
Vn = 310*sqrt(3);          % Line-to-line voltage (Vrms)
fn = 50;           % Frequency (Hz)

% Reactances [Xd Xd' Xd'' Xq Xq'' Xl] (pu)
Xd   = 1.305;
Xd1  = 0.296;
Xd2  = 0.252;
Xq   = 0.474;
Xq2  = 0.243;
Xl   = 0.18;

% Time Constants [Td' Td'' Tq'']
Td1  = 1.01;
Td2  = 0.053;
Tq2  = 0.1;

% Stator Resistance
Rs = 2.8544e-3;

% Inertia, Friction, and Pole Pairs [H F p]
H = 3.2;
F = 0.2;
p = 2;

% Initial Conditions 
dw_init = 0;                  % Speed deviation from synchronous speed (in percent)
theta_init = -94.2826;        % Rotor electrical angle (in degrees)

ia_init = 0.750185;           % Phase A stator current (in per unit)
ib_init = 0.750185;           % Phase B stator current (in per unit)
ic_init = 0.750185;           % Phase C stator current (in per unit)

phase_a_init = -24.943;       % Phase A voltage angle (in degrees)
phase_b_init = -144.943;      % Phase B voltage angle (in degrees)
phase_c_init = 95.057;        % Phase C voltage angle (in degrees)

Vf_init = 1.29071;            % Field voltage input to the generator (in per unit)

% Reference Values for Control
wref = 1;     % Speed reference (pu)
Pref = 1;     % Power reference (pu)
Vref = 1;     % Voltage reference (pu)

% Active Power 
P_total = 150e6; % Active power in W

% Values in vectors 
Reactances = [Xd Xd1 Xd2 Xq Xq2 Xl];
TimeConstants = [Td1 Td2 Tq2];
InertiaFrictionPolePairs = [H F p];
InitialConditions = [dw_init theta_init ia_init ib_init ic_init phase_a_init phase_b_init   phase_c_init Vf_init ];
PowerVoltageFrequency = [Pn Vn fn];

%% Parameters for Three Phase Inverter
 Ts = 30e-6;
 Vref = 200;
 Cfilter = 40e-6; 
 Lfilter = 2.5e-3; 
 Vdc = 500; 
 Res = 100;
%% Parameters for UPS
VDC_Link = 12;