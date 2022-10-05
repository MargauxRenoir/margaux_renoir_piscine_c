// Fonction externes autorisées: write
// Créer une fonction qui affiche un int passé en paramètre
// Prototype: void o_print_number(int nb)

#include <unistd.h>
#include <string.h>

void o_print_number(int nb)
{
    if(nb < 0)
    {
        write(1,"-",1);
        nb = -nb;
    }

    if(nb <= 9)
    {   nb = nb + 48;
        write(1,&nb,1);
    }

    else
    {
        o_print_number(nb / 10);
		o_print_number(nb % 10);
    }
    
}

int main()
{
    write(1,"On veut ecrire -1 : ",strlen("On veut ecrire -1 \n"));
    o_print_number(-1);
    write(1,"\n",strlen("\n"));

    write(1,"On veut ecrire -10 : ",strlen("On veut ecrire -10 \n"));
    o_print_number(-10);
    write(1,"\n",strlen("\n"));

    write(1,"On veut ecrire 10 : ",strlen("On veut ecrire 10 \n"));
    o_print_number(10);
    write(1,"\n",strlen("\n"));

    write(1,"On veut ecrire 333 : ",strlen("On veut ecrire 333 \n"));
    o_print_number(333);
    write(1,"\n",strlen("\n"));

    write(1,"On veut ecrire 152718 : ",strlen("On veut ecrire 152718 \n"));
    o_print_number(152718);
}
