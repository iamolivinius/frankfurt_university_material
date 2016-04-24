// #include <stdio.h>

// int main() {
//     double zahl;

//     printf("Eine Fliesskommazahl bitte: ");
//     scanf("%f", zahl);
//     printf("Die Zahl lautet %f\n", zahl);
//     return 0;
// }

#include <stdio.h>

int main() {
    double zahl;

    printf("Eine Fliesskommazahl bitte: ");
    scanf("%lf", &zahl);
    printf("Die Zahl lautet %f\n", zahl);
    return 0;
}
