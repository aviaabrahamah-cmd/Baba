#include <stdio.h>

int main() {
    int T[50];
    int N;
    int X;
    int i, j;
    int trouve;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    printf("Entrez l'element a supprimer : ");
    scanf("%d", &X);

    trouve = 0;

    /* Chercher X dans le tableau */
    for (i = 0; i < N; i++) {
        if (T[i] == X) {
            /* Decaler les elements vers la gauche */
            for (j = i; j < N - 1; j++) {
                T[j] = T[j + 1];
            }
            N--;       /* taille diminue */
            i--;       /* on reste sur le meme indice au prochain tour */
            trouve = 1;
        }
    }

    if (trouve == 0) {
        printf("Element %d non trouve.\n", X);
    } else {
        printf("Tableau apres suppression : ");
        for (i = 0; i < N; i++) {
            printf("%d ", T[i]);
        }
        printf("\n");
    }

    return 0;
}
