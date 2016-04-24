#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    float hoehe;
    float volumen;

    printf("Radius (r) des Zylinders: ");
    scanf("%f", &radius);
    printf("Hoehe (h) des Zylinders: ");
    scanf("%f", &hoehe);

    volumen = M_PI * radius * radius * hoehe;

    printf("Das Volumen des Zylinders ist: %.3f\n", volumen);

    return 0;
}
