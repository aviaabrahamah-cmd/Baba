#include <stdio.h>
#include <string.h>

int main() {
    char W[200];
    int longueur;
    int moitie;
    int i;
    int estCarre;

    printf("Entrez une chaine de caracteres : ");
    scanf("%s", W);

    longueur = strlen(W);
    estCarre = 0;

    /* Une chaine carree a une longueur paire */
    if (longueur % 2 == 0) {
        moitie = longueur / 2;
        estCarre = 1;

        /* Verifier que la premiere moitie est egale a la deuxieme */
        for (i = 0; i < moitie; i++) {
            if (W[i] != W[moitie + i]) {
                estCarre = 0;
                break;
            }
        }
    }

    if (estCarre == 1) {
        printf("\"%s\" est un carre.\n", W);
    } else {
        printf("\"%s\" n'est pas un carre.\n", W);
    }

    return 0;
}
