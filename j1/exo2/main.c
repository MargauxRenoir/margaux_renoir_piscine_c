#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int i = 49;
    int cpt = 0;

    while (cpt < 9)
    {
        write(1,&i,1);
        write(1,"\n",1);
        i++;
        cpt++;
    }

    write(1,"10\n",2);
    return 0;
}

