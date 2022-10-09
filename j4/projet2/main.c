#include "main.h" 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char **nb_joueur(int nb)
{
    char **nom = malloc(nb * sizeof(char *));
    for(int i = 0; i < nb; i++)
    {
        char pseudo[21];
        printf("Quel est votre nom Joueur%d? (mettre en pseudo entre 1 et 20 charactères) \n",i+1);
        scanf("%s",pseudo);
        nom[i] = strdup(pseudo);
        while(strlen(nom[i]) > 20)
        {
            printf("nom trop long");
            scanf("%s",pseudo);
            nom[i] = strdup(pseudo);
        }
    }
    return (nom);
}


int main(int argc, char *argv[])
{
    char nom1[20];
    char nom2[20];
    int nb_quest = 0;
    int num_quest = 0;
    int nbJ = 0;

    // Creation tab de reponses
    int *reps = malloc(nbJ * sizeof(char *));
    int rep;

    // Creation tab de scores
    int *scores = malloc(nbJ * sizeof(char *));
    int score = 0;

    printf("_______________________________________________________________________________________________________________________________________\n");
    printf("|                                                                                                                                      |\n");
    printf("|                                                BIENVENUE AU SUPERQUIZZ !                                                             |\n");
    printf("|______________________________________________________________________________________________________________________________________|\n");

    printf("Quel est le nombre de joueurs ? \n");
    scanf("%d",&nbJ);
    //Creation tab de pseudo
    char **pseudos = nb_joueur(nbJ);

    int continuer = 1;

        for(int i = 0; i < nbJ; i++)
        {
            scores[i] = 0;
        }

    while(continuer)
    {
        // On réinialise 
        for(int i = 0; i < nbJ; i++)
        {
            scores[i] = 0;
        }
        int score = 0;

        printf("Ok ! Combien voulez vous de questions ? \n");
        scanf("%d",&nb_quest);
        if (!nb_joueur || !nb_quest) {
            printf("Erreur dans le nombre de joueur ou de question\n");
            exit(0);
        }
        
        srand (time (NULL));
        num_quest =rand()%28;

        printf("Ok ! Le jeu commence !\n");

        for(int i = 0; i < nb_quest; i++)
        {
            printf("_______________________________________________________________________________________________________________________________________\n");
            printf("|                                                                                                                                      |\n");
            printf("|                                                      MANCHE %d                                                                        |\n",i+1);
            printf("|______________________________________________________________________________________________________________________________________|\n");

            printf("La question %i est : %s \n",i+1,tab_questions[num_quest].lib);

            printf("Vous avez le choix entre ces reponses : \n");
            for(int i = 0; i < 3; i++)
            {
                printf("%d. %s \n",i+1,tab_questions[num_quest].choix[i]);
            }

            for(int i = 0; i < nbJ; i++)
            {
                printf("Votre réponse %s ?\n",pseudos[i]);
                scanf("%d",&rep);
                reps[i] = rep;
            }

            for(int i = 0; i < nbJ; i++)
            {
                if(reps[i] == tab_questions[num_quest].rep)
                {
                    scores[i]++;
                    printf("Bravo %s ! Votre score est maintenant de : %d \n",pseudos[i],scores[i]);
                }

                if(reps[i] != tab_questions[num_quest].rep)
                {
                    printf("Désolée %s.. Votre score reste à : %d \n",pseudos[i],scores[i]);
                }
            }
        
            num_quest =rand()%20;
        }

        //On trouve le ou les gagnants
        int nb_gagnant = 0;
        int * gagnant = malloc(nbJ * sizeof(char *));
        for(int i = 0; i < nbJ; i++)
        {
            if(scores[i] > score)
            {
                score = scores[i];
            }    
            gagnant[i] = i;
        }

        for(int i = 0; i < nbJ; i++)
        {
            if(score == scores[i])
            {
                score = scores[i];
                nb_gagnant = nb_gagnant +1;
            }    
        }
        
        if(score == 0)
        {
            printf("_______________________________________________________________________________________________________________________________________\n");
            printf("|                                                                                                                                      |\n");
            printf("|                                            Zut.. Personne n'a gagné cette partie...                                                   |\n");
            printf("|______________________________________________________________________________________________________________________________________|\n");

            printf("Voulez-vous une belle ? Oui : 1 Non : 0 \n");
            scanf("%d",&continuer);
        }

        else
        {
            if(nb_gagnant == 1)
            {
                printf("_______________________________________________________________________________________________________________________________________\n");
                printf("|                                                                                                                                      |\n");
                printf("|                                            BRAVO %s, vous avez gagné cette partie !                                                   |\n",pseudos[gagnant[1]]);
                printf("|______________________________________________________________________________________________________________________________________|\n");
                printf("Voulez-vous une revanche ? Oui : 1 Non : 0 \n");
                scanf("%d",&continuer);
            }
            else
            {
                printf("_______________________________________________________________________________________________________________________________________\n");
                printf("|                                                                                                                                      |\n");
                printf("|                                            Bravo ");
                int i;
                for(i = 0; i < nb_gagnant - 1; i++)
                {
                    if(scores[i] == score)
                    {
                        gagnant[i] = i;
                    }
                    printf("%s,",pseudos[gagnant[i]]);
                }
                printf("%s, vous avez gagné !                                                              |\n",pseudos[gagnant[i]]);
                printf("|______________________________________________________________________________________________________________________________________|\n");
                printf("Voulez-vous une revanche ? Oui : 1 Non : 0 \n");
                scanf("%d",&continuer);
            }
        }

    }

    printf("Merci d'avoir joué avec SUPERQUIZZ, on espère que ce jeu vous aura plus ! :) \n");

    for (int i = 0; i < nbJ; i++)
        free(pseudos[i]);
    free(pseudos);
    free(scores);
    return 0;
}
