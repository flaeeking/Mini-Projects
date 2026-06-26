# Smart Power Grid Simulation

## Overview

This project is an ESP32-based Smart Power Grid Simulation designed to demonstrate the principles of electrical load management and prioritised power distribution.
The system simulates how modern power grids monitor electricity consumption and maintain stability by disconnecting lower-priority loads when power demand exceeds predefined limits. 
The project integrates sensing, real-time processing and user feedback while demonstrating key embedded systems concepts and power management strategies.

## Features

- Simulated electrical load monitoring
- Prioritised load management and load shedding
- Real-time system feedback using an OLED display
- power usage calculations
- Multiple simulated electrical loads
- Real-time decision-making and control

## Hardware Components

- ESP32 Development Board
- SSD1306 OLED Display
- Push Buttons / Switches
- LEDs for simulated loads
- Resistors and wiring
- Breadboard
- Power supply

## System Operation

The system continuously monitors the simulated power consumption of connected loads. Each load is assigned a priority level and contributes to the total power demand. 
When the total demand exceeds a predefined limit, the ESP32 automatically disconnects lower-priority loads to maintain system stability.

The OLED display provides real-time feedback, including:

- Active loads
- Total simulated power consumption
- System status
- Load shedding actions

## Engineering Challenges

During development, several challenges were encountered:

- Designing an effective load prioritisation algorithm
- Managing multiple load states simultaneously
- Implementing real-time system updates
- Ensuring reliable OLED feedback
- Structuring program logic for scalable load management
- Simulating realistic power distribution behaviour

Solving these challenges improved my understanding of embedded software architecture, state management, 
real-time processing and practical approaches to electrical load management.

## Skills Demonstrated

- Embedded Systems Development
- ESP32 Programming
- OLED Display Interfacing
- Control System Design
- Real-Time Processing
- State Management
- Algorithm Design
- Power Distribution Concepts
- Hardware-Software Integration
- Debugging and System Testing

## Future Improvements

Potential future enhancements include:

- Current and voltage sensing using physical sensors
- Wi-Fi monitoring dashboard
- Data logging and analytics
- Mobile application integration
- Dynamic power pricing simulation
- Renewable energy source integration

## Project Outcome

This project strengthened my understanding of how embedded systems can be used to monitor, analyse and control electrical systems in real time. 
It also provided practical insight into power distribution, load management strategies and the role of embedded control in modern electrical infrastructure.
