#include "listEncCircu/listEncCircu.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
  Elemento *lista = criaLista();

  int opcao;
  do
  {
    exibicaomenu();
    scanf("%d", &opcao);

    switch (opcao)
    {
      case 1:
        lista = addInicio(lista);
        break;
      case 2:
        addFinal(lista);
        break;
      case 3:
        lista = addOrdeandoCrescente(lista);
        break;
      case 4:
        removerElemento(lista);
        break;
      case 5:
        printf("A lista apresenta um tamanho de %d.\n", tamanhoDaLista(lista));
        break;
      case 6:
        mostrarLista(lista);
        break;
      case 0:
        printf("Programa Encerrado.\n");
        break;
      default:
        printf("OPCAO INVALIDA. Selecione uma opcao valida.\n");
        break;
    }

  } while (opcao != 0);

  while (lista != NULL)
  {
    Elemento *temp = lista;
    lista = lista->prox;
    free(temp);
  }

  return 0;
}