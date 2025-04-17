# TEMPERATURE-MONITORING-SYSTEM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: PIYUSH THAKUR

*INTERN ID*: CT04WK180

*DOMAIN*: EMBEDDED SYSTEM 

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

# PROJECT :- TEMPERATURE MONITORING SYSTEM 

# PROJECT PROBLEM STATEMENT:-
USE A TEMPERATURE SENSOR TO READ AND DISPLAY TEMPERATURE DATA ON AN LCD OR SERIAL MONITOR.

# COMPONENTS REQUIRED:
Arduino Uno/Nano Temperature Sensor (LM35, DHT11, or DHT22) 16x2 LCD with or without I2C module Breadboard and jumper wires

# CONNECTIONS:
For LM35 Sensor:
VCC → 5V (Arduino) 
GND → GND (Arduino) 
OUT → A0 (Arduino) 

For DHT11/DHT22 Sensor:
VCC → 5V (Arduino) 
GND → GND (Arduino)
DATA → Digital pin (e.g., D2) 

For LCD (With I2C Module): 
SDA → A4 (Arduino Uno)
SCL → A5 (Arduino Uno)
VCC → 5V
GND → GND

# WORKING:
LM35: Converts temperature into a voltage (10mV/°C). The Arduino reads this voltage via an analog pin and converts it to Celsius. DHT11/DHT22: Measures temperature digitally and sends the data via a digital pin using the DHT library Working Principle

# Use Cases of this Project:
1.  Industrial Automation
2.  Healthcare
3.  Smart Home Systems
4.  Laboratory Environments

# CIRCUIT DIAGRAM:
![Image](https://github.com/user-attachments/assets/8c3b0b84-c067-4cff-98ee-eba3eae9d28c)
