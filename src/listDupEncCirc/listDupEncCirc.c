#include "listDupEncCirc.h"
#include <stdio.h>
#include <stdlib.h>

ElementoDupEncCirc *headListDupEncCirc = NULL;

ElementoDupEncCirc *criaListaDupEncCirc()
{
  return NULL;
}

ElementoDupEncCirc *addInicioDupEncCirc(ElementoDupEncCirc *l)
{
  ElementoDupEncCirc *newValue = (ElementoDupEncCirc*) malloc(sizeof(ElementoDupEncCirc));
  scanf("%d", &newValue->info);

  if(!l)
  {
    newValue->ant = newValue;
    newValue->prox = newValue;
    return newValue;
  }

  ElementoDupEncCirc *aux = l;
  while(aux->prox != l)
    aux = aux->prox;

  newValue->prox = aux;
  newValue->ant = aux;
  aux->prox = newValue;
  aux->ant = newValue;
  return newValue;
}

ElementoDupEncCirc *addFinalDupEncCirc(ElementoDupEncCirc *l)
{
  ElementoDupEncCirc *newValue = (ElementoDupEncCirc*) malloc(sizeof(ElementoDupEncCirc));
  scanf("%d", &newValue->info);

  if(!l)
  {
    newValue->ant = newValue;
    newValue->prox = newValue;
    return newValue;
  }

  ElementoDupEncCirc *aux = l;
  while(aux->prox != l)
    aux = aux->prox;

  newValue->prox = l; 
  newValue->ant = aux; 
  aux->prox = newValue;
  l->ant = newValue;
  return l;
}
