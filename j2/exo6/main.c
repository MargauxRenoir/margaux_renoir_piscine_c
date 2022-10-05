// Fonction externes autorisées: write
// Créer un programme, qui affiche tous ses arguments/paramètres du main, les un à la ligne (oui, on affiche également argv[0] :) )
// Vous avez uniquement le droit à votre fonction o_print_string de l’exercice IV pour afficher vos arguments du main :)

#include <unistd.h>
#include <string.h>

void o_print_string(char *str)
{
    int i = 0;
    while(str[i] != 0)
    {
        write(1,&(str[i]),1);
        i++;
    }

}

void o_print_argv(int argc, char * argv[])
{
    for(int i = 0; i < argc; i ++)
    {
        o_print_string(argv[i]);
        write(1,"\n",strlen("\n"));
    }

}


int main(int argc, char * argv[])
{
    o_print_argv(argc, argv);
    return 0;
}