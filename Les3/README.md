# Les 3: Sensor en if-statement.
In de vorige lessen stuurde de Arduino steeds iets aan of ontving hij iets. Bij bijvoorbeeld een robot is dat natuurlijk niet genoeg. In deze les gaan we daarom een bepaalde waarde kiezen waarbij alsdie bereikt wordt de Arduino een bepaalde actie uitvoert. Dat kun je doen door gebruik te maken van een if-statement. Een if-statement kijkt of een bepaalde stelling waar is en als dat zo is voert hij een bepaalde actie uit.

Voorbeeld:
'''
int waarde = 2;
if (waarde > 1) {
  iets doen
}
(Nu doet hij dus iets.)
'''
Als we willen dat hij iets doet als een bepaalde stelling waar is en iets anders als hij juist niet waar is gebruik je:
'''
int waarde = 1;
if (waarde > 1) {
  iets doen
}
else {
  iets anders doen
}
(Nu doet hij dus iets anders.)
'''
De vergelijkers die je voor je stellingen kunt gebruiken zijn bijna dezelfde als bij wiskunde, ze zijn:
'''
x == y (x is gelijk aan y, let op dat je er twee schrijft in een vergelijking, x = y betekent x wordt de waarde van y)
x != y (x is niet gelijk aan y)
x <  y (x is minder dan y)
x >  y (x is meer dan y)
x <= y (x is minder of gelijk aan y)
x >= y (x is meer of gelijk aan y)
'''
### Stap 1:
Sluit de componenten zoals hieronder te zien is aan.

### Stap 2:
Upload het .ino bestand dat bij deze les hoort naar de Arduino en lees het commentaar zodat je een beetje begrijpt wat het programma doet.
