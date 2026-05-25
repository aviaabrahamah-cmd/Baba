#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Indispensable pour utiliser strcmp

struct info {
    char nom[50];
    char prenom[50];
    char datedenaissance[12];
    char adresse[50];
    char niveau[10];
};

void donnee(struct info t[], int taille) {
    int i, j; 
    struct info temp;
    
    // ÉTAPE 1 : Saisie de TOUS les étudiants
    for(i = 0; i < taille; i++) {
        printf("\n--- Etudiant %d ---\n", i + 1);
        printf("Nom : ");
        scanf("%s", t[i].nom);
        printf("Prenom : ");
        scanf("%s", t[i].prenom);
        printf("Date de naissance: ");
        scanf("%s", t[i].datedenaissance);
        printf("Adresse : "); 
        scanf("%s", t[i].adresse);
        printf("Niveau (L1, L2, L3, M1, M2) : ");
        scanf("%s", t[i].niveau);
    }
    
    // On fait le tri en mémoire AVANT d'ouvrir les fichiers (Tri par Sélection)
    for(i = 0; i < taille - 1; i++) {
        for(j = i + 1; j < taille; j++) {
            // Si le nom de l'étudiant 'i' est après le nom de l'étudiant 'j' dans l'alphabet
            if (strcmp(t[i].nom, t[j].nom) > 0) { 
                temp = t[i];   // On sauvegarde l'étudiant 'i' dans la boîte temporaire
                t[i] = t[j];   // L'étudiant 'j' prend la place de l'étudiant 'i'
                t[j] = temp;   // L'étudiant qui était dans la boîte va à la place de 'j'
            }
        }
    } 
    
    // Tri et écriture dans les fichiers correspondants
    FILE *fichier = NULL; 
    
    for(i = 0; i < taille; i++) {
        // On utilise strcmp pour comparer les chaînes. Si ça vaut 0, elles sont égales.
        if (strcmp(t[i].niveau, "L1") == 0) {
            fichier = fopen("L1.txt", "a"); // "a" pour ajouter sans écraser
        } 
        else if (strcmp(t[i].niveau, "L2") == 0) {
            fichier = fopen("L2.txt", "a");
        } 
        else if (strcmp(t[i].niveau, "L3") == 0) {
            fichier = fopen("L3.txt", "a");
        } 
        else if (strcmp(t[i].niveau, "M1") == 0) {
            fichier = fopen("M1.txt", "a");
        } 
        else if (strcmp(t[i].niveau, "M2") == 0) {
            fichier = fopen("M2.txt", "a");
        } 
        else {
            printf("Niveau inconnu pour %s %s, impossible d'enregistrer.\n", t[i].nom, t[i].prenom);
            continue; // Passe à l'étudiant suivant si le niveau est mal orthographié
        }

        // Vérification de sécurité pour l'ouverture du fichier
        if (fichier != NULL) {
            fprintf(fichier, "Nom : %s \n", t[i].nom);
            fprintf(fichier, "Prenom : %s \n", t[i].prenom);
            fprintf(fichier, "Date de naissance : %s \n", t[i].datedenaissance);
            fprintf(fichier, "Adresse : %s \n", t[i].adresse);
            fprintf(fichier, "Niveau : %s \n", t[i].niveau);
            fprintf(fichier, "-----------------------\n");
            
            fclose(fichier); // On ferme TOUJOURS le fichier dès qu'on a fini d'écrire
        }
    }
    printf("\nTri et enregistrement termines avec succes !\n");
}

void rechercherEtudiant(struct info Etudiant[], int taille, int choix, char mot_cherche[]) {
    int i;
    int action; // Pour stocker le choix (2 pour modifier, 3 pour supprimer)
    int changements = 0; // Indicateur pour savoir s'il faut réécrire les fichiers
    FILE *f_recherche = NULL;

    for (i = 0; i < taille; i++) {
        
        // CAS 1 : L'utilisateur a choisi de chercher par NOM
        if (choix == 1) {
            if (strcmp(Etudiant[i].nom, mot_cherche) == 0) {
                
                f_recherche = fopen("recherche.txt", "a");
                if (f_recherche != NULL) {
                    fprintf(f_recherche, "Nom : %s \nPrenom : %s \nDate de naissance : %s \nAdresse : %s \nNiveau : %s \n-----------------------\n", 
                            Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].datedenaissance, Etudiant[i].adresse, Etudiant[i].niveau);
                    fclose(f_recherche);
                }

                printf("\n--- ETUDIANT TROUVE ---\n");
                printf("Nom : %s \nPrenom : %s \nNiveau : %s \n", Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].niveau);

                printf("Que voulez-vous faire ? (2: Modifier, 3: Supprimer) : ");
                scanf("%d", &action);

                if (action == 2) {
                    printf("Nouveau Nom : "); scanf("%s", Etudiant[i].nom);
                    printf("Nouveau Prenom : "); scanf("%s", Etudiant[i].prenom);
                    printf("Nouvelle Date de naissance : "); scanf("%s", Etudiant[i].datedenaissance);
                    printf("Nouvelle Adresse : "); scanf("%s", Etudiant[i].adresse);
                    printf("Nouveau Niveau : "); scanf("%s", Etudiant[i].niveau);
                    changements = 1;
                } else if (action == 3) {
                    int j;
                    for (j = i; j < taille - 1; j++) Etudiant[j] = Etudiant[j + 1];
                    taille--; i--; changements = 1;
                }
            }
        }
        
        // CAS 2 : L'utilisateur a choisi de chercher par PRÉNOM
        else if (choix == 2) {
            if (strcmp(Etudiant[i].prenom, mot_cherche) == 0) {
                
                f_recherche = fopen("recherche.txt", "a");
                if (f_recherche != NULL) {
                    fprintf(f_recherche, "Nom : %s \nPrenom : %s \nDate de naissance : %s \nAdresse : %s \nNiveau : %s \n-----------------------\n", 
                            Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].datedenaissance, Etudiant[i].adresse, Etudiant[i].niveau);
                    fclose(f_recherche);
                }

                printf("\n--- ETUDIANT TROUVE ---\n");
                printf("Nom : %s \nPrenom : %s \nNiveau : %s \n", Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].niveau);

                printf("Que voulez-vous faire ? (2: Modifier, 3: Supprimer) : ");
                scanf("%d", &action);

                if (action == 2) {
                    printf("Nouveau Nom : "); scanf("%s", Etudiant[i].nom);
                    printf("Nouveau Prenom : "); scanf("%s", Etudiant[i].prenom);
                    printf("Nouvelle Date de naissance : "); scanf("%s", Etudiant[i].datedenaissance);
                    printf("Nouvelle Adresse : "); scanf("%s", Etudiant[i].adresse);
                    printf("Nouveau Niveau : "); scanf("%s", Etudiant[i].niveau);
                    changements = 1;
                } else if (action == 3) {
                    int j;
                    for (j = i; j < taille - 1; j++) Etudiant[j] = Etudiant[j + 1];
                    taille--; i--; changements = 1;
                }
            }
        }
        
        // CAS 3 : L'utilisateur a choisi de chercher par DATE DE NAISSANCE
        else if (choix == 3) {
            if (strcmp(Etudiant[i].datedenaissance, mot_cherche) == 0) {
                
                f_recherche = fopen("recherche.txt", "a");
                if (f_recherche != NULL) {
                    fprintf(f_recherche, "Nom : %s \nPrenom : %s \nDate de naissance : %s \nAdresse : %s \nNiveau : %s \n-----------------------\n", 
                            Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].datedenaissance, Etudiant[i].adresse, Etudiant[i].niveau);
                    fclose(f_recherche);
                }

                printf("\n--- ETUDIANT TROUVE ---\n");
                printf("Nom : %s \nPrenom : %s \nNiveau : %s \n", Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].niveau);

                printf("Que voulez-vous faire ? (2: Modifier, 3: Supprimer) : ");
                scanf("%d", &action);

                if (action == 2) {
                    printf("Nouveau Nom : "); scanf("%s", Etudiant[i].nom);
                    printf("Nouveau Prenom : "); scanf("%s", Etudiant[i].prenom);
                    printf("Nouvelle Date de naissance : "); scanf("%s", Etudiant[i].datedenaissance);
                    printf("Nouvelle Adresse : "); scanf("%s", Etudiant[i].adresse);
                    printf("Nouveau Niveau : "); scanf("%s", Etudiant[i].niveau);
                    changements = 1;
                } else if (action == 3) {
                    int j;
                    for (j = i; j < taille - 1; j++) Etudiant[j] = Etudiant[j + 1];
                    taille--; i--; changements = 1;
                }
            }
        }
        
        // CAS 4 : L'utilisateur a choisi de chercher par ADRESSE
        else if (choix == 4) {
            if (strcmp(Etudiant[i].adresse, mot_cherche) == 0) {
                
                f_recherche = fopen("recherche.txt", "a");
                if (f_recherche != NULL) {
                    fprintf(f_recherche, "Nom : %s \nPrenom : %s \nDate de naissance : %s \nAdresse : %s \nNiveau : %s \n-----------------------\n", 
                            Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].datedenaissance, Etudiant[i].adresse, Etudiant[i].niveau);
                    fclose(f_recherche);
                }

                printf("\n--- ETUDIANT TROUVE ---\n");
                printf("Nom : %s \nPrenom : %s \nNiveau : %s \n", Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].niveau);

                printf("Que voulez-vous faire ? (2: Modifier, 3: Supprimer) : ");
                scanf("%d", &action);

                if (action == 2) {
                    printf("Nouveau Nom : "); scanf("%s", Etudiant[i].nom);
                    printf("Nouveau Prenom : "); scanf("%s", Etudiant[i].prenom);
                    printf("Nouvelle Date de naissance : "); scanf("%s", Etudiant[i].datedenaissance);
                    printf("Nouvelle Adresse : "); scanf("%s", Etudiant[i].adresse);
                    printf("Nouveau Niveau : "); scanf("%s", Etudiant[i].niveau);
                    changements = 1;
                } else if (action == 3) {
                    int j;
                    for (j = i; j < taille - 1; j++) Etudiant[j] = Etudiant[j + 1];
                    taille--; i--; changements = 1;
                }
            }
        }
    }

    // ÉCRITURE DES MODIFICATIONS DANS LES FICHIERS TEXTE
    if (changements == 1) {
        int k, l;
        struct info temp_sort;

        // AJOUT DU TRI : On retrie le tableau par ordre alphabétique avant la sauvegarde
        for(k = 0; k < taille - 1; k++) {
            for(l = k + 1; l < taille; l++) {
                if (strcmp(Etudiant[k].nom, Etudiant[l].nom) > 0) { 
                    temp_sort = Etudiant[k];
                    Etudiant[k] = Etudiant[l];
                    Etudiant[l] = temp_sort;
                }
            }
        }

        FILE *f_RAZ;
        f_RAZ = fopen("L1.txt", "w"); if(f_RAZ) fclose(f_RAZ);
        f_RAZ = fopen("L2.txt", "w"); if(f_RAZ) fclose(f_RAZ);
        f_RAZ = fopen("L3.txt", "w"); if(f_RAZ) fclose(f_RAZ);
        f_RAZ = fopen("M1.txt", "w"); if(f_RAZ) fclose(f_RAZ);
        f_RAZ = fopen("M2.txt", "w"); if(f_RAZ) fclose(f_RAZ);

        FILE *f_sauve = NULL;
        for (i = 0; i < taille; i++) {
            if (strcmp(Etudiant[i].niveau, "L1") == 0) f_sauve = fopen("L1.txt", "a");
            else if (strcmp(Etudiant[i].niveau, "L2") == 0) f_sauve = fopen("L2.txt", "a");
            else if (strcmp(Etudiant[i].niveau, "L3") == 0) f_sauve = fopen("L3.txt", "a");
            else if (strcmp(Etudiant[i].niveau, "M1") == 0) f_sauve = fopen("M1.txt", "a");
            else if (strcmp(Etudiant[i].niveau, "M2") == 0) f_sauve = fopen("M2.txt", "a");

            if (f_sauve != NULL) {
                fprintf(f_sauve, "Nom : %s \nPrenom : %s \nDate de naissance : %s \nAdresse : %s \nNiveau : %s \n-----------------------\n", 
                        Etudiant[i].nom, Etudiant[i].prenom, Etudiant[i].datedenaissance, Etudiant[i].adresse, Etudiant[i].niveau);
                fclose(f_sauve);
            }
        }
        printf("\nChangements tries et enregistres avec succes dans les fichiers.\n");
    }
}

int main() {
    struct info Etudiant[500]; // Notre grand tableau (la table de travail)
    int taille = 0;            // Commençons à 0 étudiant chargé
    int option;
    FILE *fichier = NULL;

    printf("=== GESTION DES ETUDIANTS ===\n");
    printf("1. Ajouter de nouveaux etudiants\n");
    printf("2. Rechercher / Modifier / Supprimer dans les fichiers existants\n");
    printf("Votre choix : ");
    scanf("%d", &option);

    if (option == 1) {
        // --- TU AJOUTES DES ÉTUDIANTS (Ton code actuel) ---
        int nbr;
        printf("Vous etes combien : ");
        scanf("%d", &nbr);
        donnee(Etudiant, nbr);
    } 
    else if (option == 2) {
        // --- LE MOMENT MAGIQUE : LE SCAN DES FICHIERS ---
        // Avant de chercher, le main ouvre les fichiers pour remplir le tableau 'Etudiant'
        char *fichiers[] = {"L1.txt", "L2.txt", "L3.txt", "M1.txt", "M2.txt"};
        int f;
        
        for (f = 0; f < 5; f++) {
            fichier = fopen(fichiers[f], "r");
            if (fichier != NULL) {
                // On scanne ligne par ligne selon ton format exact
                while (fscanf(fichier, "Nom : %s \nPrenom : %s \nDate de naissance : %s \nAdresse : %s \nNiveau : %s \n-----------------------\n", 
                              Etudiant[taille].nom, 
                              Etudiant[taille].prenom, 
                              Etudiant[taille].datedenaissance, 
                              Etudiant[taille].adresse, 
                              Etudiant[taille].niveau) == 5) {
                    taille++; // On a chargé un étudiant en mémoire, on augmente la taille
                }
                fclose(fichier);
            }
        }

        // Si on a trouvé des étudiants dans les fichiers, on peut lancer la recherche !
        if (taille > 0) {
            int critere;
            char recherche[50];

            printf("\n[%d etudiants charges depuis les fichiers .txt]\n", taille);
            printf("Sur quel critere chercher ? (1:Nom, 2:Prenom, 3:Date, 4:Adresse) : ");
            scanf("%d", &critere);
            printf("Entrez le mot a chercher : ");
            scanf("%s", recherche);

            // Appel de ta fonction de recherche !
            rechercherEtudiant(Etudiant, taille, critere, recherche);
        } else {
            printf("Aucun etudiant enregistre dans les fichiers pour le moment.\n");
        }
    }

    return 0;
}