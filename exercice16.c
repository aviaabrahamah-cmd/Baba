#include <stdio.h>

int main() {
    int N;
    int i;
    long fact;
    long somme;

    printf("Entrez N : ");
    scanf("%d", &N);

    somme = 0;
    fact = 1;

    for (i = 1; i <= N; i++) {
        fact = fact * i;   /* fact = i! */
        somme = somme + fact;
    }

    printf("1! + 2! + ... + %d! = %ld\n", N, somme);

    return 0;
}
