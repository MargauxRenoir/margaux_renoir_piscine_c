//Créez une fonction "bool o_pow3(int n)", qui étant donné un entier positif, indique si c'est une puissance de 3. Vous devez utiliser la récursion.

#include <stdbool.h> 

bool o_pow3(int n)
{
    if(n == 1)
    {
        return true;
    }

    if(n%3 == 0)
    {
        return o_pow3(n/3);
    }

    return false;
}

