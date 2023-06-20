# ADVANCED-Line Follower Robot(LFR)
This project is an advanced line follower robot designed to track and follow lines on a surface. It utilizes QTRsensor data to determine the line's position and adjusts motor speeds accordingly. The robot employs advanced algorithms to ensure accurate line tracking and smooth movement. The project combines hardware components, software programming, and robotics principles to create an efficient line-following system.

## About the project:
This repository is dedicated to the LFR (Line Follower Robot) project. LFR is an autonomous robot designed to track and follow lines on a surface. With its modular architecture, it can perform various tasks such as line mapping, navigation, and more. The robot's modularity allows for customization and expansion of its functionalities. You can find guidelines on how to get involved and contribute to the LFR project.

## Built with:

 - [C++ programming](https://www.programiz.com/cpp-programming)
 - [Espressif](https://www.espressif.com/)
 - [Arduino](https://www.arduino.cc/)

## Installations:
To make the code for the Line Follower Robot (LFR) work, you need to install the following libraries/applications:

 - ArduinoIDE:
			 1. Visit the official Arduino website at [https://www.arduino.cc/](https://www.arduino.cc/)
			 2. Click on the "Software" tab in the top menu.
			 3. On the Software page, you will see different download options for different operating systems. Choose the appropriate version for your operating system (Windows, macOS, or Linux).
			 4. Click on the download link for your operating system. This will start the download of the Arduino IDE installer.
			 5. Once the download is complete, locate the downloaded installer file and run it.
			 6.  Follow the installation instructions provided by the installer. You can choose the installation location and select additional components if desired.
			 7. After the installation is complete, you should have the Arduino IDE installed on your computer.
			 8. Launch the Arduino IDE and you're ready to start programming with Arduino boards.
 
 - QTRSensor Library:
				1. <![if !supportLists]>1. <![endif]>Open the Arduino IDE.
				2. Go to "Sketch" > "Include Library" > "Manage Libraries" to open the Library Manager.
				3. In the Library Manager, type "QTRSensors" in the search bar.
				4. Look for "QTRSensors" by Pololu Robotics and select it.
				5. Click the "Install" button to download and install the QTRSensors library.
				6. After the installation is complete, close the Library Manager.
				7. You can now include the QTRSensors library in your Arduino sketch by going to "Sketch" > "Include Library" and selecting "QTRSensors" from the list.
				
 - ESP32 Library:
				 1. Open the Arduino IDE.
				 2. Go to "File" > "Preferences" to open the Preferences window.
				 3. In the "Additional Boards Manager URLs" field, enter the following URL:
		https://dl.espressif.com/dl/package_esp32_index.json
		4. Click the "OK" button to close the Preferences window.
		5. Go to "Tools" > "Board" > "Boards Manager" to open the Boards Manager window.
		6. In the search bar of the Boards Manager, type "ESP32".
		7. Look for "esp32" by Espressif Systems and click on it.
		8. Click the "Install" button to install the ESP32 board package.
		9. After the installation is complete, close the Boards Manager window.
		10.  You may refer to the following youtube tutorial [https://youtu.be/mBaS3YnqDaU](https://youtu.be/mBaS3YnqDaU)

## Parts required:

 1. ESP32 module
 2. tb6612fng motor driver
 3. qtrRC sensor array
 4. 12V to 5V buck converter
 5. 2 x N20 motors

## Usage:
1. To use this code, connect the QTR-8RC line sensor to the appropriate pins on your ESP32 Dev module board. You can refer to the given connectivity graph for better understanding.
2. Make sure to install the QTRSensors library before uploading the code to your ESP32 Dev module board.
3. During the setup phase, expose the line sensors to the lightest and darkest readings they will encounter for proper calibration. The calibration will take approximately 10 seconds to complete.
4. Once the calibration is complete, the line follower robot will continuously track and follow the line based on the sensor readings and line position estimation.

![Adv. LFR layout](https://cdn.discordapp.com/attachments/1055555101646925854/1114125670545629244/1685698636150.jpg)
