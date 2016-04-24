#include <stdio.h>

int main() {
    unsigned int tage;

    printf("Anzahl der Tage: ");
    scanf("%u", &tage);
    printf("%u Woche(n) und %u Tag(e)\n", tage / 7, tage % 7);
    return 0;
}
