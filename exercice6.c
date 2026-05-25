#include <stdio.h>

int main() {
    float note1, note2;
    float coef1, coef2;
    float moyenne;

    printf("Entrez la premiere note : ");
    scanf("%f", &note1);
    printf("Entrez le coefficient de la premiere note : ");
    scanf("%f", &coef1);

    printf("Entrez la deuxieme note : ");
    scanf("%f", &note2);
    printf("Entrez le coefficient de la deuxieme note : ");
    scanf("%f", &coef2);

    moyenne = (note1 * coef1 + note2 * coef2) / (coef1 + coef2);

    printf("Moyenne ponderee = %.2f\n", moyenne);

    return 0;
}
