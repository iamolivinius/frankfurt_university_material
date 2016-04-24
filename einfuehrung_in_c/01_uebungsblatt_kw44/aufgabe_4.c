#include <stdio.h>
#include <math.h>

int main() {
    float flaeche;
    float radius;

    printf("Flaeche (A) des Kreises: ");
    scanf("%f", &flaeche);

    radius = sqrt(flaeche / M_PI);

    printf("Der Durchmesser des Kreises ist: %f\n", 2 * radius);

    return 0;
}


