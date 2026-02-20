# SmartHome-Automation-Embedded
ESP32-based IoT Smart Home Automation system for remotely controlling appliances via WiFi using relay module (simulated using Wokwi
#  IoT-Based Smart Home Automation using ESP32

# Project Description
This project implements an IoT-based smart home automation system using ESP32. It allows users to control home appliances remotely through WiFi. A relay module is used to switch the appliance, and an LED is used as a simulated load in the Wokwi environment.

# Features
- Control appliances wirelessly using WiFi
- ESP32-based embedded system
- Relay module for appliance switching
- Web server interface for ON/OFF control
- Simulated using Wokwi (no hardware required)

# Components Used
- ESP32 Development Board
- Relay Module
- LED (as appliance simulation)
- 220Ω Resistor
- Connecting wires

# Circuit Connections
## ESP32 → Relay
- GPIO 2 → IN
- 5V → VCC
- GND → GND

## Relay → LED
- COM → 5V
- NO → Resistor → LED (Anode)
- LED (Cathode) → GND

# Software & Tools
- Arduino IDE / Embedded C
- Wokwi Online Simulator

# working
1. ESP32 connects to WiFi.
2. A web server is created on ESP32.
3. User sends ON/OFF commands via web interface.
4. Relay switches the appliance (LED) accordingly.

# Output
- Successful WiFi connection shown in Serial Monitor
- Relay toggles the LED ON and OFF

# Applications
- Smart home automation
- Remote appliance control
- Energy management systems
