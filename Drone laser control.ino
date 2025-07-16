/*
 * Simple drone motor and laser control prototype
 * For demo only, not a flight controller code
 */

#define MOTOR1_PIN 3
#define MOTOR2_PIN 5
#define MOTOR3_PIN 6
#define MOTOR4_PIN 9
#define LASER_PIN 10

// Simple variables to simulate control input
int motorSpeed = 0;
bool laserOn = false;

void setup() {
  pinMode(MOTOR1_PIN, OUTPUT);
  pinMode(MOTOR2_PIN, OUTPUT);
  pinMode(MOTOR3_PIN, OUTPUT);
  pinMode(MOTOR4_PIN, OUTPUT);
  pinMode(LASER_PIN, OUTPUT);

  // Initialize serial for control input simulation
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();

    switch(command) {
      case 'w': motorSpeed = 180; break;  // Increase throttle
      case 's': motorSpeed = 0; break;    // Cut throttle
      case 'l': laserOn = !laserOn; break; // Toggle laser
    }
  }

  analogWrite(MOTOR1_PIN, motorSpeed);
  analogWrite(MOTOR2_PIN, motorSpeed);
  analogWrite(MOTOR3_PIN, motorSpeed);
  analogWrite(MOTOR4_PIN, motorSpeed);

  digitalWrite(LASER_PIN, laserOn ? HIGH : LOW);
}
