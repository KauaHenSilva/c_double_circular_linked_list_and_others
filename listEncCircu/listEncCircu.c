#include "listEncCircu.h"
#include <stdio.h>

Elemento *addInicio(Elemento *l){
    Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
    scanf("%d", &novo->info);
    novo->prox = l;
    return novo;

}