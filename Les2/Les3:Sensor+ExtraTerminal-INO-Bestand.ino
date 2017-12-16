int sensorValue = 0; // Dit maakt een variable met de naam sensorValue en de waarde 0, int betekent integer en is een geheel getal van 16 bits.
void setup() {
Serial.begin(9600); // Opent een communicatiepoort met de computer zodat je data kunt sturen en ontvangen, 9600 is de snelheid, het is belangrijk dat je ontvangstsnelheid hetzelfde is.
}
void loop() {
sensorValue = analogRead(A0); // Leest de waarde van pin A0 en stopt die in de variabele met de naam sensorValue
Serial.println(sensorValue); // Print de waarde van sensorValue via de seriële monitor (de communicatiepoort) op het scherm van je computer.
delay(100); // Wacht 100 miliseconden, 0,1 sec
}
