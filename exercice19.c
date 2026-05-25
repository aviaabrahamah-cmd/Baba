#include <stdio.h>

int main() {
    int N;
    int i;
    int estPremier;

    printf("Entrez un entier : ");
    scanf("%d", &N);

    estPremier = 1; /* On suppose qu'il est premier */

    if (N <= 1) {
        estPremier = 0;
    } else {
        for (i = 2; i < N; i++) {
            if (N % i == 0) {
                estPremier = 0; /* On a trouve un diviseur */
            }
        }
    }

    if (estPremier == 1) {
        printf("%d est un nombre premier.\n", N);
    } else {
        printf("%d n'est pas un nombre premier.\n", N);
    }

    return 0;
}
