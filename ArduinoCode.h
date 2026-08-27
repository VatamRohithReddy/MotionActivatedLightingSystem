

int irSensorPin1 = 2;
int irSensorPin2 = 3;

int ledPin1 = 7;
int ledPin2 = 6;

void setup() {

  pinMode(irSensorPin1, INPUT);
  pinMode(irSensorPin2, INPUT);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int sensorState1 = digitalRead(irSensorPin1);
  int sensorState2 = digitalRead(irSensorPin2);

  if (sensorState1 == LOW) {
    digitalWrite(ledPin1, HIGH);
    Serial.println("IR Sensor 1: Signal detected!");
  } 
  else {
    digitalWrite(ledPin1, LOW);
    Serial.println("IR Sensor 1: No signal detected.");
  }


  if (sensorState2 == LOW) {
    digitalWrite(ledPin2, HIGH);
    Serial.println("IR Sensor 2: Signal detected!");
  } 
  else {
    digitalWrite(ledPin2, LOW);
    Serial.println("IR Sensor 2: No signal detected.");
  }

  delay(100);
}
