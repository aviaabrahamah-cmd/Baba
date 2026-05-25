#include <stdio.h>

int main() {
    int T[50];
    int N;
    int i;
    float somme, moyenne;
    float diff, diffMin;
    int elemProche;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    /* Calculer la moyenne */
    somme = 0;
    for (i = 0; i < N; i++) {
        somme = somme + T[i];
    }
    moyenne = somme / N;
    printf("Moyenne = %.2f\n", moyenne);

    /* Trouver l'element le plus proche de la moyenne */
    elemProche = T[0];
    diffMin = T[0] - moyenne;
    if (diffMin < 0) diffMin = -diffMin; /* valeur absolue */

    for (i = 1; i < N; i++) {
        diff = T[i] - moyenne;
        if (diff < 0) diff = -diff; /* valeur absolue */

        if (diff < diffMin) {
            diffMin = diff;
            elemProche = T[i];
        }
    }

    printf("Element le plus proche de la moyenne : %d\n", elemProche);

    return 0;
}
