Meningen med dette programmet er å dele informasjon mellom to prosesser med hjelp av to "Pipes". Informasjonen i dette tilfelle er string beskjeden "Heyo!". Denne beskjeden skal sendes over til en annen prosess som skal invertere den og returnere "hEYO!" som da skal printes.

Siden en Pipe bare kan sende informasjon i en rettning trengs det to stykker, som blir laget med kommandoen "int fd[2]" på linje 31. Den andre prosessen blir til med å lage en Child prosess, og prosessen vil da hente informasjonen, lukke write kommandoen som bestemte beskjeden i Parent prosessen, lese den, invertere den og skrive den den nye beskjeden som sendes tilbake til Parenten (linje 53 til 65).

Resulatet blir vist i bilde 1.