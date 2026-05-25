#include <stdio.h>

int main() {
    int N;
    int i;

    printf("Entrez N : ");
    scanf("%d", &N);

    printf("Les nombres pairs entre 1 et %d :\n", N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
