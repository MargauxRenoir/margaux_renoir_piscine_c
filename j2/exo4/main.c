// Fonction externes autorisées: aucune
// Créez une fonction qui inverse l’ordre des élements d’un tableau d’int.
// Les paramètres sont un pointeur sur int et la taille du tableau
// Votre fonction aura pour prototype: void o_reverse_int_table(int *arr, int size);
// Vous devez utiliser un pointeur bien entendu

void o_reverse_int_table(int *arr, int size)
{
    int *arr_s = arr;
    int *arr_e = arr + size - 1;
    int inter = 0;

    for(int i=0; arr_s < arr_e; i++)
    {
        inter = *arr_s ;
        *arr_s = *arr_e;
        *arr_e = inter;

        arr_s++;
        arr_e--;
    }
}

int main()
{
    int tab1[] = {1,2,3,4};
    o_reverse_int_table(tab1,4);

    // Affichage
    int i;
    printf("%s","[");
    for(i=0; i < 3; i++)
    {
        printf("%d,",tab1[i]);
    }
    printf("%d",tab1[i]);
    printf("%s ","]");
    return 0;
}