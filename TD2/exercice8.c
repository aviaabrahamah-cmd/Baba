#include <stdio.h>

int main() {
    int A[50];
    int N;
    int i;
    int max, min;
    int posMax, posMin;

    printf("Entrez la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    max = A[0];
    min = A[0];
    posMax = 0;
    posMin = 0;

    for (i = 1; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
            posMax = i;
        }
        if (A[i] < min) {
            min = A[i];
            posMin = i;
        }
    }

    printf("Maximum = %d a la position %d\n", max, posMax);
    printf("Minimum = %d a la position %d\n", min, posMin);

    return 0;
}
