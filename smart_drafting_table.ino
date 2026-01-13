// Pins for the Clutter Sensor (Ultrasonic)
const int trigPin = 9;
const int echoPin = 10;

// Pins for the Smart Alert LEDs
const int greenLED = 5;
const int redLED = 6;

// Threshold for clutter (in centimeters)
const int clutterThreshold = 20; 

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration;
  int distance;

  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Calculate distance in cm

  // Logic for Smart Alerts
  if (distance > 0 && distance < clutterThreshold) {
    // Clutter detected!
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
    Serial.println("Status: Clutter Detected!");
  } else {
    // Surface clear
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
    Serial.println("Status: Surface Clear");
  }

  delay(500); // Check every half second
}