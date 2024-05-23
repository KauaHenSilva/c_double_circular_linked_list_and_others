#include "listEncCircu.h"
#include <stdio.h>

Elemento *addOrdeandoCrescente(Elemento *l){
    Elemento *novo=(Elemento*)malloc(sizeof(Elemento));
    scanf("%d", &novo->info);
    novo->prox=NULL;

   if(l == NULL){
    l = novo;
    novo->prox = novo;
   }
   Elemento *aux = l;
   if (novo->info <= l->info)
   {
    while (aux->prox != l )
    {
      aux= aux->prox;
    }
    aux->prox = novo;
    novo->prox = l;
    
   }
   
   while(aux->prox != l && aux->prox->info < novo->info)
   {
      aux= aux->prox;
   }
    novo->prox = aux->prox;
    aux->prox = novo;
    return l;
}
void addFinal(Elemento *l){


}