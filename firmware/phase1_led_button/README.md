# Phase 1: LED Control Using Push Button

## Objective
To validate the digital input and output functionality of Arduino UNO using a push button and an LED.

## Platform
- Arduino UNO (Tinkercad Simulation)
- Embedded C (Arduino)

## Circuit Description
- LED is connected to digital pin D8 through a 220Ω resistor.
- Push button is connected to digital pin D7 and GND.
- Internal pull-up resistor is enabled for stable input operation.

## Working Principle
- When the push button is pressed, the input pin reads LOW.
- Arduino sets the LED pin HIGH, turning the LED ON.
- When the button is released, the LED turns OFF.

## Key Concepts Covered
- GPIO configuration
- INPUT_PULLUP
- Active-low logic
- Digital input/output validation

## Result
The circuit works as expected in Tinkercad simulation and is ready for real hardware implementation.
