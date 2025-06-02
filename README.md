# Hand-Senitizer
🧴 Automatic Hand Sanitizer Dispenser using Arduino (COVID-19 Project)
This project presents a contactless hand sanitizer dispenser built with Arduino and an ultrasonic sensor, developed as a hygiene solution during the COVID-19 pandemic. When hands are detected near the nozzle, the system automatically dispenses sanitizer, reducing the risk of virus transmission.

🦠 Why This Project?
During the COVID-19 outbreak, minimizing contact with shared surfaces became essential. This automatic dispenser helps reduce the spread of viruses by eliminating the need to press buttons or pump sanitizer manually.

🧰 Components Used
Arduino Uno or Nano

Ultrasonic Sensor (HC-SR04)

Mini water pump or servo motor (for dispenser)

Relay module or transistor circuit (if using pump)

Sanitizer bottle/reservoir

Power source (USB or battery)

Jumper wires and tubing

⚙️ How It Works
Distance Sensing: The HC-SR04 ultrasonic sensor continuously measures the distance below the dispenser.

Hand Detection: When a hand is detected within a set range (e.g., 5–15 cm), the Arduino triggers the dispensing mechanism.

Sanitizer Dispensing: A pump or servo motor is activated briefly to release a small amount of sanitizer.
