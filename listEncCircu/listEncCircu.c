#include "listEncCircu.h"
#include <stdio.h>
#include <stdlib.h>

Elemento *criaLista()
{
  return NULL;
}

Elemento *addInicio(Elemento *l)
{
  Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
  printf("Digite um valor para adicionar no inicio: ");
  scanf("%d", &novo->info);
  if (l == NULL)
  {
    novo->prox = novo;
    l = novo;
  }
  else
  {

    Elemento *aux = l;
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

Elemento *addFinal(Elemento *l)
{
  Elemento *newElemet = (Elemento *)malloc(sizeof(Elemento));
  printf("Digite um valor para adicionar no final: ");
  scanf("%d", &newElemet->info);

  if (!l)
  {
    l = newElemet;
    newElemet->prox = newElemet;
    return newElemet;
  }

  Elemento *aux = l;
  while (aux->prox != l)
    aux = aux->prox;

  aux->prox = newElemet;
  newElemet->prox = l;
  return l;
}

Elemento *addOrdeandoCrescente(Elemento *l)
{
  Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
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
    Elemento *aux = l;
    while (aux->prox != l)
    {
      aux = aux->prox;
    }
    aux->prox = novo;
    novo->prox = l;
  }

  Elemento *aux = l;
  while (aux->prox != l && aux->prox->info < novo->info)
  {
    aux = aux->prox;
  }
  novo->prox = aux->prox;
  aux->prox = novo;
  return l;
}

Elemento *removerElemento(Elemento *l)
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

  Elemento *aux = l;
  while (aux->prox != l && aux->prox->info != info)
    aux = aux->prox;

  if (aux->prox->info == info)
  {
    Elemento *remove = aux->prox;
    aux->prox = aux->prox->prox;
    free(remove);
  }
  return l;
}

int tamanhoDaLista(Elemento *l)
{
  int tam = 0;

  if (!l)
    return tam;

  Elemento *aux = l;
  do
  {
    tam++;
    aux = aux->prox;
  } while (aux != l);

  return tam;
}

void mostrarLista(Elemento *l)
{
  if (l == NULL)
  {
    printf("Lista vazia.\n");
    return;
  }

  Elemento *aux = l;
  do
  {
    printf("%d -> ", aux->info);
    aux = aux->prox;
  } while (aux != l);
  printf("primeiro(%d) -> resto(...)\n", l->info);
}

void exibicaomenu()
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
