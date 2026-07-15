# Project 3 – Cloud Connected Security Node (IoT Telemetry)

## Overview

This project implements a cloud-connected security monitoring system using an ESP32 development board and an HC-SR04 ultrasonic sensor. The measured distance is transmitted over Wi-Fi to the **Blynk IoT Platform**, allowing real-time monitoring from a smartphone.

This project was developed as part of the **Decode Labs IoT Industrial Training Program** and demonstrates IoT telemetry, cloud communication, and remote monitoring using the ESP32.

---

# Hardware Used

- ESP32 Development Board
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper Wires
- USB Cable

---

# Software Used

- Arduino IDE
- ESP32 Board Package
- Blynk IoT Platform
- Tinkercad Circuits

---

# Features

- Real-Time Distance Measurement
- Wi-Fi Connectivity
- Blynk Cloud Integration
- Live Smartphone Dashboard
- IoT Telemetry
- Remote Monitoring

---

# Hardware Prototype

The project was implemented using an ESP32 development board and HC-SR04 ultrasonic sensor.

![Hardware](images/esp32-hardware.jpg)

---

# Blynk Dashboard

The measured distance is displayed live on the Blynk mobile dashboard.

![Blynk Output](images/esp32-software.jpg)

---

# Circuit Design

The circuit was recreated using Tinkercad to document the complete hardware wiring.

![Tinkercad Circuit](images/esp32-ultrasonic-tinkercad.jpg)

---

# Circuit Connections

| ESP32 GPIO | HC-SR04 |
|------------|----------|
| GPIO 5 | Trigger |
| GPIO 18 | Echo |
| 5V | VCC |
| GND | GND |

---

# Working Principle

1. ESP32 connects to the local Wi-Fi network.
2. The HC-SR04 continuously measures the distance to nearby objects.
3. The measured distance is processed by the ESP32.
4. The data is transmitted to the Blynk Cloud using Wi-Fi.
5. The Blynk mobile application displays the distance in real time.

---

# Skills Learned

- ESP32 Programming
- Ultrasonic Sensor Interfacing
- Wi-Fi Networking
- Blynk IoT Platform
- Cloud Telemetry
- IoT Dashboard Design
- Embedded Systems

---

# Future Improvements

- Intruder Detection Alerts
- Email/SMS Notifications
- Cloud Data Logging
- OLED Display Integration
- Motion-Based Alarm System
