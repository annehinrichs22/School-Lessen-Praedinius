int sensorValue = 0;
int sensorDelay = 0;

void setup() {
Serial.begin(9600);
pinMode(13, OUTPUT);
}
void loop() {
sensorValue = analogRead(A0);
sensorDelay = map(sensorValue, 0, 1023, 5, 500);
delay(sensorDelay);
digitalWrite(13, HIGH);
delay(sensorDelay);
digitalWrite(13, LOW);
}
