#include <stdio.h>

int main() {
    int T[50];
    int TPOS[50], TNEG[50];
    int N;
    int i;
    int nbPos, nbNeg;

    printf("Entrez la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    nbPos = 0;
    nbNeg = 0;

    for (i = 0; i < N; i++) {
        if (T[i] > 0) {
            TPOS[nbPos] = T[i];
            nbPos++;
        } else if (T[i] < 0) {
            TNEG[nbNeg] = T[i];
            nbNeg++;
        }
    }

    printf("Tableau TPOS (positifs) : ");
    for (i = 0; i < nbPos; i++) {
        printf("%d ", TPOS[i]);
    }
    printf("\n");

    printf("Tableau TNEG (negatifs) : ");
    for (i = 0; i < nbNeg; i++) {
        printf("%d ", TNEG[i]);
    }
    printf("\n");

    return 0;
}
