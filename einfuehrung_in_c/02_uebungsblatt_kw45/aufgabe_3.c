#include <stdio.h>

int main() {
    char auswahl;
    float einwurf;
    float kosten;

    printf("(W)asser, (B)ionade, (O)rangensaft\n");
    printf("Waehlen Sie eins der Getraenke aus: \n");

    scanf("%c", &auswahl);

    switch(auswahl) {
        case 'W':
        case 'w':
            kosten = 0.5;
            printf("Wasser kostet %.2f Euro\n", kosten);
            break;
        case 'B':
        case 'b':
            kosten = 1.0;
            printf("Bionade kostet %.2f Euro\n", kosten);
            break;
        case 'O':
        case 'o':
            kosten = 2.0;
            printf("Orangensaft kostet %.2f Euro\n", kosten);
            break;
        default:
            printf("Auswahl Fehlerhaft. Programm wird beendet.\n");
            return 1;
    }

    printf("Werfen Sie den genannten Betrag ein: ");
    scanf("%f", &einwurf);

    if (kosten == einwurf) {
        printf("Getränkeausgabe erfolgt!\n");
    } else {
        printf("Einwurf Fehlerhaft. Programm wird beendet.\n");
        return 1;
    }

    return 0;
}
