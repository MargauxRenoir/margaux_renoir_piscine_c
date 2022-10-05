// Fonction externes autorisées: write, malloc
// Faire une fonction qui prend 2 int n et m en argument et qui affiche et retourne une matrice N*M avec, avec un effet dégradé de en haut à gauche vers en bas à droite.
// Votre programme doit aussi return un pointeur vers l’élément [0][0] de votre matrice. Celui-ci devra pouvoir être free par la suite.

#include <stdlib.h>
#include <stdio.h>
 
int ** matrice_deg(int N ,int M )
{
    int ** tab = (int**) malloc(sizeof(int*)*N);
    for(int i=0; i<N; i++)
    {
        tab[i] = (int*) malloc(sizeof(int)*M);
    }
     
    int indice = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<i; j++)
        {
            tab[i][j] = i;
        }

        for(int j=i; j<M; j++)
        {
            tab[i][j] = j;
        }
    }
    return tab;
}
int main(){
    int** tab;
    const int N = 3;
    const int M = 4;

    tab = matrice_deg(N,M);

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <M; j++)
        {
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }
    
     
    return 0;
}