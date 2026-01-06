Phase 2: Button-Controlled LED (Arduino + Tinkercad)

Objective

The objective of Phase-2 is to implement a pushbutton-controlled LED system using Arduino UNO, simulated in Tinkercad.
This phase introduces digital input handling, internal pull-up resistors, and basic embedded firmware logic.


Components Used

Arduino UNO
4-pin Pushbutton
LED
220Ω current-limiting resistor
Breadboard
Jumper wires

Circuit Description

Pushbutton (4-Pin) Logic
The pushbutton has four pins internally connected as two pairs:
Pins on the same side are internally shorted
When pressed, the two sides connect
Only one pin from each side is required.

Electrical Configuration
Pushbutton connected using INPUT_PULLUP mode
Button logic is active-low
LED connected to a digital output pin with a resistor

Pin Connections
Pushbutton
Pushbutton Pin	    Arduino Pin
One side	        D2
Opposite side	    GND

LED
LED Pin     	Arduino Pin
Anode (+)	    D9
Cathode (–)	    GND via 220Ω resistor

Firmware Details
File Location
firmware\phase-2_button_led_control\button_led_control\button_led_control.ino

Logic Summary
Button pressed → input reads LOW
LED turns ON

Button released → input reads HIGH
LED turns OFF