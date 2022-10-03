//int o_charpos(char *str, char c) qui accepte une chaîne de caractères str et un char c, et qui renvoie la position de c dans str si c est inclus dans str, et -1 si c n'est pas dans str
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int o_charpos(char *str, char c){

int res = -1; 
for(int i = 0; i < strlen(str); i++){
	if (str[i] == c){
		res = i;
		return res;
	}
}
return -1;
}
