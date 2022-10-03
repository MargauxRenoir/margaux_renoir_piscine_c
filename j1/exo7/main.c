//Créez une fonction "long o_arrsum(int *arr)" qui étant donné un array d'int, renvoie la somme de ces int
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long o_arrsum(int *arr, int taille){

int som = 0;

for(int i =0; i < taille; i++){
       som = som + arr[i];
}       

return som;

}

