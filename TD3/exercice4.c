#include <stdio.h>

int main() {
    int T1[50], T2[100];
    int N1, N2;
    int i, j, k;
    int trouve;

    printf("Entrez la taille de T1 (max 50) : ");
    scanf("%d", &N1);
    for (i = 0; i < N1; i++) {
        printf("T1[%d] = ", i);
        scanf("%d", &T1[i]);
    }

    printf("Entrez la taille de T2 (max 100) : ");
    scanf("%d", &N2);
    for (i = 0; i < N2; i++) {
        printf("T2[%d] = ", i);
        scanf("%d", &T2[i]);
    }

    /* Pour chaque element de T2, verifier s'il est dans T1 */
    trouve = 1; /* on suppose que tous les elements de T2 sont dans T1 */
    for (i = 0; i < N2; i++) {
        int estDansT1 = 0;
        for (j = 0; j < N1; j++) {
            if (T2[i] == T1[j]) {
                estDansT1 = 1;
                break;
            }
        }
        if (estDansT1 == 0) {
            trouve = 0;
            break;
        }
    }

    if (trouve == 0) {
        printf("T2 n'est pas contenu dans T1.\n");
    } else {
        printf("T2 est contenu dans T1. Suppression en cours...\n");

        /* Supprimer chaque element de T2 de T1 */
        for (i = 0; i < N2; i++) {
            for (j = 0; j < N1; j++) {
                if (T1[j] == T2[i]) {
                    /* Decaler vers la gauche */
                    for (k = j; k < N1 - 1; k++) {
                        T1[k] = T1[k + 1];
                    }
                    N1--;
                    break; /* supprimer seulement la premiere occurrence */
                }
            }
        }

        printf("T1 apres suppression : ");
        for (i = 0; i < N1; i++) {
            printf("%d ", T1[i]);
        }
        printf("\n");
    }

    return 0;
}
