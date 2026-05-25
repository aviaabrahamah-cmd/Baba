#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C;
    float delta;
    float x1, x2;

    printf("Entrez A : ");
    scanf("%f", &A);
    printf("Entrez B : ");
    scanf("%f", &B);
    printf("Entrez C : ");
    scanf("%f", &C);

    if (A == 0) {
        /* Equation lineaire : Bx + C = 0 */
        if (B == 0) {
            printf("Pas d'inconnue, equation impossible.\n");
        } else {
            printf("Equation lineaire : x = %.2f\n", -C / B);
        }
    } else {
        delta = B * B - 4 * A * C;

        if (delta > 0) {
            x1 = (-B + sqrt(delta)) / (2 * A);
            x2 = (-B - sqrt(delta)) / (2 * A);
            printf("Deux solutions : x1 = %.2f et x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            x1 = -B / (2 * A);
            printf("Une seule solution : x = %.2f\n", x1);
        } else {
            printf("Pas de solution reelle (delta < 0).\n");
        }
    }

    return 0;
}
