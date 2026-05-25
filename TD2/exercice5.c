#include <stdio.h>

int main() {
    int T[50];
    int N;
    int i;
    int temp;

    printf("Entrez la dimension du tableau (max 50) : ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }

    /* On echange T[0] avec T[N-1], T[1] avec T[N-2], etc. */
    for (i = 0; i < N / 2; i++) {
        temp = T[i];
        T[i] = T[N - 1 - i];
        T[N - 1 - i] = temp;
    }

    printf("Tableau inverse : ");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
