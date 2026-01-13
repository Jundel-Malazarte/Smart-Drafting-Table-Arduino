# Smart Drafting Table with Clutter Sensing

A modern, tech-integrated drafting table built with Arduino. This project features an illuminated 24" x 36" glass workspace, adjustable height monitoring, and a "Smart Alert" system that uses ultrasonic sensors to detect clutter on the desk surface.

## 🚀 Features
* **Clutter Sensor:** Real-time monitoring of the desk surface.
* **Visual Feedback:** LED indicators (Green/Red) to signal workspace readiness.
* **Illuminated Workspace:** Integrated controls for a high-fidelity glass light panel.
* **Height Monitoring:** Tracks table height between 70cm and 85cm.

## 🛠 Hardware Components
The following components are required to build the electronics system:

| Component | Description | Quantity |
| :--- | :--- | :--- |
| **Arduino Uno** | Main microcontroller | 1 |
| **HC-SR04** | Ultrasonic distance sensor (Clutter detection) | 1-2 |
| **LEDs (Red/Green)** | Visual status alerts | 2 |
| **220Ω Resistors** | Current limiting for LEDs | 2 |
| **Relay Module** | To switch the 12V light panel | 1 |
| **Breadboard/Wires** | For prototyping and connections | 1 set |



## 📂 Installation & Setup
1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/jundel-malazarte/Smart-Drafting-Table.git](https://github.com/jundel-malazarte/Smart-Drafting-Table.git)
    ```
2.  **Install Arduino IDE:** Download it from [arduino.cc](https://www.arduino.cc/en/software).
3.  **Open the file:** Open `Smart_Drafting_Table.ino` in the Arduino IDE.
4.  **Connect Hardware:** Wire your components according to the diagram above.

## 🧪 How to Test the Code
To ensure the system is working correctly before final assembly, follow these steps:

1.  **Verify & Upload:** * Connect your Arduino via USB.
    * Select `Tools > Board > Arduino Uno`.
    * Click the **Upload** arrow in the IDE.
2.  **Open Serial Monitor:** * Go to `Tools > Serial Monitor` (Set baud rate to **9600**).
    * You should see "Status: Surface Clear" printed on the screen.
3.  **Simulate Clutter:** * Place an object (like a book or your hand) within 20cm of the HC-SR04 sensor.
    * The **Red LED** should light up, and the monitor should display "Status: Clutter Detected!".
4.  **Simulate Clear Desk:** * Remove the object. The **Green LED** should return to its active state.

## 📝 Future Improvements
- [ ] Add an OLED display for height measurement.
- [ ] Implement a "Clean-up Timer" to remind the user to clear the desk.
- [ ] Bluetooth integration for mobile notifications.