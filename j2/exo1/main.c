//Créer une fonction, qui vous permettent d’afficher un char * sans utiliser printf.
//Vous fournirez un main avec des tests.
//Prototype: void o_print_string(char *str);
//Vous avec uniquement le droit à write() en fonction (printf est bien sûr interdit)
//Vous pouvez bien sûr utiliser vos fonctions codées dans les exercices I et II
//Tips: il peut être utile de faire une fonction en plus qui permette d’afficher un char à la fois

#include <unistd.h>

void o_print_string(char *str)
{
    int i = 0;
    while(str[i] != 0)
    {
        write(1,&(str[i]),1);
        i++;
    }

}

int main()
{
    o_print_string("Bonjour");

    return 0;
}

