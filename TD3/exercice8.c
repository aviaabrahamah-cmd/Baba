#include <stdio.h>
#include <string.h>

int main() {
    char chaine[200];
    char bigramme[3]; /* 2 lettres + caractere de fin */
    int i;
    int longueur;
    int count;

    printf("Entrez la chaine de caracteres : ");
    scanf("%s", chaine);

    printf("Entrez le bigramme (2 lettres) : ");
    scanf("%s", bigramme);

    longueur = strlen(chaine);
    count = 0;

    /* Parcourir la chaine et chercher le bigramme */
    for (i = 0; i < longueur - 1; i++) {
        if (chaine[i] == bigramme[0] && chaine[i + 1] == bigramme[1]) {
            count++;
        }
    }

    printf("Le bigramme \"%s\" apparait %d fois.\n", bigramme, count);

    return 0;
}
