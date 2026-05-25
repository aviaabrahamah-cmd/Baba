#include <stdio.h>

int main() {
    int T[50];
    int N;
    int i;
    long somme;

    printf("Entrez la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    /* Remplissage */
    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    /* Affichage */
    printf("Le tableau : ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    /* Somme */
    somme = 0;
    for (i = 0; i < N; i++) {
        somme = somme + T[i];
    }
    printf("Somme des elements = %ld\n", somme);

    return 0;
}
