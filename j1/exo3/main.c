#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int i = 57;
    int cpt = 9;

    write(1,"10\n",3);

    while (cpt != 0)
    {
        write(1,&i,1);
        write(1,"\n",1);
        i--;
        cpt--;
    }

    return 0;
}