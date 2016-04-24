#include <stdio.h>

struct addressbook_item {
    char vorname[31];
    char nachname[31];
    char telefon[31];
    char strassenname[41];
    char hausnummer[11];
    char postleitzahl[6];
    char ort[41];
};

int main() {
    struct addressbook_item adressbuch[50] = {
        {"Oliver", "Hoffmann", "+49123456789", "Schwalbacher Strasse", "19", "60326", "Frankfurt"},
        {"Anselm", "Buder", "+49123456789", "Werftstrasse", "19", "60327", "Gutleut"}
    };
    int addressbuch_length = 2;

    while (1) {
        unsigned int auswahl = 0;

        printf("\n");
        printf("Adressbuch (version 0.1)\n");
        printf("1) Alle Kontakte anzeigen\n");
        printf("2) Neuen Kontakt hinzufügen\n");
        printf("Ihre Auswahl: ");

        scanf("%d", &auswahl);
        while(getchar() != '\n');

        switch (auswahl) {
            case 1:
                printf("\n");
                printf("Sie haben %d Kontakt(e)\n", addressbuch_length);
                for (int i = 0; i < addressbuch_length; i++) {
                    struct addressbook_item eintrag = adressbuch[i];

                    printf("\n");
                    printf("Name: %s %s\n", eintrag.vorname, eintrag.nachname);
                    printf("Strasse: %s\n", eintrag.strassenname);
                    printf("Hausnummer: %s\n", eintrag.hausnummer);
                    printf("Ort: %s\n", eintrag.ort);
                }
                break;
            case 2: {
                struct addressbook_item eintrag;

                printf("\n");
                printf("Bitte Kontaktdaten eingeben: \n");
                printf("Vorname: ");
                fgets(eintrag.vorname, 30, stdin);
                printf("Nachname: ");
                fgets(eintrag.nachname, 30, stdin);
                printf("Strasse: ");
                fgets(eintrag.strassenname, 41, stdin);

                adressbuch[addressbuch_length++] = eintrag;
                break;
            }
            default:
                printf("Ungueltige Auswahl.\n");
        }
    }
}
