#include "DHT.h"
DHT dht(13, DHT22);

void setup() {
  dht.begin();
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  float t = dht.readTemperature();
  if (t > 27) {
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  } else if (t < 18) {
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  delay(5000);
}