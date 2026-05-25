#include <stdio.h>

int main() {
    int T[51]; /* max 50 elements + 1 place pour l'insertion */
    int N;
    int X;
    int i, pos;

    printf("Entrez la taille du tableau trie : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    printf("Entrez l'element a inserer : ");
    scanf("%d", &X);

    /* Trouver la position ou inserer X */
    pos = N; /* par defaut, on insere a la fin */
    for (i = 0; i < N; i++) {
        if (X <= T[i]) {
            pos = i;
            break; /* on sort de la boucle */
        }
    }

    /* Decaler les elements vers la droite a partir de pos */
    for (i = N; i > pos; i--) {
        T[i] = T[i - 1];
    }

    /* Inserer X */
    T[pos] = X;
    N++;

    printf("Tableau apres insertion : ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
