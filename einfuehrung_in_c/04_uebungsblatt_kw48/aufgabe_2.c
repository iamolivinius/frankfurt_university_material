#include <stdio.h>
#include <float.h>

int main() {
    float kommazahlen[10];
    float max = FLT_MIN;
    float min = FLT_MAX;
    float summe = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("Eingabe: %d: ", i + 1);
        scanf("%f", &kommazahlen[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (kommazahlen[i] > max) max = kommazahlen[i];
        if (kommazahlen[i] < min) min = kommazahlen[i];
        summe += kommazahlen[i];
    }

    printf("\n");
    printf("Maximalwert: %.2f\n", max);
    printf("Minimalwert: %.2f\n", min);
    printf("Durchschnittswert: %.2f\n", summe / 10);

    return 0;
}
