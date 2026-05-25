#include <stdio.h>

int main() {
    int T[50];
    int N;
    int i, j;
    int newN;

    printf("Entrez la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    /* Suppression des zeros : on compacte le tableau */
    newN = 0;
    for (i = 0; i < N; i++) {
        if (T[i] != 0) {
            T[newN] = T[i];
            newN++;
        }
    }

    printf("Tableau apres suppression des zeros : ");
    for (i = 0; i < newN; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
