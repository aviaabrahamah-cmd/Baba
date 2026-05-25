#include <stdio.h>
#include <string.h>

int main() {
    char chaine[100];
    int i, j;
    int longueur;
    int estPalindrome;

    printf("Entrez une chaine de caracteres : ");
    scanf("%s", chaine);

    longueur = strlen(chaine);
    estPalindrome = 1; /* on suppose que c'est un palindrome */

    /* Comparer le debut et la fin de la chaine */
    i = 0;
    j = longueur - 1;

    while (i < j) {
        if (chaine[i] != chaine[j]) {
            estPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (estPalindrome == 1) {
        printf("\"%s\" est un palindrome.\n", chaine);
    } else {
        printf("\"%s\" n'est pas un palindrome.\n", chaine);
    }

    return 0;
}
