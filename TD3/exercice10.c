#include <stdio.h>
#include <string.h>

int main() {
    char phrase[200];
    char crypte[600]; /* plus grande car on ajoute des caracteres */
    int i, j;
    int longueur;
    char c, suiv;

    /* Les voyelles */
    char voyelles[] = "aeiouy";

    printf("Entrez une phrase (lettres seulement) : ");
    /* fgets pour lire une phrase avec espaces */
    fgets(phrase, 200, stdin);

    longueur = strlen(phrase);
    j = 0;

    for (i = 0; i < longueur - 1; i++) {
        c = phrase[i];
        suiv = phrase[i + 1];

        crypte[j] = c;
        j++;

        /* Verifier si c est une consonne et suiv est une voyelle */
        int cEstVoyelle = 0;
        int suivEstVoyelle = 0;
        int k;

        for (k = 0; k < 6; k++) {
            if (c == voyelles[k]) cEstVoyelle = 1;
            if (suiv == voyelles[k]) suivEstVoyelle = 1;
        }

        if (cEstVoyelle == 0 && suivEstVoyelle == 1 && c != ' ') {
            /* C'est une consonne suivie d'une voyelle */
            crypte[j] = 'I';
            j++;
            crypte[j] = 'T';
            j++;
        }
    }
    /* Copier le dernier caractere */
    crypte[j] = phrase[longueur - 1];
    j++;
    crypte[j] = '\0';

    printf("Phrase cryptee : %s\n", crypte);

    return 0;
}
