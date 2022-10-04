//Fonction externes autorisées: aucune
//Reproduire les fonctions de la librairie standard C suivantes (vous appellerez les vôtres o_lenomdelafonctionàreproduire):
//strcpy
//strncpy

// char * strncpy(char *dest, const char *src, size_t n)
// {
//     size_t i;

//     for (i = 0; i < n && src[i] != '\0'; i++)
//         dest[i] = src[i];
//     for ( ; i < n; i++)
//         dest[i] = '\0';

//     return dest;
// }

#include <unistd.h>
#include <stdlib.h>

char * o_strcpy(char *dest, const char *src)
{   
    int i;
    for(i = 0; src[i] != 0; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    return dest;
}

char * o_strncpy(char *dest2, const char *src, int n)
{   
    int i;
    for(i = 0; i != n-1; i++)
    {
        dest2[i] = src[i];
    }
    dest2[i] = '\0';

    return dest2;
}

int main()
{
    char * dest = malloc(strlen("Aurevoir"));
    o_strcpy(dest,"Aurevoir");
    printf("dest : %s \n", dest);

    int n = 10;
    char * dest2 = malloc(n);
    o_strncpy(dest2,"Aurevoir \n",n);
    printf("dest2 : %s", dest2);
    
}