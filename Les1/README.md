# Les 1: Knipper
In deze les ga je leren om een LED-lampje aan te sturen met een Arduino. Een Arduino is een hele kleine computer die je kunt gebruiken
om elektronica aan te sturen. Je doet dit door in de Arduino IDE (IDE betekent Integrated Development Environment, dat betekent eigenlijk gewoon simpele programmeer omgeving) een programma te schrijven. Dat programma upload je dan via je computer naar de Arduino. Als je dat gedaan hebt staat het programma op de chip van de Arduino. Zodra de Arduino stroom krijgt (bijv. van de USB-kabel of een batterij) gaat hij dat programma uitvoeren. Het programma blijft ook op de chip staan als de Arduino geen stroom meer krijgt.

Je eerste programma laat een LED-lampje knipperen. Het .ino bestand dat je hiervoor nodig hebt staat in de map die bij deze les hoort.

## Aansluiten
__De spanning die een Arduino gebruikt is niet gevaarlijk, hier hoef je dus niet bang voor te zijn. Je krijgt geen schok als je iets aanraakt.__

#### Uitleg:
Je gaat het lampje aansluiten op de Arduino. Om dat te doen gebruik je een breadboard. Je moet natuurlijk eerst weten wat een breadboard is en hoe hij werkt. Een breadboard is een stuk plastic waar kleine gaatjes in zitten. Die gaatjes zijn verbonden met elkaar volgens een bepaald patroon. In die gaatjes steek je dan bijvoorbeeld draadjes en LED's. Je gebruikt een breadboard zodat je minder draadjes nodig hebt. In het plaatje hieronder zie je een breadboard. Je ziet dat de onderste helft er normaal uitziet. In de bovenste helft zijn er lijntjes getekend om aan te geven welke gaten met elkaar verbonden zijn. Het is steeds een rij van vijf verticaal aan elkaar en de bovenste rij horizontaal aan elkaar. De verticale rij is niet met de onderste helft verbonden.

![alt text](https://github.com/annehinrichs22/School-Lessen-Praedinius/blob/master/afbeeldingen/breadboard_uitleg.JPG)

#### Stap 1: 
Steek het lampje in het breadbord en sluit hem aan zoals hieronder te zien is. Het is heel belangrijk dat je de weerstand ook  aansluit. Waarom leer je bij Natuurkunde. (Hint: niet zonder proberen, de stroomsterkte wordt als je pech hebt zo groot dat de LED smelt en verbrandt.)
Het is belangrijk dat de LED'jes een + en een - kant hebben, sluit op de min kant altijd de weerstand aan en sluit op de weerstand weer de GND van de Arduino aan. Meerdere LED'jes kunnen naar dezelfde GND pin. (Je kunt de + pin van de LED herkennen aan de lengte, hij is de langste. Je kunt natuurlijk ook gewoon kijken wanneer hij het wel en niet doet.) De + kant moet naar een digitale pin, er staat op de Arduino welke dat zijn.

![alt text](https://github.com/annehinrichs22/School-Lessen-Praedinius/blob/master/afbeeldingen/Les1.JPG)

#### Stap 2: 
Sluit de Arduino via de USB-kabel aan op de computer. **Belangrijk: Als de grote chip op de Arduino erg warm wordt moet je de USB-kabel direct uit de computer halen. Je hebt dan kortsluiting gemaakt, check goed of je alle draadjes juist hebt aangesloten.**

#### Stap 3: 
Open de Arduino IDE en download en open het .ino bestand dat bij deze les hoort. (Dat kun je vinden in de map bij deze les.)

#### Stap 4: 
Druk bovenaan het venster op de upload knop en wacht tot "upload voltooid" rechts onder verschijnt. Je hebt nu het programma op de Arduino gezet. Omdat de Arduino stroom krijgt via de USB-poort van de computer zal hij het programma direct uitvoeren. Als je het goed hebt gedaan zal de LED gaan knipperen.

#### Stap 5:
Lees de het commentaar in het .ino bestand, hier wordt het programma uitgelegd. Commentaar kun je herkennen aan de // die voor elke regel staan en de grijze kleur. Commentaar wordt niet op de Arduino gezet door het programma. Commentaar dat meerdere regels lang is kun je herkennen aan /* bij het begin en */ aan het eind.

#### Stap 6:
Probeer wat dingen te veranderen in het Arduino programma. __(In de Arduino IDE wordt een programma een sketch genoemd.)__ Probeer bijvoorbeeld de tijd dat de Arduino wacht te veranderen. Kijk wat er gebeurt als de tijd heel laag zet. (Bijv. tussen 1 en 20 miliseconden.)
