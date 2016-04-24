#include <stdio.h>

int main() {
    int odds[10];
    int evens[10];
    int odds_length = 0;
    int evens_length = 0;
    int odds_sum = 0;
    int evens_sum = 0;

    int eingabe;

    for (int i = 0; i < 10; i++) {
        printf("Eingabe %d: ", i +1);
        scanf("%d", &eingabe);

        if (eingabe % 2 == 0) {
            evens[evens_length++] = eingabe;
        } else {
            odds[odds_length++] = eingabe;
        }
    }

    printf("\n");
    printf("Evens: ");
    for (int i = 0; i < evens_length; i++) {
        evens_sum += evens[i];
        printf("%d ", evens[i]);
    }

    printf("\n");
    printf("Odds: ");
    for (int i = 0; i < odds_length; i++) {
        odds_sum += odds[i];
        printf("%d ", odds[i]);
    }

    printf("\n");
    if (odds_sum < evens_sum) {
        printf("Evens\n");
    } else if (odds_sum > evens_sum) {
        printf("Odds\n");
    } else {
        printf("Gleich\n");
    }
}
