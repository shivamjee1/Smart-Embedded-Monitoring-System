📄 Phase 3 – Button Toggle with Software Debouncing

Objective
Implement a reliable push-button controlled LED toggle system using software debouncing to eliminate false triggers caused by mechanical noise.

Components Used
1.Arduino UNO
2.Push Button
3.220Ω Resistor
4.LED
5.Breadboard & Jumper Wires

Functional Description
1.LED turns ON when the button is pressed once.
2.LED turns OFF when the button is pressed again.
3.Continuous pressing does not cause multiple toggles.
4.Software debouncing ensures stable operation.

Key Concepts Applied
1.State machine logic
2.Edge detection (LOW → HIGH transition)
3.Software debouncing using millis()
4.Non-blocking delay technique
5.Boolean state management

Why Debouncing Is Required
Mechanical push buttons generate multiple rapid ON/OFF signals during a single press.
Without debouncing, this causes:
1.Multiple toggles per press
2.Unstable behavior

Debouncing filters out these unwanted transitions.

Learning Outcomes
1.Understand real-world input signal behavior
2.Write deterministic embedded logic
3.Avoid blocking delays
4.Develop industry-grade firmware habits

Status
✔ Phase-3 Completed
✔ Simulation verified in Tinkercad