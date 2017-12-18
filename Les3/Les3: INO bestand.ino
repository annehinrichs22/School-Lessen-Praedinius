int sensorValue = 0;

void setup() {
Serial.begin(9600);
}
void loop() {
sensorValue = analogRead(A0);
if (sensorValue > 100){
  Serial.println(sensorValue); // Print de waarde van sensorValue alleen als die hoger is dan 100.
}
delay(100); // Wacht 100 miliseconden, 0,1 sec
}
