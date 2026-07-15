# Project 4 – Edge Computing Smart Home Appliance (Interrupts & Safety)

## Overview

This project demonstrates an interrupt-driven smart home safety system using a NodeMCU (ESP8266), PIR Motion Sensor, MQ-2 Gas Sensor, Active Buzzer, and LED. The system continuously monitors motion and gas concentration while responding immediately to hazardous conditions using interrupt-based logic.

The project was developed as part of the **Decode Labs IoT Industrial Training Program**.

---

## Hardware Components

- NodeMCU ESP8266
- PIR Motion Sensor
- MQ-2 Gas Sensor
- Active Buzzer
- Red LED
- Jumper Wires

---

## Software Used

- Arduino IDE or Nodemcu ESP8266
- Tinkercad Circuits

---

## Project Documentation

The required hardware components for this project (PIR Motion Sensor and MQ-2 Gas Sensor) were not available for physical implementation. Therefore, the complete project was designed, wired, and validated using **Tinkercad Circuits**.

The simulation accurately represents the hardware connections, interrupt-based control logic, and embedded system workflow required for the project.

---

## Tinkercad Circuit

![Project Simulation](images/tinkercad.jpg)

---

## Working Principle

1. The PIR sensor continuously monitors motion.
2. Motion detection triggers an interrupt service routine (ISR).
3. The MQ-2 gas sensor continuously checks the surrounding air quality.
4. If gas concentration exceeds the threshold, the buzzer and LED are activated immediately.
5. The system keeps monitoring both sensors in real time.

---

## Features

- Motion Detection
- Gas Leak Detection
- Interrupt-Based Programming
- Real-Time Safety Monitoring
- Buzzer Alarm
- LED Warning Indicator
- Edge Computing

---

## Skills Learned

- NodeMCU Programming
- Interrupt Handling
- Sensor Interfacing
- Embedded Safety Systems
- Edge Computing
- Arduino Programming

---

## Future Improvements

- Blynk IoT Notifications
- Cloud Monitoring
- OLED Display
- SMS Alerts
- Smart Home Automation
