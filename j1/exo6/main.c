//Faire un programme qui prend l'input d'un utilisateur et print cet input en retour. Vous avez le droit à scanf et write

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char * argv[] ) 
{
    char *question = "Quel est votre nom? ";
    char *nom;

    write(1,question,strlen(question));
    scanf("%s", nom);

    write(1,nom,strlen(nom));
    return 0;
}
