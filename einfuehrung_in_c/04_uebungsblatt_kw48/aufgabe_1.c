#include <stdio.h>
#include <string.h>

int main() {
    char* text = "We all live in a yellow submarine yellow submarine, yellow submarine.";
    int count = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == 'e') count++;
    }

    printf("Buchstabe 'e' kommt %d vor.\n", count);

    return 0;
}
