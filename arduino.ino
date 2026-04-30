const int trigPin = 9;
const int echoPin = 10;
const int green = 2, yellow = 3, red = 4, buzzer = 5;

void setup() {
  pinMode(trigPin, OUTPUT); pinMode(echoPin, INPUT);
  pinMode(green, OUTPUT); pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT); pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW); delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  digitalWrite(green, LOW); digitalWrite(yellow, LOW);
  digitalWrite(red, LOW); noTone(buzzer);

  if (distance <= 5) {
    tone(buzzer, 1000); digitalWrite(red, HIGH);
  } else if (distance <= 10) {
    digitalWrite(red, HIGH);
  } else if (distance <= 30) {
    digitalWrite(yellow, HIGH);
  } else if (distance <= 50) {
    digitalWrite(green, HIGH);
  }
  delay(100);
}