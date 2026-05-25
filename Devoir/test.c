#include <stdio.h>

int puissance(int base, int expo)
{
    int i, d;

    d = 1;

    for(i = 1; i <= expo; i++) {
        d = d * base;
    }

    return d;
}

int factorielle(int fact)
{
    int i, p;

    p = 1;

    for(i = 1; i <= fact; i++) {
        p = p * i;
    }

    return p;
}

int combinaison(int n, int k)
{
    int calcul;

    calcul = factorielle(n) /
            (factorielle(k) * factorielle(n-k));

    return calcul;
}

int main()
{
    int a, b, coef, puissanceX, n, k;

    printf("\tOn veut calculer (ax+b)^n\n");

    printf("Entrer la valeur de a : ");
    scanf("%d", &a);

    printf("Entrer la valeur de b : ");
    scanf("%d", &b);

    printf("Entrer la puissance n : ");
    scanf("%d", &n);

    printf("\nCalcul de (%dx + %d)^%d\n", a, b, n);

    printf("\nResultat :\n");

    for(k = 0; k <= n; k++)
    {
        puissanceX = n-k;

        coef = combinaison(n,k)
              * puissance(a,puissanceX)
              * puissance(b,k);

        if(puissanceX > 1) {

            printf("%dx^%d", coef, puissanceX);
        }

        else if(puissanceX == 1) {

            printf("%dx", coef);
        }

        else {

            printf("%d", coef);
        }

        if(k != n) {

            printf(" + ");
        }
    }

    printf("\n");

    return 0;
}