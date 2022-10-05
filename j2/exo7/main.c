// Fonction externes autorisées: write
// Créer un programme qui prend un paramètre du main 'asc' ou 'desc' (sinon affichez un message d’erreur de votre choix) et 
// qui affiche les arguments à la suite de celui-ci (1 par ligne), rangés dans l’ordre demandé (asc -> A à Z, desc -> Z à A).
// Tips: utilisez votre strcmp :)
// Tips2: renseignez vous sur les algorithmes de tri !

int o_strcmp(char *str1, char *str2)
{
    int taille1 = o_strlen(str1);
    int taille2 = o_strlen(str2);

    if(taille1 != taille2)
    {
        if(taille1 < taille2)
        {
            return str1[taille1] - str2[taille1];
        }

        else
        {
            return str1[taille2] - str2[taille2];
        }
        
    }

    for(int i = 0; str1[i] != 0 && str2[i] != 0; i++)
    {
        if(str1[i] - str2[i] < 0)
        {
            return -1;
        }

        if(str1[i] - str2[i] > 0)
        {
            return 1;
        }
    }

    return 0;

}

void o_print_argv_asc_desc(int argc, char * argv[])
{
    if(argv[1] == "asc")
    {
        for(int i = 2; i < argc; i ++)
        {
            o_print_string(argv[i]);
            write(1,"\n",strlen("\n"));
        }
    }
    

}


int main(int argc, char * argv[])
{
    char message = "Erreur, veuillez rentrez asc ou desc"
    if(argv[1] != "asc" || "desc"){
        write(1,message,strlen(message));
    }
    o_print_argv(argc, argv);
    return 0;
}
