#include <stdio.h>

int main() {
    int N;
    int i;
    long fact;
    float somme;

    printf("Entrez N : ");
    scanf("%d", &N);

    somme = 0;
    fact = 1;

    for (i = 1; i <= N; i++) {
        fact = fact * i;           /* fact = i! */
        somme = somme + (1.0 / fact);
    }

    printf("1/1! + 1/2! + ... + 1/%d! = %.6f\n", N, somme);

    return 0;
}
