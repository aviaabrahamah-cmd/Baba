#include <stdio.h>
#include <string.h>

int main() {
    char crypte[600];
    char phrase[200];
    int i, j;
    int longueur;
    char voyelles[] = "aeiouy";

    printf("Entrez la phrase cryptee : ");
    fgets(crypte, 600, stdin);

    longueur = strlen(crypte);
    j = 0;
    i = 0;

    while (i < longueur) {
        /* Verifier si le caractere courant est une consonne */
        int cEstVoyelle = 0;
        int k;

        for (k = 0; k < 6; k++) {
            if (crypte[i] == voyelles[k]) {
                cEstVoyelle = 1;
            }
        }

        /* Si on trouve une consonne suivie de 'I' et 'T' et ensuite une voyelle */
        if (cEstVoyelle == 0 && crypte[i] != ' ' && crypte[i] != '\n'
            && i + 2 < longueur
            && crypte[i + 1] == 'I' && crypte[i + 2] == 'T') {

            /* On copie juste la consonne, on saute IT */
            phrase[j] = crypte[i];
            j++;
            i = i + 3; /* sauter la consonne + I + T */

        } else {
            phrase[j] = crypte[i];
            j++;
            i++;
        }
    }

    phrase[j] = '\0';

    printf("Phrase decryptee : %s\n", phrase);

    return 0;
}
