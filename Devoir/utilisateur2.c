#include <stdio.h>

// On définit la structure en premier pour que la fonction puisse la connaître
struct Person {
    char login[50];
    char mot_de_passe[10];
    char role[30];
};

// --- TA FONCTION COMMENCE ICI ---
// void signifie que la fonction ne "renvoie" aucun calcul, elle fait juste un affichage.
// Elle prend deux paramètres : le tableau 't' et un entier 'taille'.
void afficher_utilisateurs(struct Person t[], int taille) {
    int i;
    printf("Voila la liste des utilisateurs avec leurs informations :\n\n");

    for (i = 0; i < taille; i++) {
        // On utilise 't[i]' car notre paramètre s'appelle 't' ici
        printf("Utilisateur  : %s\n", t[i].login);
        printf("Mot de passe : %s\n", t[i].mot_de_passe);
        printf("Role         : %s\n", t[i].role);
        printf("------------------------------------\n");
    }
}
// --- TA FONCTION FINIT ICI ---


int main() {
    // 1. On déclare et initialise notre tableau dans le main
    struct Person liste[3] = {
        {"root", "Raas212", "Professeur"},
        {"admin", "Raas213", "Administrateur"},
        {"Raas", "Raas51", "Programmeur"}
    };

    // 2. On APPELLE la fonction en lui donnant le tableau et sa taille (3)
    afficher_utilisateurs(liste, 3);

    return 0;
}