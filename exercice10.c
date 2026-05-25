#include <stdio.h>

int main() {
    int N;
    int i;

    printf("Entrez N : ");
    scanf("%d", &N);

    printf("Les diviseurs de %d :\n", N);

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
