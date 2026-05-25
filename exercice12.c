#include <stdio.h>

int main() {
    int N;
    int i;
    long somme;

    printf("Entrez N : ");
    scanf("%d", &N);

    somme = 0;

    for (i = 1; i <= N; i++) {
        somme = somme + i;
    }

    printf("1 + 2 + ... + %d = %ld\n", N, somme);

    return 0;
}
