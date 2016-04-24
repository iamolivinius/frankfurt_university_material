#include <stdio.h>

int main() {
    char buchstabe;

    printf("Geben Sie einen Grossbuchstaben ein: ");
    scanf("%c", &buchstabe);

    if (buchstabe < 'A' || buchstabe > 'Z') {
        printf("Eingabe Fehlerhaft. Programm wird beendet!\n");
        return 1;
    }

    for (char i = buchstabe; i <= 'Z'; i++) {
        printf("%c ", i);
    }
    printf("\n");

    return 0;
}
