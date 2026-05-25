#include <stdio.h>

// On change le type de retour en float pour gérer les nombres à virgule
float somme(int b) {
    float f = 1.0; // Le factoriel au dénominateur doit être un réel
    float s = 0.0; // La somme commence à 0.0
    int i;
    
    for (i = 1; i <= b; i++) {
        f = f * i;        // On calcule le factoriel de i (1!, puis 2!, puis 3!...)
        s = s + (1.0 / f); // On ajoute l'inverse du factoriel à la somme
    }
    return s;
}

int main() {
    int N; // Déclaration correcte de la variable N
    float P; // P doit être un float pour stocker le résultat de la fonction
    
    printf("Entrez la valeur de N: ");
    scanf("%d", &N);
    
    P = somme(N);
    
    printf("La somme S est : %.2f\n", P);
    
    return 0;
}