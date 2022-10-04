// Fonction externes autorisées: write
// Créer une fonction qui affiche un int passé en paramètre
// Prototype: void o_print_number(int nb)

#include <unistd.h>

void o_print_number(int nb)
{
    if(nb < 0)
    {
        write(1,'-',1);
        nb = -nb;
    }
    // if(nb <= 9)
    // {
    //     write(1,&(nb)+48,1);
    // }

    if(nb < 9)
    {
        o_print_number(nb / 10);
		o_print_number(nb % 10);
    }

    else
    {
        write(1,&(nb)+48,1);
    }
    
}

int main()
{
    o_print_number(331);
}
