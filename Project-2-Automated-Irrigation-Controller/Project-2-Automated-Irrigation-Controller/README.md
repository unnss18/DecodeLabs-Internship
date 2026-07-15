# Automated Irrigation Controller (Project 2)

## Overview

This project implements an Automated Irrigation Controller using an Arduino Uno, Soil Moisture Sensor, and Relay Module. The controller continuously monitors soil moisture and automatically controls the water pump based on predefined moisture thresholds.

---

## Components Used

- Arduino Uno
- Soil Moisture Sensor
- 5V Relay Module
- LED
- Breadboard
- Jumper Wires

---

## Software Used

- Arduino IDE
- Tinkercad Circuits

---

## Project Documentation

This project was originally implemented and tested using physical hardware during my college hours with the available components

But first the Soil Moisture Sensor's complete circuit has also been recreated and verified using Tinkercad Circuits to demonstrate the wiring connections and system logic.



## Hardware Implementation

![Hardware Setup](images/your-college-photo.jpg)



## Tinkercad Simulation

![Tinkercad Circuit](images/tinkercad-irrigation.png)



## Connections

| Component | Arduino Pin |
|-----------|-------------|
| Soil Moisture Sensor AO | A0 |
| Relay Module IN | Digital Pin 8 |
| VCC | 5V |
| GND | GND |



## Working Principle

1. Read the analog value from the soil moisture sensor.
2. Compare the value with a predefined threshold.
3. Turn the relay ON when the soil is dry.
4. Turn the relay OFF when adequate moisture is detected.
5. Repeat the process continuously.

-


## Skills Learned

- Analog-to-Digital Conversion (ADC)
- Soil Moisture Monitoring
- Relay Interfacing
- Threshold-Based Automation
- Arduino Programming
- Embedded Systems

