#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &b);

    /* On ne calcule pas le produit, on regarde les signes */
    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("Le produit est positif.\n");
    } else {
        printf("Le produit est negatif.\n");
    }

    return 0;
}
