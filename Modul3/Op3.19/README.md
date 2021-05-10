I dette programmet brukes kommandoen fork() på linje 10 til å lage en Child process som kjøres samtidlig med prosessen som lagde forken, kalt en Parent process. 

Som vist i linje 15 vil Parent prosessen sove i 10 sekunder mens Child processen blir ferdig utført med exit(0) på linje 23, men siden det ikke er noe systemkall for wait() i Parent vill Child prosessen bli til en Zombie prosess, så den vil altså fortsatt ha en oppføringen i prosess tabellen. Prosessen blir vist med bilde 1 og 2, der bilde 1 viser hvordan det ser ut når koden starter og 2 viser resultatet etter 10 sekunder har gått.

Da koden ble utført bruktes kommandoen "ps -l" for å få opp prosess tabellen som sett i bilde 3, og kommandeon "kill -9 PID" (PID = prosessens ID, som f.eks 125 i bilde 3) ble brukt til å "drepe" Parent prosessen (bilde 4). 

Programmet ble kompilert med "gcc -o Op19 Op19.c" og utført med "./Op19"