#include <stdio.h>

int main() {
    int a, b;
    int temp;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);
    printf("Entrez le deuxieme entier : ");
    scanf("%d", &b);

    /* Algorithme d'Euclide */
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("Le PGCD est : %d\n", a);

    return 0;
}
