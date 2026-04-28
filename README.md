# Simple Rain Detection and Alert System using ESP32 ☔

## Project Overview

This project is designed to detect rain using the MH-RD Rain Sensor Module interfaced with ESP32. When water droplets are detected on the sensor plate, the system automatically triggers an LED and buzzer as an alert indication.

The main objective of this project is to understand sensor interfacing, GPIO control, and real-time monitoring using ESP32 in embedded systems.

---

## Components Used

* ESP32
* MH-RD Rain Sensor Module
* LED
* 100Ω Resistor
* Buzzer
* Jumper Wires
* Breadboard

---

## Circuit Connections

### Rain Sensor Module

| Rain Sensor | ESP32   |
| ----------- | ------- |
| VCC         | 3.3V    |
| GND         | GND     |
| DO          | GPIO 27 |

---

### LED Connection

| LED         | ESP32                         |
| ----------- | ----------------------------- |
| Anode (+)   | GPIO 26 through 100Ω resistor |
| Cathode (-) | GND                           |

Connection:
GPIO26 → 100Ω Resistor → LED(+)
LED(-) → GND

---

### Buzzer Connection

| Buzzer       | ESP32   |
| ------------ | ------- |
| Positive (+) | GPIO 25 |
| Negative (-) | GND     |

---

## Working Principle

The MH-RD rain sensor detects water droplets on its sensing plate.

### Dry Condition

* Sensor output remains normal
* LED OFF
* Buzzer OFF

### Wet Condition

* Sensor detects moisture
* Digital output changes
* ESP32 activates LED
* ESP32 activates buzzer

This creates a simple rain alert system.

---

## Applications

* Rain Alarm System
* Smart Home Window Monitoring
* Agriculture Field Monitoring
* Weather Monitoring Systems
* Automatic Rain Alert Systems

---

## Future Improvements

* Wi-Fi notification using ESP32
* Mobile App Alert System
* LCD/OLED Display
* Automatic Window Closing System
* Cloud Monitoring using IoT Platforms

---

## Output

When rainwater is detected:
✅ LED turns ON
✅ Buzzer turns ON

When dry:
✅ LED remains OFF
✅ Buzzer remains OFF

---

## Author

Embedded With Roshan
Embedded Systems & IoT Engineer
Electronics and Telecommunication Engineer

---
