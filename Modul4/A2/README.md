Koden brukt i dette programmets server ble hentet fra kilde 1 og PingClienten er en modifisert versjon av den koden.
Poenget med programmet er at klienten skal sende 10 ping-forespørsler til serveren, atskilt med omtrent ett sekund. Hver av meldingene er av typen string og blir satt sammen i linje 38 på klienten. De skal inneholde en nyttelast med data som inkluderer nøkkelordet PING, et sekvensnummer og en tidsstempel. Etter å ha sendt hver pakke, skal klienten vente opptil ett sekund på å motta et svar. Hvis det går ett sekund uten svar fra serveren, antar klienten at pakken eller serverens svarpakke har gått tapt i nettverket. 

Da klienten ble prøvd på en enkel maskin ble resultatet som sett i bilde 2 og det ble rundt ingen Delay utenom den første ping meldingen, og da vi prøvde det ut på to separate maskiner på skolens eduroam nettverk ble alle satt på timeout. Dette kan bli sett i bilde 1 og er på grunn av at det gikk over ett sekund for hver ping melding som spesifisert på linje 12 og 49 i klient koden.

Som sett funket ikke koden helt da vi prøvde den på en maskin men vi er usikker på hvor feilen ligger og fant ingen løsning på det.


Kilde 1: https://sites.cs.ucsb.edu/~ebelding/courses/176A/f05/prog_assign2.html