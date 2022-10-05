// Fonction externes autorisées: malloc
// Faire une fonction qui prend deux int donnés en paramètre, 
// et return un array d'int comprenant les nombres compris entre les deux paramètres (dans l'ordre croissant). Cet array devra pouvoir être free

//#include <unistd.h>
//#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int * o_tab_nb_int(int a, int b)
{
    if(a > b)
    {
        int inter = a;
        a = b;
        b = inter;
    }

    int nb = b - a;
    int * tab = malloc( (nb +1 ) * sizeof(int) );
    for(int i = 0; a <= b; i++)
    {
        tab[i]=a;
        a++;
    }
    return tab;
}


int main()
{
    int * tab = o_tab_nb_int(2,20);
    printf("%s","[");
    for(int i = 0; i<18; i++)
    {
        printf("%d",tab[i]);
        printf("%s",",");
    }
    printf("%d",tab[19]);
    printf("%s","]");

    free(tab);
    return 0;
}