Dette programmet skal utføre den samme prosessen som ble gjort i Op21, men isteden for at foreldre- og barneprosessene har sine egne kopier av dataen blir programmet strukturert med POSIX shared memory.

POSIX shared memory er organisert ved hjelp av minnekartede filer, som knytter regionen til shared memory til en fil. En prosess må først opprette et delt minneobjekt ved hjelp av systemanropet shm_open() som sett i linje 29. Flere spesifikasjoner til det delte minne er bestemt i koden, som for eksemepl på linje 19 og 21 som sier at den vil ha en konstant størelse på 4096 bytes og ha navnet "keti_ex22".

I loopen blir minneobjektet kartlagt i adresseområde for foreldre- (linje 51) og barneprosessene (linje 78) og vil deretter hente nummerene med hjelp av pointer kommandoene (ptr, som sett på linje 61). Etter loopen er fullført vil programmet unlinke det delte minne (linje 104) og avslutte seg selv.

Det er også en feil sikring i tillefølle kartleggingen ikke fungerer. Hvis det skjer vil den gi ut en feilmelding og avslutte programmet som sett i if settnigene på linje 52 og 79.

Som alle C programmer blir den kompilert med gcc kommandoen. Altså "gcc -o Op22 Op22.c" og utført med "./Op22". Bildene viser resultatet og er så og si helt lik resulatet i Op19 utenom noen formaterings forskjeller.