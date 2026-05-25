#include <stdio.h>

int main() {
    int U[50], V[50];
    int N;
    int i;
    long produit;

    printf("Entrez la dimension des vecteurs : ");
    scanf("%d", &N);

    printf("Remplissage de U :\n");
    for (i = 0; i < N; i++) {
        printf("U[%d] = ", i);
        scanf("%d", &U[i]);
    }

    printf("Remplissage de V :\n");
    for (i = 0; i < N; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &V[i]);
    }

    /* Produit scalaire = somme de U[i]*V[i] */
    produit = 0;
    for (i = 0; i < N; i++) {
        produit = produit + (U[i] * V[i]);
    }

    printf("Produit scalaire = %ld\n", produit);

    return 0;
}
