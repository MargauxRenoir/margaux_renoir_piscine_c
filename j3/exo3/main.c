// Fonction externes autorisées: malloc
// Créer une fonction "string o_strjoin(int size, char **arr, char *sep)"
// Elle crée une chaîne composée de la concaténation de chaque chaîne de caractères du tableau de char* arr, 
// séparés par le une string séparatrice "sep". La chaîne renvoyée devra pouvoir être free.
// Size représente la taille de arr. Si size vaut 0, retournez une chaîne de caractères nulle (heap).

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int o_strlen(char *str)
{
    int cpt = 0;
    while(str[cpt] != '\0')
    {
        cpt++;
    }
    return cpt;

}

char * o_strcat(char *str1, char *str2)
{
    int taille1 = o_strlen(str1);
    printf("La taille de taille1 est : %d \n",taille1);
    int i;
    for(i = 0; str1[i] != 0 ; i++)
    {
        printf("str1[i] = %s \n",str1[i]);
        str1[taille1 + i] = str2[i];
    }  

    str1[i] = '\0';

    return str1;
}

char * o_strjoin(int size, char **arr, char *sep)
{
    int nombre = 0;
    for(int i = 0; i < size; i++)
    {
        nombre = nombre + o_strlen(arr[i]);
    }
    nombre = nombre + (o_strlen(sep) * size);

    char * tab = malloc( (nombre + 1 ) * sizeof(char));
    strcpy(tab, "");

    if(size == 0)
    {
        return NULL;
    }

    for(int i = 0; i < size; i++)
    {
        printf("arr = [%s]\n", arr[i]);
        o_strcat(tab,arr[i]);
        o_strcat(tab,sep);
    }

    return tab;
}

int main()
{
    char *arr[]= {"un","deux","trois"};
    char * sep = "SEP";
    printf("[%s]",o_strjoin(3,arr,sep));
}