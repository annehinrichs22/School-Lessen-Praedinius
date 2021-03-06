# Les 2: Sensor en Seriële Monitor
In deze les ga je leren om een sensor aan te sluiten op de Arduino. Je stuurt die data dan terug naar de computer via de seriële monitor. De seriële monitor is een verbinding tussen de Arduino en de computer. Je kunt hem dus gebruiken om gegevens van de Arduino te ontvangen, maar ook om iets naar de Arduino te sturen. Je opent hem door rechtsboven op dit icoontje te klikken terwijl je Arduino aangesloten is op de computer.

![alt text](https://github.com/annehinrichs22/School-Lessen-Praedinius/blob/master/afbeeldingen/serial.JPG)

Als sensor gebruik je een LDR. Dat is een lichtgevoelige weerstand. De weerstand verandert als er meer licht op schijnt. Met deze sensor kun je dus meten hoe donker of hoe licht het ergens is en die gegevens gebruiken om de Arduino iets te laten doen.

### Stap 1:
Sluit de LDR op de Arduino aan zoals aangegeven op het plaatje hieronder.

![alt text](https://github.com/annehinrichs22/School-Lessen-Praedinius/blob/master/afbeeldingen/AansluitenLDR.jpg)

### Stap 2:
Upload het .ino bestand dat bij deze les hoort naar de Arduino en lees het commentaar zodat je een beetje begrijpt wat het programma doet.

### Stap 3:
Open de Seriële monitor, zorg dat de snelheid 9600 BAUD is. Kijk of je de data ontvangt. Als het niet werkt kun je proberen de Seriële monitor opnieuw te openen.

### Stap 4:
Onderzoek of de weerstand hoger wordt hij meer licht of bij minder licht. Onthoudt dat de waarde die je ziet de hoger wordt als de stroomsterkte hoger wordt.

### Stap 5:
Probeer de delay aan te passen.

### Stap 6:
Probeer de code ``` Serial.println(sensorValue); ``` te vervangen door ``` Serial.println(analogRead(A0)); ``` Je ziet dat alles gewoon werkt, het enige verschil is dat de variabele ``` sensorValue ``` nu niet meer gebruikt wordt.

### Stap 7:
Vervang nu ``` Serial.println(analogRead(A0)); ``` door ``` Serial.println("De sensor zegt: ", sensorValue); ```. Dit zorgt dat er behalve de waarde van de sensor ook nog "De sensor zegt: " wordt geprint. Probeer de tekst eens aan te passen.
