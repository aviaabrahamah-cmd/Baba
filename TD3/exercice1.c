#include <stdio.h>

#define N 9

int main() {
    int T[N];
    int i;

    /* Saisie */
    printf("Entrez %d entiers :\n", N);
    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    /* Affichage : d'abord les pairs */
    printf("Tableau (pairs puis impairs) : ");
    for (i = 0; i < N; i++) {
        if (T[i] % 2 == 0) {
            printf("%d ", T[i]);
        }
    }
    /* Ensuite les impairs */
    for (i = 0; i < N; i++) {
        if (T[i] % 2 != 0) {
            printf("%d ", T[i]);
        }
    }
    printf("\n");

    return 0;
}
