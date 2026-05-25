#include <stdio.h>

int main() {
    int N;
    int i;
    long resultat;

    printf("Entrez N : ");
    scanf("%d", &N);

    resultat = 1;

    for (i = 1; i <= N; i++) {
        resultat = resultat * i;
    }

    printf("1 * 2 * ... * %d = %ld\n", N, resultat);

    return 0;
}
