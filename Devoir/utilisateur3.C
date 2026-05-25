#include <stdio.h>

// Définition de la structure (notre moule reste le même)
struct Person {
    char login[50];
    char mot_de_passe[10];
    char role[30];
};

// 1. FONCTION DE SAISIE
// Elle prend le tableau vide et va le remplir grâce à scanf
void saisir_utilisateurs(struct Person t[], int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        printf("--- Enregistrement de l'utilisateur n°%d ---\n", i + 1);
        
        printf("Entrez le login : ");
        scanf("%s", t[i].login); // Pas de & ici car login est déjà un tableau de caractères
        
        printf("Entrez le mot de passe : ");
        scanf("%s", t[i].mot_de_passe);
        
        printf("Entrez le role (ex: Etudiant, Admin) : ");
        scanf("%s", t[i].role);
        
        printf("Utilisateur enregistre avec succes !\n\n");
    }
}

// 2. FONCTION D'AFFICHAGE (celle que nous avons créée juste avant)
void afficher_utilisateurs(struct Person t[], int taille) {
    int i;
    printf("=== LISTE DES UTILISATEURS ENREGISTRES ===\n\n");
    for (i = 0; i < taille; i++) {
        printf("Utilisateur  : %s\n", t[i].login);
        printf("Mot de passe : %s\n", t[i].mot_de_passe);
        printf("Role         : %s\n", t[i].role);
        printf("------------------------------------\n");
    }
}

// 3. LE PROGRAMME PRINCIPAL
int main() {
    // On déclare un tableau de 3 personnes, mais il est VIDE au début
    struct Person liste[3]; 

    // Étape A : On demande à l'utilisateur de remplir le tableau
    saisir_utilisateurs(liste, 3);
    
    printf("\n--- Verification des donnees en memoire ---\n\n");

    // Étape B : On affiche ce qui a été saisi
    afficher_utilisateurs(liste, 3);

    return 0;
}