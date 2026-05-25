#include <stdio.h>

int main() {
    int T[50];
    int N;
    int i;
    int max, posMax;

    printf("Entrez la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    /* Recherche du maximum */
    max = T[0];
    posMax = 0;

    for (i = 1; i < N; i++) {
        if (T[i] > max) {
            max = T[i];
            posMax = i;
        }
    }

    printf("Valeur maximale = %d\n", max);
    printf("Position        = %d\n", posMax);

    return 0;
}
