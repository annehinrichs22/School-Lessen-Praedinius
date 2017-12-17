# Les 3: Sensor en if-statement.
In de vorige lessen stuurde de Arduino steeds iets aan of ontving hij iets. Bij bijvoorbeeld een robot is dat natuurlijk niet genoeg. In deze les gaan we daarom een bepaalde waarde kiezen waarbij alsdie bereikt wordt de Arduino een bepaalde actie uitvoert. Dat kun je doen door gebruik te maken van een if-statement. Een if-statement kijkt of een bepaalde stelling waar is en als dat zo is voert hij een bepaalde actie uit.

Voorbeeld:
```
int waarde = 2;
if (waarde > 1) {
  iets doen
}
(Nu doet hij dus iets.)
```
Als we willen dat hij iets doet als een bepaalde stelling waar is en iets anders als hij juist niet waar is gebruik je:
```
int waarde = 1;
if (waarde > 1) {
  iets doen
}
else {
  iets anders doen
}
(Nu doet hij dus iets anders.)
```
De vergelijkers die je voor je stellingen kunt gebruiken zijn bijna dezelfde als bij wiskunde, ze zijn:
``` 
x == y (x is gelijk aan y, let op dat je er twee schrijft in een vergelijking, x = y betekent x wordt de waarde van y)
x != y (x is niet gelijk aan y)
x <  y (x is minder dan y)
x >  y (x is meer dan y)
x <= y (x is minder of gelijk aan y)
x >= y (x is meer of gelijk aan y)
```
### Stap 1:
Sluit de componenten aan zoals bij de vorige les.

### Stap 2:
Upload het bestand dat bij deze les hoort.

### Stap 3:
Sluit nu ook een lichtje aan zoals in les 1 en zorg dat de Arduino de LED aanzet als de LDR een bepaalde waarde doorgeeft. Pas dus de sketch zelf aan.
Probeer of je dit zelf kunt. Als het niet lukt kun je het beste eerst kijken of je alles goed aangesloten hebt en daarna of je programma logisch is. Kijk goed naar de vorige programma's en hun commentaar!
