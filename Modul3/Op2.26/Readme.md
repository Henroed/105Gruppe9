Enkelt forklart så er dette et program som vil lese innholdet i en fil, som brukeren velger, og kopiere
det over til en annen fil, som brukeren også velger. For programmet spiller det ingen rolle om det står noe i 
dokumentet fra før av, ettersom at det blir skrevet over under kopieringen.

Ser vi nøyere på selve koden kan vi se at i de første to linjene importerer den to filer, en for output/input
 og en for å kunne endre/huske minnet. I hverfall er det slik jeg forsto det. Deretter, i selv koden, starter den
med å definere variablene den bruker for filene, fptr1 og -2, og lage en mappe for å lagre teksten som blir kopiert.
I de neste linjene fortsetter programmet med  å åpne filen og se om den faktisk finnes, og om den ikke finnes eller
 programmet har problemer med å åpne filen sender den ut feilmeldingen. Koden under sier hvordan den åpner filen som 
skal endres og kopier innholet over. Når den er ferdig lukker den filene og programmet avsluttes. 
Som jeg nevnt kort over så skriver programmet en feilmeldign om det har problemer med å finne/åpne filene, og
koden for det kan vi se i if-loopene.

Kommandoer:
"printf" --> tekst som vises på skjermen til bruker
"scanf" --> leser innholdet i filen
"exit" --> gå ut av fil
"fgetc" --> kopierer innhold
"fputc" --> legger inn kopiert innhold
"fclose" --> lukker filene  

Jeg la til bilder, med en kort forklaring, som viser at programmet virker og hvordan jeg gjorde det i dokumentet med 
oppgavene.
