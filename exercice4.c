#include <stdio.h>

int main() {
    float note1, note2;
    float somme, moyenne;

    printf("Entrez la premiere note : ");
    scanf("%f", &note1);
    printf("Entrez la deuxieme note : ");
    scanf("%f", &note2);

    somme = note1 + note2;
    moyenne = somme / 2;

    printf("Somme   = %.2f\n", somme);
    printf("Moyenne = %.2f\n", moyenne);

    return 0;
}
