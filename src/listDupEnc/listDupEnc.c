#include "listDupEnc.h"
#include <stdio.h>
#include <stdlib.h>

ElementoDupEnc *headListDupEnc = NULL;

ElementoDupEnc *criaListaDupEnc()
{
  return NULL;
}

ElementoDupEnc *addInicioDupEnc(ElementoDupEnc *l)
{
  ElementoDupEnc *newValue = (ElementoDupEnc *)malloc(sizeof(ElementoDupEnc));
  scanf("%d", &newValue->info);
  newValue->ant = NULL;

  if (!l)
  {
    newValue->prox = NULL;
    return newValue;
  }

  newValue->prox = l;
  l->ant = newValue;
  return newValue;
}

ElementoDupEnc *addFinalDupEnc(ElementoDupEnc *l)
{
  ElementoDupEnc *newElement = (ElementoDupEnc *)malloc(sizeof(ElementoDupEnc));
  scanf("%d", &newElement->info);

  if (!l)
  {
    newElement->ant = NULL;
    newElement->prox = NULL;
    return newElement;
  }

  ElementoDupEnc *aux = l;
  while (aux->prox != NULL)
    aux = aux->prox;

  aux->prox = newElement;
  newElement->ant = aux;
  newElement->prox = NULL;
  return l;
}

ElementoDupEnc *addOrdeandoCrescenteDupEnc(ElementoDupEnc *l)
{
  ElementoDupEnc *newValue = (ElementoDupEnc *)malloc(sizeof(ElementoDupEnc));
  scanf("%d", &newValue->info);

  if (!l)
  {
    newValue->prox = NULL;
    newValue->ant = NULL;
    return newValue;
  }

  ElementoDupEnc *aux = l;
  if (newValue->info > aux->info)
  {
    newValue->prox = aux;
    aux->ant = newValue;
    newValue->ant = NULL;
    return newValue;
  }

  while (aux->prox != NULL && aux->prox->info < newValue->info)
    aux = aux->prox;

  if (aux->prox != NULL)
  {
    newValue->prox = aux->prox->prox;
    newValue->ant = aux->prox;
    aux->prox = newValue;
    return l;
  }

  newValue->prox = NULL;
  newValue->ant = aux->prox;
  aux->prox = newValue;
  return l;
}

ElementoDupEnc *removerElementoDupEnc(ElementoDupEnc *l)
{
  if (!l)
    return NULL;

  ElementoDupEnc *excluir = l;
  if (l->prox != NULL)
  {
    l = l->prox;
    l->ant = NULL;
    free(excluir);
    return l;
  }

  free(l);
  return NULL;
}

void freeListDupEnc(ElementoDupEnc *head)
{
  ElementoDupEnc *aux = head;
  ElementoDupEnc *apagar = NULL;
  while (aux != NULL)
  {
    apagar = aux;
    aux = aux->prox;
    free(apagar);
    apagar = NULL;
  }
}