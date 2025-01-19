# Arduino Bluetooth Controlled Car 🚗📱

This repository contains the code and circuit diagram for a **Bluetooth-controlled car** using Arduino and the **L298N Motor Driver**. The car can be easily controlled via the popular **Bluetooth Car Control** Android application available on the [Google Play Store](https://play.google.com/store/apps/details?id=com.electro_tex.bluetoothcar&hl=en).

## Features
- **Bluetooth Connectivity**: Wirelessly control the car using your smartphone.
- **L298N Motor Driver**: Drives the motors with support for forward, backward, left, and right movements.
- **Arduino Microcontroller**: Manages all the commands and motor operations.
- **Mobile App Compatibility**: Works seamlessly with the **Bluetooth Car Control** app for Android.

## Components Used
- **Arduino Board** (e.g., Uno, Nano, etc.)
- **L298N Motor Driver Module**
- **HC-05 Bluetooth Module**
- **DC Motors** (for wheels)
- **Power Supply** (e.g., batteries)
- **Chassis** for the car

## Circuit Diagram
The circuit diagram can be found in the `Circuit_Diagram.png` file. It illustrates the connections between the Arduino, L298N Motor Driver, motors, and Bluetooth module.

## Getting Started

### 1. Circuit Setup
1. Connect the **Arduino** board to the **L298N Motor Driver**.
2. Connect motors to the motor driver according to the circuit diagram.
3. Connect the **HC-05 Bluetooth Module** to the Arduino.

### 2. Upload Code
- Open the provided Arduino sketch (`Bluetooth_Car_Control.ino`) in the Arduino IDE.
- Ensure the correct board and port are selected.
- Upload the code to the Arduino board.

### 3. Control via Mobile App
1. Pair your smartphone with the HC-05 Bluetooth module.
2. Open the **Bluetooth Car Control** app on your smartphone.
3. Use the app to control the car's movement.

## Code Overview
The Arduino sketch (`Bluetooth_Car_Control.ino`) handles:
- Receiving input commands via Bluetooth.
- Controlling the motors for forward, backward, left, and right movements.

Thanks for reading through, hope you like it :-)
Shri Harivansh
