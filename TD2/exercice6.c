#include <stdio.h>

int main() {
    int A[150]; /* assez grand pour contenir A + B */
    int B[50];
    int N, M;
    int i;

    printf("Entrez la dimension de A : ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    printf("Entrez la dimension de B : ");
    scanf("%d", &M);
    for (i = 0; i < M; i++) {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    /* Ajouter B a la fin de A */
    for (i = 0; i < M; i++) {
        A[N + i] = B[i];
    }
    N = N + M; /* Nouvelle taille de A */

    printf("Tableau A apres ajout de B : ");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
