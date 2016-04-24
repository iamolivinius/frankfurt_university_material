#include <stdio.h>
#include <math.h>

unsigned int Sieb(int n) {
    int count = 0;
    int sieb[n+1];
    for (int i = 0; i < n+1; i++) {
        sieb[i] = 1;
    }

    for (int i = 2; i < sqrt(n); i++) {
        if (sieb[i] == 1) {
            for (int k = i+i; k <= n; k += i) {
                sieb[k] = 0;
            }
        }
    }

    printf("Primzahlen im Interval [2, %d]: ", n);
    for (int i = 2; i < n + 1; i++) {
        if (sieb[i] == 1) {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n");

    return count;
}

int main() {
    int n;
    printf("Geben Sie bitte n ein: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Die Zahl ist zu klein. Das Programm wird beendet.\n");
        return 1;
    }

    printf("Unter den ersten %d natuerlichen Zahlen gibt es %d Primzahlen.\n", n, Sieb(n));

    return 0;
}
