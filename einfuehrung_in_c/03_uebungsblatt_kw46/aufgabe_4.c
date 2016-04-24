#include <stdio.h>

int main() {
    char auswahl;
    float einwurf;
    float kosten;
    char auswahl_gueltig = 0;
    char einwurf_gueltig = 0;

    while(!auswahl_gueltig) {
        printf("(W)asser, (B)ionade, (O)rangensaft\n");
        printf("Waehlen Sie eins der Getraenke aus: \n");
        scanf("%c", &auswahl);
        while(getchar() != '\n');

        switch(auswahl) {
            case 'W':
            case 'w':
                kosten = 0.5;
                printf("Wasser kostet %.2f Euro\n", kosten);
                auswahl_gueltig = 1;
                break;
            case 'B':
            case 'b':
                kosten = 1.0;
                printf("Bionade kostet %.2f Euro\n", kosten);
                auswahl_gueltig = 1;
                break;
            case 'O':
            case 'o':
                kosten = 2.0;
                printf("Orangensaft kostet %.2f Euro\n", kosten);
                auswahl_gueltig = 1;
                break;
            case 'X':
            case 'x':
                printf("Der Vorgang wird abgebrochen. Das Programm wird beendet.\n");
                return 0;
                break;
            default:
                printf("Auswahl Fehlerhaft. Versuchen Sie es erneut\n\n");
                break;
        }
    }

    while (!einwurf_gueltig) {
        printf("Werfen Sie den genannten Betrag ein: ");
        scanf("%f", &einwurf);
        while(getchar() != '\n');

        if (einwurf == 0) {
            printf("Der Vorgang wird abgebrochen. Das Programm wird beendet.\n");
            return 0;
        }

        if (kosten == einwurf) {
           printf("Getränkeausgabe erfolgt!\n");
           einwurf_gueltig = 1;
        } else {
            printf("Einwurf Fehlerhaft. Versuchen Sie es erneut.\n\n");
        }
    }

    return 0;
}
