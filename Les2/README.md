# Les 2: Sensor en Seriële Monitor
In deze les ga je leren om een sensor aan te sluiten op de Arduino. Je stuurt die data dan terug naar de computer via de seriële monitor. De seriële monitor is een verbinding tussen de Arduino en de computer. Je kunt hem dus gebruiken om gegevens van de Arduino te ontvangen, maar ook om iets naar de Arduino te sturen. Je opent hem door rechtsboven op dit icoontje te klikken terwijl je Arduino aangesloten is op de computer.
Als sensor gebruik je een LDR. Dat is een lichtgevoelige weerstand. De weerstand wordt lager als er meer licht op schijnt. Met deze sensor kun je dus meten hoe donker of hoe licht het ergens is en die gegevens gebruiken om de Arduino iets te laten doen.

### Stap 1:
Sluit de LDR op de Arduino aan zoals aangegeven op het plaatje hieronder.

### Stap 2:
Upload het .ino bestand dat bij deze les hoort naar de Arduino en lees het commentaar zodat je een beetje begrijpt wat het programma doet.

### Stap 3:
Open de Seriële monitor, zorg dat de snelheid 9600 BAUD is. Kijk of je de data ontvangt. Als het niet werkt kun je proberen de Seriële monitor opnieuw te openen.

### Stap 4:
Probeer de delay aan te passen.

### Stap 5:
Probeer de code ```cpp Serial.println(sensorValue); ``` te vervangen door ```cpp Serial.println(analogRead(A0)); ``` Je ziet dat alles gewoon wwerkt, het enige verschil is dat de variabele sensorValue nu niet meer gebruikt wordt.

### Stap 6:
Vervang nu ```cpp Serial.println(analogRead(A0)); ``` door ```cpp Serial.println("De sensor zegt: ", sensorValue); ```. Dit zorgt dat er behalve de waarde van de sensor ook nog "De sensor zegt: " wordt geprint. Probeer de tekst eens aan te passen.
