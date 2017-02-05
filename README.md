# simple-temparature-control

This is a simple temperature controller for a heater in your home. 
It requires an arduino, a DS18B20 temperature sensor, a relay, and a single plug extension lead. The lead is cut and the neutral wire is sent to the relay, being controlled by the arduino. A temperature sensor is also connected to the arduino.

The code simply reads from the temperature sensor and if the temperature is greater than 20°C it opens the connection between the neutral wires, and if the temperature is less than 16°C then the connection closes.
