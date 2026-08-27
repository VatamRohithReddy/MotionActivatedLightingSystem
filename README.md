## 🚦 Smart Traffic Detection System (IR Sensor Module)

This module is a part of the **Smart Traffic System** that uses IR sensors to detect vehicle movement and control traffic indicators. The IR sensors identify the presence of vehicles on different lanes, and the detected information can be used for traffic monitoring and automation.

### ⚙️ Working Principle

- IR sensors are placed on traffic lanes to detect vehicles.
- When a vehicle passes in front of the IR sensor, the sensor output becomes LOW.
- The Arduino processes the sensor data.
- LEDs indicate the detection status of each lane.
- The system can be extended to control traffic lights dynamically based on vehicle density.

### 🔧 Hardware Components

- Arduino Uno / Microcontroller
- IR Obstacle Sensors
- LEDs (Traffic Indicators)
- Jumper Wires
- Breadboard
- Power Supply

### 🔌 Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| IR Sensor 1 | D2 |
| IR Sensor 2 | D3 |
| LED Indicator 1 | D7 |
| LED Indicator 2 | D6 |

### 💻 Code Functionality

- Reads input from two IR sensors.
- Detects vehicle presence.
- Turns ON the corresponding LED indicator.
- Sends detection messages through the Serial Monitor.

### 🚗 Applications

- Smart traffic signal systems
- Vehicle detection
- Traffic density monitoring
- Intelligent transportation systems
- Automated traffic management
