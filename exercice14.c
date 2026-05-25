#include <stdio.h>

int main() {
    int N;
    int i;
    float somme;

    printf("Entrez N : ");
    scanf("%d", &N);

    somme = 0;

    for (i = 1; i <= N; i++) {
        somme = somme + (1.0 / i);
    }

    printf("1/1 + 1/2 + ... + 1/%d = %.4f\n", N, somme);

    return 0;
}
