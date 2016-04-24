#include <stdio.h>

int main() {
    for (char i = 'a'; i <= 'd'; i++) {
        for (int k = 1; k <= 5; k++) {
            printf("(%c, %d) ", i, k);
        }
        printf("\n");
    }

    return 0;
}
