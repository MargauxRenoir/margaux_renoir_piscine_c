// Reproduire les fonctions de la librairie standard C suivantes:
// strlen, (vous l'appellerez o_strlen)
// strcmp (vous l'appellerez o_strcmp) 
// strcat (vous l'appellerez o_strcat)
// Le comportement de chacune des fonctions doit être IDENTIQUE à la fonction modèle (man strcmp / man strlen / man strcat)
// Vous devez fournir une fonction main, avec des tests que vous devrez créer, il faudra que ces tests couvrent les edge cases (string nulle? pointeur vide? etc). Bien sûr, il est interdit de copier le code source de la librairie C :).

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int o_strlen(char *str)
{
    int cpt = 0;
    while(str[cpt] != '\0')
    {
        cpt++;
    }
    return cpt;

}

int o_strcmp(char *str1, char *str2)
{
    // int taille1 = o_strlen(str1);
    // int taille2 = o_strlen(str2);

    // if(taille1 != taille2)
    // {
    //     if(taille1 < taille2)
    //     {
    //         return str1[taille1] - str2[taille1];
    //     }

    //     else
    //     {
    //         return str1[taille2] - str2[taille2];
    //     }
        
    // }

    // for(int i = 0; str1[i] != 0 && str2[i] != 0; i++)
    // {
    //     printf("%s \n",str1[i] - str2[i]);
    //     if(str1[i] - str2[i] < 0)
    //     {
    //         printf("Je suis la \n");
    //         return -1;
    //     }

    //     if(str1[i] - str2[i] > 0)
    //     {
    //         printf("Je suis la 2\n");
    //         return 1;
    //     }


    int i;
    for (i = 0; str1[i] && str2[i]; i++) 
    {
        if (str1[i] - str2[i] != 0) 
        {
            return (str1[i] - str2[i]);
        }
    }
    if (!str1[i] && str2[i])
    {
        return -str2[i];
    }

    if (!str2[i] && str1[i])
    {
        return str1[i];
    }

    return 0;

}

char * o_strcat(char *str1, char *str2)
{
    int taille1 = o_strlen(str1);
    int i;
    for(i = 0; str1[i] != 0 ; i++)
    {
        str1[taille1 + i] = str2[i];
    }  

    str1[i] = '\0';

    return str1;
}

int main()
{
    // Test fonction o_strlen
    int taille = o_strlen("Hello");
    printf("taille = %hd\n",taille);

    // Test fonction o_strcmp
    printf("comp : %hd et %hd \n",o_strcmp("totoooo","toto"),strcmp("totoooo","toto"));
    printf("comp : %hd et %hd \n",o_strcmp("toto","totooooo"),strcmp("toto","totooooo"));
    printf("comp : %hd et %hd \n",o_strcmp("toto","toto"),strcmp("toto","toto"));

    // Test fonction o_strcat
    char tab1[100] = "debut";
    char tab2[100] = "fin";
    printf("cat : %s", o_strcat(tab1,tab2));
}
