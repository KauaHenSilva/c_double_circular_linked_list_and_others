#include "listEncCircu.h"
#include <stdio.h>
#include <stdlib.h>

ElementoEncCirc *criaListaEncCir()
{
  return NULL;
}

ElementoEncCirc *addInicioEncCir(ElementoEncCirc *l)
{
  ElementoEncCirc *novo = (ElementoEncCirc *)malloc(sizeof(ElementoEncCirc));
  printf("Digite um valor para adicionar no inicio: ");
  scanf("%d", &novo->info);
  if (l == NULL)
  {
    novo->prox = novo;
    l = novo;
  }
  else
  {

    ElementoEncCirc *aux = l;
    while (aux->prox != l)
    {
      aux = aux->prox;
    }

    novo->prox = l;
    aux->prox = novo;
    l = novo;
  }
  return l;
}

ElementoEncCirc *addFinalEncCir(ElementoEncCirc *l)
{
  ElementoEncCirc *newElemet = (ElementoEncCirc *)malloc(sizeof(ElementoEncCirc));
  printf("Digite um valor para adicionar no final: ");
  scanf("%d", &newElemet->info);

  if (!l)
  {
    l = newElemet;
    newElemet->prox = newElemet;
    return newElemet;
  }

  ElementoEncCirc *aux = l;
  while (aux->prox != l)
    aux = aux->prox;

  aux->prox = newElemet;
  newElemet->prox = l;
  return l;
}

ElementoEncCirc *addOrdeandoCrescenteEncCir(ElementoEncCirc *l)
{
  ElementoEncCirc *novo = (ElementoEncCirc *)malloc(sizeof(ElementoEncCirc));
  printf("Digite um valor para adicionar de forma crescente: ");
  scanf("%d", &novo->info);

  if (l == NULL)
  {
    l = novo;
    novo->prox = novo;
    return novo;
  }

  if (novo->info <= l->info)
  {
    ElementoEncCirc *aux = l;
    while (aux->prox != l)
    {
      aux = aux->prox;
    }
    aux->prox = novo;
    novo->prox = l;
  }

  ElementoEncCirc *aux = l;
  while (aux->prox != l && aux->prox->info < novo->info)
  {
    aux = aux->prox;
  }
  novo->prox = aux->prox;
  aux->prox = novo;
  return l;
}

ElementoEncCirc *removerElementoEncCir(ElementoEncCirc *l)
{
  int info;
  printf("Digite um valor para remover: ");
  scanf("%d", &info);

  if (l == NULL)
  {
    return NULL;
  }

  if (l->prox == l)
  {
    free(l);
    return NULL;
  }

  ElementoEncCirc *aux = l;
  while (aux->prox != l && aux->prox->info != info)
    aux = aux->prox;

  if (aux->prox->info == info)
  {
    ElementoEncCirc *remove = aux->prox;
    aux->prox = aux->prox->prox;
    free(remove);
  }
  return l;
}

int tamanhoDaListaEncCir(ElementoEncCirc *l)
{
  int tam = 0;

  if (!l)
    return tam;

  ElementoEncCirc *aux = l;
  do
  {
    tam++;
    aux = aux->prox;
  } while (aux != l);

  return tam;
}

void mostrarListaEncCir(ElementoEncCirc *head)
{
  if (head == NULL)
  {
    printf("Lista vazia.\n");
    return;
  }

  ElementoEncCirc *aux = head;
  do
  {
    printf("%d -> ", aux->info);
    aux = aux->prox;
  } while (aux != head);
  printf("primeiro(%d) -> resto(...)\n", head->info);
}

void freeListEncCir(ElementoEncCirc *head)
{
  ElementoEncCirc *eliminar;
  ElementoEncCirc *aux = head;
  do
  {
    eliminar = aux;
    aux = aux->prox;
    free(eliminar);
  } while (aux != head);
}

void exibicaomenuEncCir()
{
  printf("\n\nLISTA CIRCULAR\n\n");
  printf("\n*******MENU*******\n");
  printf("1. Adicionar Elemento no Inicio da Lista\n");
  printf("2. Adicionar Elemento no Final da Lista\n");
  printf("3. Ordenar a Lista de Forma Crescente\n");
  printf("4. Remover Algum Elemento da Lista\n");
  printf("5. Mostrar Tamanho da Lista\n");
  printf("6. Exibicao da Lista\n");
  printf("0. Sair do Programa\n");
  printf("Selecione uma opcao:");
}
