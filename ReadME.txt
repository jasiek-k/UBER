Wyrzućmy imię i nazwisko i zostawmy samo name, jako user name będzie można wtedy w konstruktorze Clienta i Driver-a dać
metode sprawdzającą czy user istnieje(dla client i dla driver jak istnieje taki client to clienexc i analogicznie)i
rzucającą wyjątek bo te wyjątki też trzeba gdzieś rzucić
----------------
SPOSÓB KALKULOWANIA CENY:
1. VEHICLES (określa cene za minutę przejazdu w zależności od rodzaju wybranego pojazdu)
    - Daily - stała cena za minutę (w tym przypadku 2)
    - Transporter - cena zależna od ładowności samochodu w litrach
        (0-500> - 2.0 zł/min
        (500-1000> - 2.5
        (1000-1500> - 3.0
        (1500-2000> - 3.5
        (2000-2500> - 4.0
    - Limuzyna - cena zależna od ekstrawagancji samochodu wyrażonej przez rating
        - 1 - 3zł/min
        - 2 - 4zł/min
        - 3 - 5zł/min

2. CLIENT_TYPE - zależnie od rodzaju klienta przydzielana jest mu zniżka
    - Base - płaci zawsze 100% ceny
    - Gold - płaci 80% ceny
    - Premium - płaci 60% ceny

3. SPOSÓB LICZENIA

    cena=(koszt_początkowy+czas_trwania*cena_za_minute)*zniżka
    ----
    koszt_początkowy - określony z góry (w konstruktorze Drive, początkowa wartość price) równy 5zł
    czas_trwania - wyliczany na podstawie beginDate i endDate
    cena_za_minute - otrzymywana z Vehicle -> GetPrice
    zniżka - zależna od typu klienta

    Jeśli kurs nie jest zakończony funkcja conductPrice jedynie zwraca cene w danym momencie.
    Jeśli jest zakończony oprócz zwrócenia ceny, ustawia ją jako wartość price w Drive
    (nie może ustawić price przed zakończeniem, bo jest tam cena za rozpoczęcie przejazdu i zafałszowałoby to wynik,
    po skończonym przejeździe ta wartość nie będzie więcej potrzebna, więc może zostać zamieniona).