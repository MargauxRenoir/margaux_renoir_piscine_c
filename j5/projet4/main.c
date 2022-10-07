// Choix IV: Créer un parseur de fichier de texte de taille raisonnable, qui permet d'accéder à chaque ligne du document par la suite.
// On entrera le path du fichier en paramètre, puis il nous sera proposé d'afficher la ligne du texte que nous souhaitons voir (vous devez montrer l'intervalle de choix possibles)

//#include <cstdio>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 1000

int main(int argc, char * argv[])
{
    if(argc != 2)
    {
        printf("Veuillez rentrer le path du fichier en argument svp");
    }

    char * nom_fichier = argv[1];
    FILE *fichier;

    //Ouverture en lecture
    fichier = fopen(nom_fichier,"r");

    //Var pour stocker une ligne
    char chaine[TAILLE_MAX] = "";

    //Compteur du nbr de lignes
    int cpt = 0;

    if (fichier != NULL)
    {
        printf("_______________________________________________________________________________________________________________________________________\n");
        printf("|                                                                                                                                      |\n");
        printf("| Bonjour et bienvenue sur notre service de lecture de fichier, ce service vous propose de lire n'importe quel ligne de votre fichier. |\n");
        printf("|______________________________________________________________________________________________________________________________________|\n");
        
        while(fgets(chaine, TAILLE_MAX, fichier) != NULL)
        {
            cpt++;
        }        

        //Tableau qui va contenir toutes les lignes du fichier
        char ** lignes = malloc(cpt * sizeof(char *));

        //On retourne au debut du fichier
        rewind(fichier);

        //Boucle pour compter le nombre de ligne
        for(int i = 0; i < cpt; i++)
        {
            fgets(chaine, TAILLE_MAX, fichier);
            lignes[i] = strdup(chaine);
        }

        //Choix de l'utilisateur
        int choix;

        //Test pour l'orthographe de ligne(s)
        if(cpt == 1)
        {
            printf("Votre fichier contient %d ligne \n",cpt);
        }

        else
        {
            printf("Votre fichier contient %d lignes \n",cpt);
        }
        

        int sortie = 1;

        //Boucle d'affichage
        while(sortie)
        {
            printf("Quelle ligne voulez vous afficher ? \n");
            scanf("%d",&choix);

            if(choix > cpt )
            {
                printf("Cette ligne n'existe pas.\n");
                printf("Veuillez resaisir une ligne svp. \n");
                scanf("%d",&choix);
            }

            printf("La ligne %i est : %s \n",choix,lignes[choix-1]);

            printf("Voulez vous voir une autre ligne ? Oui : 1 Non : 0 \n");
            scanf("%d",&sortie);
        }

        printf("_______________________________________________________________________________________________________________________________________\n");
        printf("|                                                                                                                                      |\n");
        printf("|                       Merci de nous avoir utilisé, j'espere que notre service vous aura satisfait :) !                               |\n");
        printf("|______________________________________________________________________________________________________________________________________|\n");
        
    }
    else
    {
        printf("Impossible d'ouvrir le fichier %s",nom_fichier);
    }

    fclose(fichier);

    return 0;
}