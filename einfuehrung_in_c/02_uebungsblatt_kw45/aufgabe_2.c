#include <stdio.h>

int main() {
    int zahl;

    printf("Ganzzahl: ");
    scanf("%d", &zahl);

    if (zahl > 0) {
        printf("Zahl ist positiv\n");
    } else if (zahl < 0) {
        printf("Zahl ist negativ\n");
    } else {
        printf("Zahl ist gleich Null\n");
    }

    return 0;
}
