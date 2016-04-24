#include <stdio.h>
#include <string.h>

int main() {
    char text[301];
    char letter;
    int count = 0;

    printf("Geben Sie bitte einen Text ein: ");
    fgets(text, 300, stdin);
    printf("Geben Sie bitte einen Buchstaben ein: ");
    letter = getchar();

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == letter) count++;
    }

    printf("Der Buchstabe %c kommt %d mal vor im Text.\n", letter, count);
    return 0;
}
