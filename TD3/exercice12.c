#include <stdio.h>

#define TAILLE_MAX 10

int main() {
    int carre[TAILLE_MAX][TAILLE_MAX];
    int n;
    int i, j;
    int somme_ref;   /* somme de reference (premiere ligne) */
    int somme;
    int estMagique;

    printf("Entrez la taille n du carre : ");
    scanf("%d", &n);

    /* Remplissage du carre */
    printf("Entrez les %d x %d valeurs :\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("carre[%d][%d] = ", i, j);
            scanf("%d", &carre[i][j]);
        }
    }

    /* Affichage du carre */
    printf("\nLe carre :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", carre[i][j]);
        }
        printf("\n");
    }

    /* Calculer la somme de reference avec la premiere ligne */
    somme_ref = 0;
    for (j = 0; j < n; j++) {
        somme_ref = somme_ref + carre[0][j];
    }

    estMagique = 1; /* on suppose que c'est magique */

    /* Verifier toutes les lignes */
    for (i = 0; i < n; i++) {
        somme = 0;
        for (j = 0; j < n; j++) {
            somme = somme + carre[i][j];
        }
        if (somme != somme_ref) {
            estMagique = 0;
        }
    }

    /* Verifier toutes les colonnes */
    for (j = 0; j < n; j++) {
        somme = 0;
        for (i = 0; i < n; i++) {
            somme = somme + carre[i][j];
        }
        if (somme != somme_ref) {
            estMagique = 0;
        }
    }

    if (estMagique == 1) {
        printf("\nC'est un carre magique ! (somme = %d)\n", somme_ref);
    } else {
        printf("\nCe n'est pas un carre magique.\n");
    }

    return 0;
}
