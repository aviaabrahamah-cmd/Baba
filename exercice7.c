#include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &b);
    printf("Entrez le troisieme nombre : ");
    scanf("%d", &c);

    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Le maximum est : %d\n", max);

    return 0;
}
