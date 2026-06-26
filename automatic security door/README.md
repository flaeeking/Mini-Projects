# Door Security System

## Overview

This project is an Arduino-based Door Security System designed to simulate a simple automated access mechanism. The system uses an IR sensor to detect the presence of an object near the door and controls a servo motor to lock and unlock the door. Audio feedback is provided through a buzzer, while a push button allows manual operation and system interaction.

The project demonstrates fundamental embedded systems concepts such as sensor interfacing, actuator control, digital input processing and real-time system behaviour.

## Features

- IR-based object detection
- Automatic door locking and unlocking
- Servo-controlled door mechanism
- Audio feedback using a buzzer
- Manual control through a push button
- Real-time sensor-based operation

## Hardware Components

- Arduino Board
- IR Sensor
- Servo Motor
- Buzzer
- Push Button
- Resistors and wiring
- Breadboard
- Power supply

## System Operation

The IR sensor continuously monitors for nearby objects. When an object is detected, the Arduino processes the sensor input and actuates the servo motor to simulate opening or unlocking the door. The buzzer provides audio feedback during system operation, and a push button allows manual interaction with the system.

## Engineering Challenges

During development, several challenges were encountered:

- Calibrating the IR sensor for reliable detection
- Synchronising sensor input and servo movement
- Preventing false triggering of the system
- Managing real-time responses and feedback
- Integrating multiple components into a single system

Solving these challenges improved my understanding of sensor interfacing, actuator control and hardware-software integration.

## Skills Demonstrated

- Arduino Programming
- Sensor Interfacing
- Servo Motor Control
- Digital Input Processing
- Real-Time Processing
- Embedded Systems Development
- Hardware-Software Integration
- Debugging and System Testing

## Future Improvements

Potential future enhancements include:

- Password-based authentication
- RFID access control
- OLED status display
- Mobile notifications
- Logging of entry attempts

## Project Outcome

This project provided practical experience in designing a simple embedded security system by integrating sensing, computation and control into a functional real-time application.
