Meningen med programmet er at man skal ha muligheten til å før inn en positiv int verdi (hele tall), som skal da gå gjennom Collatz' formodning. 

Collatz' formodning:
    Velg et vilkårlig positivt heltall (naturlig tall ℕ) n:
        Hvis tallet er partall, del tallet med 2: n/2.
        Hvis tallet er et oddetall, gang tallet med 3 og pluss på 1: 3n+1.
    Repeter prosessen til tallet ender på 1. 

Innføringen av verdien blir gjort med kommandoen scanf der den blir påført variablen i (sett i linje 21). 

Prosess IDen blir brukt til å lage en Child process (linje 13 og 26). Prosessen vil sende sekvensen av tall generert fra algoritmen spesifisert av Collatz-formodningen. Dette fungerer fordi foreldre- og barneprosessene har sine egne kopier av dataene.

Programmet lager en fork() (sett i linje 26), går deretter inn i en loop og hvis pid == 1 (hvis det er opptatt) venter den til den tilsvarer 0 (ikke opptatt). Når den er 0 kan den utføre beregningene Programmet sjekker for å se om det er jevnt eller rart og utfører riktig ligning. Dette gjentas til det når 1, så bryter den ut av løkken (linje 29 til 54).

Programmet blir kompilert med kommandoen "gcc -o Op21 Op21.c" og utført med "./Op21". I bilde 1 vises resultatet av programmet hvis man fører inn tallet 42 når spurt. Bilde 2 viser hvordan programmet ser ut før man skriver inn en verdi.