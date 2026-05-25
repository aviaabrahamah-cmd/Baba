#include <stdio.h>

int main() {
    int A, B, C;
    int temp;

    /* --- Echange de deux variables A et B --- */
    printf("Entrez A : ");
    scanf("%d", &A);
    printf("Entrez B : ");
    scanf("%d", &B);

    printf("Avant echange : A = %d, B = %d\n", A, B);

    temp = A;
    A = B;
    B = temp;

    printf("Apres echange : A = %d, B = %d\n", A, B);

    /* --- Echange de trois variables A, B et C --- */
    printf("\nEntrez A : ");
    scanf("%d", &A);
    printf("Entrez B : ");
    scanf("%d", &B);
    printf("Entrez C : ");
    scanf("%d", &C);

    printf("Avant echange : A = %d, B = %d, C = %d\n", A, B, C);

    /* On fait tourner : A -> B -> C -> A */
    temp = A;
    A = B;
    B = C;
    C = temp;

    printf("Apres echange : A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}
