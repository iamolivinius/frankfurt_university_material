#include <stdio.h>
#include <float.h>

int main() {
    unsigned int anzahl;
    printf("Wie viele Kommazahlen moechten Sie eingeben? ");
    scanf("%u", &anzahl);

    float kommazahlen[anzahl];
    float max = FLT_MIN;
    float min = FLT_MAX;
    float summe = 0.0;

    for (int i = 0; i < anzahl; i++) {
        printf("Eingabe: %d: ", i + 1);
        scanf("%f", &kommazahlen[i]);
    }

    for (int i = 0; i < anzahl; i++) {
        if (kommazahlen[i] > max) max = kommazahlen[i];
        if (kommazahlen[i] < min) min = kommazahlen[i];
        summe += kommazahlen[i];
    }

    printf("\n");
    printf("Maximalwert: %.2f\n", max);
    printf("Minimalwert: %.2f\n", min);
    printf("Durchschnittswert: %.2f\n", summe / anzahl);

    return 0;
}
