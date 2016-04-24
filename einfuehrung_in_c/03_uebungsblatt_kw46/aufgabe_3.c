#include <stdio.h>
#include <limits.h>

int main() {
    char start_buchstabe;
    char end_buchstabe;
    int start_zahl;
    int end_zahl;

    printf("Geben Sie ein Startbuchstabe ein: ");
    scanf("%c", &start_buchstabe);
    while(getchar() != '\n');
    if (start_buchstabe < 'a' || start_buchstabe > 'z') {
        printf("Fehlerhafte Eingabe. Das Programm wird beendet\n");
        return 1;
    }

    printf("Geben Sie ein Endbuchstabe ein: ");
    scanf("%c", &end_buchstabe);
    while(getchar() != '\n');
    if (end_buchstabe < start_buchstabe || end_buchstabe > 'z') {
        printf("Fehlerhafte Eingabe. Das Programm wird beendet\n");
        return 1;
    }

    printf("Geben Sie ein Startzahl ein: ");
    scanf("%d", &start_zahl);
    while(getchar() != '\n');
    if (start_zahl < 1 || start_zahl > INT_MAX) {
        printf("Fehlerhafte Eingabe. Das Programm wird beendet\n");
        return 1;
    }

    printf("Geben Sie ein Endzahl ein: ");
    scanf("%d", &end_zahl);
    while(getchar() != '\n');
    if (end_zahl < start_zahl || end_zahl > INT_MAX) {
        printf("Fehlerhafte Eingabe. Das Programm wird beendet\n");
        return 1;
    }

    for (char i = start_buchstabe; i <= end_buchstabe; i++) {
        for (int k = start_zahl; k <= end_zahl; k++) {
            printf("(%c, %d) ", i, k);
        }
        printf("\n");
    }

    return 0;
}
