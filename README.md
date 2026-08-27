## 🔍 IR Sensor Detection Module

This module uses two IR sensors to detect object presence and provides visual feedback using LEDs.

### Working

- IR sensors are connected to Arduino digital input pins.
- When an object is detected, the IR sensor output becomes LOW.
- The corresponding LED turns ON.
- Detection status is displayed through the Serial Monitor.

### Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| IR Sensor 1 | D2 |
| IR Sensor 2 | D3 |
| LED 1 | D7 |
| LED 2 | D6 |

### Applications

- Smart dustbin object detection
- Object counting systems
- Automation projects
- Obstacle detection
