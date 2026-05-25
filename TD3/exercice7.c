#include <stdio.h>

int main() {
    char c;
    char precedent;
    int nbA, nbES;

    nbA = 0;
    nbES = 0;
    precedent = ' ';

    printf("Entrez un texte (termine par un point) :\n");

    /* Lire caractere par caractere jusqu'au point */
    while (1) {
        c = getchar();

        if (c == '.') {
            break; /* fin du texte */
        }

        /* Compter les 'a' */
        if (c == 'a') {
            nbA++;
        }

        /* Compter les suites "es" */
        if (precedent == 'e' && c == 's') {
            nbES++;
        }

        precedent = c;
    }

    printf("Nombre de 'a'  : %d\n", nbA);
    printf("Nombre de 'es' : %d\n", nbES);

    return 0;
}
