# Voice-controlled-water-pump
A simple and effective Arduino-based system that uses the Elechouse Voice Recognition V3 module to control a water pump via voice commands like “Pump ON” and “Pump OFF”. This project demonstrates how voice input can be used for home automation, especially useful in agricultural or domestic settings.

Voice Controlled Water Pump - README

A hands-free water pump control system using voice commands with an Arduino Uno and the Elechouse
Voice Recognition Module V3. Ideal for home automation, garden irrigation, or other remote-control
applications where physical switches are inconvenient.
Project Overview
This project demonstrates how to control a water pump using voice commands such as "PUMP ON" and
"PUMP OFF". The system uses an Arduino to process voice inputs via the Elechouse Voice Recognition
Module and toggles a relay module that powers the water pump.
Features
- Voice-controlled ON/OFF switching for water pump
- Real-time feedback via Serial Monitor
- Safety ensured by default pump OFF state
- Compact and easy to implement
- Expandable with more voice commands or sensors
Hardware Requirements
- Arduino Uno
- Elechouse Voice Recognition Module V3
- Relay Module (5V)
- Water Pump (compatible with relay voltage)
Voice Controlled Water Pump - README
- Breadboard and Jumper Wires
- External Power Supply (for pump)
Pin Configuration
Component | Arduino Pin
------------------------|--------------
VR Module RX | Digital Pin 2
VR Module TX | Digital Pin 3
Relay IN (control pin) | Digital Pin 9
Code Summary
The Arduino sketch uses SoftwareSerial to communicate with the VR module and
ElechouseVoiceRecognitionV3 for command recognition.
Voice Commands:
- Command 0: "PUMP ON" -> Turns the pump ON
- Command 1: "PUMP OFF" -> Turns the pump OFF
Expected Output
Voice Command | Action | Serial Output
---------------|------------------|------------------------
"PUMP ON" | Pump Turns ON | Pump is turned ON
"PUMP OFF" | Pump Turns OFF | Pump is turned OFF
No command | Pump remains OFF | Voice Control System Initialized

GETTING STARTED
Voice Controlled Water Pump - README
1. Train your VR module with two commands: "PUMP ON" and "PUMP OFF".
2. Upload the provided code to your Arduino.
3. Connect the hardware as per the circuit diagram.
4. Open the Serial Monitor (9600 baud) to see feedback.
5. Speak your trained commands to control the water pump.

FUTURE ENHANCEMENTS
- Add more voice commands for additional devices.
- Integrate soil moisture sensor for smart irrigation.
- Connect with IoT platforms for remote access.
  
LICENSE
This project is open-source and available under the MIT License.
Author
Payal - GitHub: https://github.com/payalmishra1809
