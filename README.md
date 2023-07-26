# MedianAcc
# Arduino Ultrasonic Sensor Project

This is an Arduino project that utilizes ultrasonic sensors to measure distances and control motors based on the measured distances.

## Hardware Components

- Arduino board (e.g., Arduino Uno)
- Ultrasonic Sensor 1 (connected to TRIG_PIN and ECHO_PIN)
- Ultrasonic Sensor 2 (connected to TRIG2_PIN and ECHO2_PIN)
- LED (connected to LED_PIN)
- Motor 1 (connected to MOTOR_PIN, MOTOR_PIN1, and MOTOR_PIN2)
- Motor 2 (connected to MOTOR2_PIN, MOTOR2_PIN1, and MOTOR2_PIN2)

## How It Works

The Arduino board is connected to two ultrasonic sensors, each with a TRIG pin and an ECHO pin. The sensors are used to measure distances in centimeters. The distances are calculated based on the duration of pulses received from the ECHO pins.

If either of the measured distances is less than the defined DISTANCE_THRESHOLD (10 cm), the LED will turn on, and both motors will be turned off. Otherwise, the LED will be turned off, and both motors will be turned on.

## Pin Configuration

- TRIG_PIN: Arduino pin connected to Ultrasonic Sensor 1's TRIG pin
- ECHO_PIN: Arduino pin connected to Ultrasonic Sensor 1's ECHO pin
- TRIG2_PIN: Arduino pin connected to Ultrasonic Sensor 2's TRIG pin
- ECHO2_PIN: Arduino pin connected to Ultrasonic Sensor 2's ECHO pin
- LED_PIN: Arduino pin connected to LED's pin
- MOTOR_PIN: Arduino pin connected to motor 1
- MOTOR_PIN1: First pin of motor 1
- MOTOR_PIN2: Second pin of motor 1
- MOTOR2_PIN: Arduino pin connected to motor 2
- MOTOR2_PIN1: First pin of motor 2
- MOTOR2_PIN2: Second pin of motor 2

## Installation

1. Connect the hardware components according to the pin configuration mentioned above.
2. Upload the Arduino sketch to your Arduino board using the Arduino IDE or your preferred method.
3. Power on the Arduino board.



If you wish to contribute to the project, follow the guidelines mentioned in [CONTRIBUTING.md](CONTRIBUTING.md) (Add a contributing guidelines file if applicable).

## Contact

Provide your contact information or a way for users to reach out to you if they have questions or feedback about the project.

