# ⚡ Micro-Grid Modeling and Simulation in Simulink

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Built with MATLAB](https://img.shields.io/badge/MATLAB-Simulink-orange.svg)](https://www.mathworks.com/products/simulink.html)

A modular MATLAB **Simulink** model for studying the dynamic operation of a microgrid system under various conditions. This work was developed by Haimavatinandan Pati, B.Tech. Electrical Engineering, NIT Rourkela, India.

---

## 🎯 Overview

This repository contains the complete Simulink model and MATLAB scripts used to simulate a microgrid system comprising:

* **Battery Energy Storage System (BESS):** Implemented as an **Online Uninterruptible Power Supply (UPS)** with an isolated bidirectional battery charger and Soft Charging Circuit (SCC).
* **Diesel Generator (DG):** Serving as a backup source with frequency and excitation control systems.
* **Main Utility Grid:** The primary connection point for grid-connected operation.
* **Electrical Loads:** A 10 kW load for system testing.

The model is designed to analyze the system's performance and stability during key operational modes, providing a foundation for parameter calculation and control system design.

---

## 🚀 Key Features and Simulation Modes

The report focuses on two critical operation modes:

### 1. The Islanded Mode
The microgrid is disconnected from the main grid (simulating a power outage) and operates autonomously.
* **Objective:** The BESS and DG provide power to maintain voltage and frequency stability under local control.
* **Findings:** The simulation shows the microgrid maintaining stable operation, though the initial transition time is slow and can be significantly reduced with enhanced inverter control.

### 2. The Black Start Mode (Grid-Connected)
The microgrid remains connected to the main utility grid, with the BESS operating in conjunction with the grid to manage power flow and battery charging.
* **Objective:** Study coordinated operation, power sharing, and BESS charging characteristics.
* **Findings:** The battery undergoes constant current charging (as shown by stable **State of Charge (SOC)** and battery current). However, the analysis highlighted significant **Total Harmonic Distortion (THD)** in the inverter and grid currents, emphasizing the need for improved filtering/control in this mode.

---

## 📁 Repository Structure

The main files in this repository are:

| File Name | Description |
| :--- | :--- |
| `Micro_Grid_BatteryCharging.slx` | The core Simulink model file for the microgrid system. |
| `MicroGridParameters.m` | MATLAB script containing system parameters (DG, Grid, UPS ratings, etc.). **Run this file first!** |
| `Plots_Grid.m` | Script to generate plots for the **Black Start (Grid-Connected)** mode. |
| `Plots_GridOFFData.m` | Script to generate plots for the **Islanded** mode. |
| `slprj/` | Simulink project/cache files (ignored by `.gitignore`). |
| `.gitignore` | Ensures that large data files (`.mat`) and temporary files are not tracked. |
| `LICENSE` | The MIT License for this project. |

---

## 🛠️ Getting Started

### Prerequisites

* **MATLAB:** R2018b or a later version.
* **Simulink:** Requires the Simscape Electrical (formerly SimPowerSystems) toolbox.

### Running the Simulations

1.  **Clone the repository:**
    ```bash
    git clone (https://github.com/Haimavatinandan2004Pati/Micro-Grid-Modelling-and-Simulation.git)
    cd Micro-Grid-Modelling-and-Simulation
    ```
2.  **Open MATLAB.**
3.  **Run the Parameters Script:**
    ```matlab
    MicroGridParameters
    ```
    This script loads all necessary variables and configurations into the MATLAB workspace.
4.  **Open the Model:**
    ```matlab
    open Micro_Grid_BatteryCharging.slx
    ```
5.  **Run Simulation:**
    * To simulate the **Islanded Mode**, ensure the relevant switching logic is set within the model and run the simulation. Then, execute `Plots_GridOFFData.m` to view results.
    * To simulate the **Black Start Mode**, ensure the relevant switching logic is set for grid-connected operation, run the simulation, and execute `Plots_Grid.m` to view results.

---

## 📝 Keywords

**Online UPS** | **BESS** | **Islanded Mode** | **Black Start Mode** | **Soft Charging Circuit (SCC)** | **Diesel Generator (DG)** | **Fast Fourier Transform (FFT)** | **Total Harmonic Distortion (THD)**

---

## ⚖️ License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

---

## 👨‍💻 Author

**Haimavatinandan Pati**
B.Tech. Electrical Engineering
NIT Rourkela, Odisha, India
