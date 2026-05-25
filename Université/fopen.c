#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. On crée un pointeur de fichier
    FILE *fichier = NULL;

    // 2. On ouvre le fichier "bonjour.txt" en mode écriture ("w" pour write)
    fichier = fopen("bonjour.txt", "w");

    // 3. On vérifie TOUJOURS si l'ouverture a réussi
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier.\n");
        return 1; // On arrête le programme
    }

    // 4. On écrit dans le fichier avec fprintf (comme un printf, mais dans le fichier)
    fprintf(fichier, "Bonjour tout le monde !");

    // 5. On ferme impérativement le fichier
    fclose(fichier);

    printf("Le fichier a ete cree et rempli avec succes.\n");
    return 0;
}