// Het gedeelte code in de void setup wordt één keer uitgevoerd als je de Arduino aan zet.
void setup() {
  pinMode(13, OUTPUT); // Laat pin 13 op de Arduino een output zijn. Als het een output is kan de Arduino zelf beslissen op er stroom op de pin staat, als het een input is kijkt de Arduino of er stroom op staat.
}

// De loop functie wordt de hele tijd door uitgevoerd.
void loop() {
  digitalWrite(13, HIGH);   // Zet stroom op pin 13.
  delay(1000);                       // Wacht 1000 miliseconden, 1 sec.
  digitalWrite(13, LOW);    // Zet de stroom op pin 13 uit.
  delay(1000);                       // Wacht een seconde.
}
