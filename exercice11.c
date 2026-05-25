#include <stdio.h>

int main() {
    int N;
    int i;
    long factoriel;

    printf("Entrez N : ");
    scanf("%d", &N);

    factoriel = 1;

    for (i = 1; i <= N; i++) {
        factoriel = factoriel * i;
    }

    printf("%d! = %ld\n", N, factoriel);

    return 0;
}
