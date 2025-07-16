# 🚁 High Voltage Laser Fighting Drone Prototype

This is a basic Arduino-based prototype for controlling a quadcopter drone's motors and a laser module. It uses simple serial commands to simulate motor throttle and toggle the laser. Designed for educational purposes only.

> ⚠️ **Warning:** Use laser components responsibly. Always wear safety goggles and follow safety protocols.

---

## Features

- Controls 4 brushless motors via ESCs using Arduino PWM signals  
- Toggle a laser module on/off  
- Simple serial commands:  
  - `w` to increase throttle (motors on)  
  - `s` to stop motors  
  - `l` to toggle laser  

---

## Components Required

- Quadcopter frame with 4 brushless motors  
- 4 ESCs (Electronic Speed Controllers)  
- Arduino board (UNO or compatible)  
- Low-power laser diode module (Class 2 or 3R recommended)  
- LiPo battery (suitable voltage and capacity)  
- RC transmitter/receiver or serial control interface  
- Wiring, connectors, and safety goggles  

---

## Circuit Connections

- Connect ESC signal wires to Arduino pins 3, 5, 6, 9  
- Connect laser module power through a MOSFET/transistor controlled by Arduino pin 10  
- Ensure all grounds are connected  
- Power supply voltage and current must match components’ specifications  

---

## How to Use

1. Upload the Arduino code (`Drone_Laser_Control.ino`) to your board  
2. Connect to the Arduino via serial monitor or compatible control interface  
3. Use commands to control motors and laser as described above  

---

## Safety Notes

- Never point lasers at people, animals, or reflective surfaces  
- Use appropriate laser safety goggles  
- High voltage and high current components can be dangerous; proceed with caution  
- Comply with local laws regarding drones and laser usage  

---

## Author

**Pradeep Kumar S**  
📧 pradeepniatian@gmail.com  
🔗 [LinkedIn](https://www.linkedin.com/in/pradeep-kumar-s-61856336b)  

---

## License

This project is for educational and experimental use only. Use responsibly.
