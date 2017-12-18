int sensorValue = 0;

void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
}
void loop() {
sensorValue = analogRead(A0);
if (sensorValue > 100){
  digitalWrite(13, HIGH);
}
delay(100);
}
