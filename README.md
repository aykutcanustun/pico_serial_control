Pico Serial Control Library
This repository contains a library for controlling a servo motor using a Raspberry Pi Pico via serial communication. The library includes Arduino and Python scripts to facilitate serial communication and servo motor control.

Contents
pico_serial_control.ino: Arduino code for the Raspberry Pi Pico to control a servo motor based on received serial commands.
pico_serial_control.py: Python script to send commands to the Raspberry Pi Pico via serial communication.
port-kontrol.py: Python script to list all available serial ports on the system.
Requirements
Hardware
Raspberry Pi Pico
Servo motor (e.g., SG90)
USB cable for connecting the Pico to your computer
Software
Arduino IDE
Python 3.x
PySerial library for Python
Installation
Arduino Setup
Open the pico_serial_control.ino file in the Arduino IDE.
Connect your Raspberry Pi Pico to your computer via USB.
Select the correct board and port from the Tools menu.
Upload the code to the Raspberry Pi Pico.
Python Setup
Install the PySerial library using pip:

bash
Copy code
pip install pyserial
Download the Python scripts (pico_serial_control.py and port-kontrol.py) from this repository.

Usage
Listing Available Serial Ports
Run the port-kontrol.py script to list all available serial ports on your system. This will help you identify the correct port to use for communication with the Raspberry Pi Pico.

bash
Copy code
python port-kontrol.py
Sending Commands to the Raspberry Pi Pico
Use the pico_serial_control.py script to send commands to the Raspberry Pi Pico. Update the serial port in the script to match the port identified in the previous step.

Command Options
0: Move the servo motor from 0 to 180 degrees.
1: Move the servo motor from 180 to 0 degrees.
To run the script, use the following command:

bash
Copy code
python pico_serial_control.py
You will be prompted to enter a command (0 or 1). The script will send the command to the Raspberry Pi Pico, which will then move the servo motor accordingly.

Example
bash
Copy code
python pico_serial_control.py
plaintext
Copy code
Komut gir (0 veya 1): 0
Yanıt: Servo 0'dan 180'e hareket etti
plaintext
Copy code
Komut gir (0 veya 1): 1
Yanıt: Servo 180'den 0'a hareket etti
License
This project is licensed under the MIT License. See the LICENSE file for details.

Contributing
Contributions are welcome! Please open an issue or submit a pull request.
