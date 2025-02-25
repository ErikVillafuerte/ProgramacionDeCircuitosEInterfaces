const int tiltSensor = 4;  // Sensor en pin 4
const int buzzer = 8;      // Buzzer en pin 8
void setup() {
  pinMode(tiltSensor, INPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  int estadoSensor = digitalRead(tiltSensor);
  if (estadoSensor == HIGH) {
    digitalWrite(buzzer, HIGH);
    } else {
    digitalWrite(buzzer, LOW);
  }
}