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
  ElementoDupEncCirc *newValue = (ElementoDupEncCirc *)malloc(sizeof(ElementoDupEncCirc));
  scanf("%d", &newValue->info);

  if (!l)
  {
    newValue->ant = newValue;
    newValue->prox = newValue;
    return newValue;
  }

  ElementoDupEncCirc *aux = l;
  while (aux->prox != l)
    aux = aux->prox;

  newValue->prox = aux;
  newValue->ant = aux;
  aux->prox = newValue;
  aux->ant = newValue;
  return newValue;
}

ElementoDupEncCirc *addFinalDupEncCirc(ElementoDupEncCirc *l)
{
  ElementoDupEncCirc *newValue = (ElementoDupEncCirc *)malloc(sizeof(ElementoDupEncCirc));
  scanf("%d", &newValue->info);

  if (!l)
  {
    newValue->ant = newValue;
    newValue->prox = newValue;
    return newValue;
  }

  ElementoDupEncCirc *aux = l;
  while (aux->prox != l)
    aux = aux->prox;

  newValue->prox = l;
  newValue->ant = aux;
  aux->prox = newValue;
  l->ant = newValue;
  return l;
}

ElementoDupEncCirc *addOrdeandoCrescenteDupEncCirc(ElementoDupEncCirc *l)
{
  ElementoDupEncCirc *novo = (ElementoDupEncCirc *)malloc(sizeof(ElementoDupEncCirc));
  scanf("%d", &novo->info);

  if (!l)
  {
    novo->prox = novo;
    novo->ant = novo;
    return novo;
  }

  ElementoDupEncCirc *aux = l;
    while (aux->prox != l && aux->prox->info < novo->info)
      aux = aux->prox;

  if (novo->info < l->info)
  {
    novo->prox = l;
    novo->ant = l->ant;
    l->ant->prox = novo;
    l->ant = novo;
    return novo;
  }

  novo->prox = aux->prox;
  novo->ant = aux;
  aux->prox->ant = novo;
  aux->prox = novo;
  return l;
}
