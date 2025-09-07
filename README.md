Automatic Irrigation System and Plant Watering System

CMR Engineering College – UGC Autonomous
Department of Artificial Intelligence and Machine Learning
Real-Time Project – Batch B4

Under the Guidance of:
E. Parvathi, Assistant Professor, ECE, CMREC

Submitted by:
D. Vamshi (228R1A6675)
G. Varshith (228R1A6683)
M. Sai Abhi Ram (228R1A66A5)
P. Sathwik (228R1A66B1)

Aim
The aim of this project is to develop an automatic irrigation and plant watering system using an Arduino Uno. The system monitors soil moisture and waters plants automatically to:
Ensure proper plant hydration
Conserve water by avoiding overwatering
Provide real-time monitoring and alerts
Be scalable for different garden sizes

Motivation
Plants require regular watering, but during long trips or busy schedules, they may suffer due to lack of moisture. This project addresses that issue by automating irrigation, keeping plants healthy even when unattended.

Abstract
This Arduino-based plant irrigation system uses soil moisture sensors, a relay module, and a water pump to automatically water plants. The system activates the pump only when the soil is dry, conserving water and promoting plant health. Real-time monitoring and alerts make it user-friendly, while the design is scalable for home gardens or agricultural plots.

Components Required
Arduino Uno
Soil moisture sensor
5V relay module
6V mini water pump with pipe
Connecting wires
5V battery
Existing System
Manual watering or timer-based systems often waste water and cannot adapt to soil conditions.
Proposed System
An automated, sensor-based system that monitors soil moisture in real-time and waters plants only when needed, saving water and maintaining plant health.

Working Principle
Soil moisture sensor measures soil water content.
Arduino Uno reads the sensor data and compares it with a preset threshold.
If the soil is dry, Arduino activates the relay module.
Relay powers the mini water pump to water the plants.
The system continuously monitors moisture and turns off the pump once optimal levels are reached.

Component Functions
Arduino Uno – Controls the system, reads sensor data, triggers the relay.
Moisture Sensor – Measures soil moisture in real-time and sends data to Arduino.
5V Relay Module – Acts as a switch to control the water pump.
6V Mini Water Pump – Delivers water to plants when activated.
5V Battery & Wires – Powers the system and ensures signal communication.
