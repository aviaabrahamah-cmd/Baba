#include <stdio.h>

int main() {
    int N;
    int i;
    long somme;
    long puissance;

    printf("Entrez N : ");
    scanf("%d", &N);

    somme = 0;
    puissance = 1; /* 10^0 = 1 */

    for (i = 0; i <= N; i++) {
        somme = somme + puissance;
        puissance = puissance * 10;
    }

    printf("1 + 10 + 10^2 + ... + 10^%d = %ld\n", N, somme);

    return 0;
}
