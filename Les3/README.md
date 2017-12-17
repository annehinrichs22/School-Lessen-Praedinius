# Les 3: Sensor en if-statement.
In de vorige lessen stuurde de Arduino steeds iets aan of ontving hij iets. Bij bijvoorbeeld een robot is dat natuurlijk niet genoeg. In deze les gaan we daarom een bepaalde waarde kiezen waarbij alsdie bereikt wordt de Arduino een bepaalde actie uitvoert. Dat kun je doen door gebruik te maken van een if-statement. Een if-statement kijkt of een bepaalde stelling waar is en als dat zo is voert hij een bepaalde actie uit.

### Stap 1:
Sluit de LDR op de Arduino aan zoals aangegeven op het plaatje hieronder.

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
