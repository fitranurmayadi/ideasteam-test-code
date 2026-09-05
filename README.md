# ideaSTEAM eXperiment Board version 1 (XB1) — Firmware & Test Suite

[![Board: ideaSTEAM XB1](https://img.shields.io/badge/Hardware-ideaSTEAM%20XB1%20(Custom%20PCB)-red.svg)]()
[![SoC: ESP32](https://img.shields.io/badge/SoC-ESP32--WROOM--32-blue.svg)]()
[![Display: 0.96 OLED](https://img.shields.io/badge/Display-0.96%22%20I2C%20SSD1306-orange.svg)]()
[![Motors: Dual H-Bridge](https://img.shields.io/badge/Actuation-Dual%20DC%20Motor%20Drivers-green.svg)]()

Complete testing codebase and pedagogical firmware modules for the **ideaSTEAM eXperiment Board v1 (XB1)**, a custom 2-layer electronics development board engineered by **Fitra Nurmayadi** based on the ESP32 SoC for embedded systems and STEM robotics education.

---

## 🛠 Onboard Hardware Peripherals

- **Microcontroller**: ESP32-WROOM-32 (240 MHz dual-core, Wi-Fi & Bluetooth).
- **Display**: 0.96-inch 128×64 I2C monochrome OLED (SSD1306).
- **Motor Driver**: Integrated dual H-Bridge DC motor controller with PWM speed control.
- **Visual Indicators**: Addressable multi-color RGB LEDs & individual status LEDs.
- **Acoustic Feedback**: Passive piezo buzzer for tone and frequency generation.
- **User Inputs**: Tactile pushbuttons and analog potentiometer for variable voltage input.
- **Sensor Headers**: Dedicated breakout pin headers for analog light sensors (LDR), temperature sensors (LM35/DS18B20), ultrasonic sensors (HC-SR04), and I2C peripherals.

---

## 📚 Firmware Test Modules

| Module Directory | Topic / Experiment |
| :--- | :--- |
| ideaSTEAM_percobaan1 | Digital Output: Blinking LEDs & Pin Logic |
| ideaSTEAM_percobaan2 | Digital Input: Pushbutton Debouncing & State Detection |
| ideaSTEAM_percobaan3 | Analog Input: Potentiometer ADC Reading |
| ideaSTEAM_percobaan4 | PWM Analog Output: LED Fading & Variable Brightness |
| ideaSTEAM_percobaan5 | Tone Generation: Melodies & Frequency on Passive Buzzer |
| ideaSTEAM_percobaan6 | I2C OLED: Graphic Primitives, Text, and Sensor Plotting |
| ideaSTEAM_percobaan7 | Motor Actuation: Directional H-Bridge Drive & Speed Regulation |
| ideaSTEAM_percobaan8 | Integrated System: Sensor-Triggered Automation |
| ideaSTEAM_pingpong_Game| Interactive Retro Game running standalone on OLED + Buttons |
| IDEASTEAM_ALL_TEST | Comprehensive Hardware Self-Test Routine |

---

## 📄 Documentation

For full pin mapping diagrams and schematics, refer to the included [IdeaSTEAM-XB1-UserGuide.pdf](IdeaSTEAM-XB1-UserGuide.pdf).

MIT License © [Fitra Nurmayadi](https://github.com/fitranurmayadi).