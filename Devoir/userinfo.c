#include <stdio.h>

// Définition de la structure (Correcte !)
struct Person {
    char login[50];
    char mot_de_passe[10];
    char role[30];
};

int main() {
    // Au lieu de p1, p2, p3, on crée un tableau de 3 "Person"
    struct Person liste[3] = {
        {"root", "Raas212", "Professeur"},
        {"admin", "Raas213", "Administrateur"},
        {"Raas", "Raas51", "Programmeur"}
    };

    int i;
    printf("Voila la liste des utilisateurs avec leurs informations :\n\n");

    // La boucle commence à 0 et s'arrête avant 3 (donc 0, 1, 2)
    for (i = 0; i < 3; i++) {
        // On utilise la syntaxe liste[i] pour cibler l'utilisateur actuel
        printf("Utilisateur  : %s\n", liste[i].login);
        printf("Mot de passe : %s\n", liste[i].mot_de_passe);
        printf("Role         : %s\n", liste[i].role);
        printf("------------------------------------\n");
    }

    return 0; // Bonne pratique pour indiquer que le programme s'est bien terminé
}