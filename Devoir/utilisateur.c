#include <stdio.h>
#include <stdlib.h>

// 1. Définition de notre structure
struct Person {
    char login[50];
    char mot_de_passe[50];
    char role[30];
};

int main() {
    // Déclaration d'une variable 'p' basée sur notre structure
    struct Person p;
    
    // Déclaration d'un pointeur de fichier (un repère pour le système)
    FILE *fichier = NULL;

    // 2. Ouverture du fichier en mode "r" (Read / Lecture)
    fichier = fopen("utilisateur.txt", "r");

    // 3. Vérification de sécurité : le fichier existe-t-il ?
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier utilisateurs.txt.\n");
        printf("Vérifie qu'il est bien au même endroit que ton code C.\n");
        return 1; // On quitte le programme avec un code d'erreur
    }

    printf("--- LISTE DES UTILISATEURS TROUVES ---\n\n");

    // 4. Boucle de lecture
    // fscanf lit dans le fichier. %s s'arrête dès qu'il rencontre un espace.
    // La fonction renvoie le nombre d'éléments lus avec succès (ici, on en attend 3).
    // EOF signifie "End Of File" (Fin du fichier).
    while (fscanf(fichier, "%s %s %s", p.login, p.mot_de_passe, p.role) != EOF) {
        
        // À chaque tour de boucle, la structure 'p' est mise à jour avec la nouvelle ligne
        printf("Utilisateur : %s\n", p.login);
        printf("Mot de passe : %s\n", p.mot_de_passe);
        printf("Rôle        : %s\n", p.role);
        printf("-------------------------------------\n");
    }

    // 5. Fermeture du fichier
    fclose(fichier);

    return 0; // Tout s'est bien passé
}