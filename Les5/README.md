# Les 5: De LDR data omzetten in de knippersnelheid.
In les 1 kon je door de delays tussen het aan- en uitzetten van de LED de knippersnelheid aanpassen. In deze les gaan we de data van de LDR gebruiken om de delay aan te passen.

### Stap 1:
Je kunt de LED en de LDR aansluiten zoals in les 1 en 2.

### Stap 2:
Moeilijke route: De delay van de LED is leuk van 5 tot ongeveer 500 miliseconden, daarna is hij te lang vind ik. De waarde van de LDR zit altijd tussen de 0 en 1024. Voor deze opdracht kun je in de Arduino taal gebruik maken van de Map functie. De map functie werkt zo:
```
map(waarde, van hier, tot hier, naar hier, tot hier);
// Het is dus eigenlijk een schaal functie, vb:
int a = 5;
int b;
b = map(a, 0, 10, 0, 2);
// b is nu 1
```
Probeer het probleem nu op te lossen.

Makkelijke route: Je moet dus de delay van de LED vervangen door een variabele. Die variabele maak je du eerst helemaal aan het begin de sketch met ```int a = 0;```. Dan moet je de waarde van de LDR met de map functie aanpassen en in de delay waarde stoppen. Functies die je zou kunnen gebruiken zijn:
```
int a = 0;
delay(a);
map(a, 0, 1024, 7, 500);
```
Probeer het nu nog eens!

### Stap 3:
Niet gelukt? Kijk in het .ino bestand van deze les voor een oplossing.
