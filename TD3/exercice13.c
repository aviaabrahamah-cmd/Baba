#include <stdio.h>

#define TAILLE_MAX 20

int main() {
    int triangle[TAILLE_MAX][TAILLE_MAX];
    int N;
    int i, j;

    printf("Entrez le degre N du triangle de Pascal : ");
    scanf("%d", &N);

    /* Construction du triangle de Pascal */
    for (i = 0; i <= N; i++) {
        /* Le premier et le dernier element de chaque ligne valent 1 */
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        /* Les elements du milieu = somme des deux elements au-dessus */
        for (j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    /* Affichage du triangle */
    printf("\nTriangle de Pascal de degre %d :\n", N);
    for (i = 0; i <= N; i++) {
        /* Espaces pour centrer le triangle */
        for (j = 0; j < N - i; j++) {
            printf("   ");
        }
        /* Valeurs de la ligne */
        for (j = 0; j <= i; j++) {
            printf("%6d", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
