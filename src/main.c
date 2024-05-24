#include <src/listDupEncCirc/listDupEncCirc.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  headListDupEncCirc = criaListaDupEncCirc();
  headListDupEncCirc = addOrdeandoCrescenteDupEncCirc(headListDupEncCirc);
  headListDupEncCirc = addOrdeandoCrescenteDupEncCirc(headListDupEncCirc);
  headListDupEncCirc = addOrdeandoCrescenteDupEncCirc(headListDupEncCirc);

  return 0;
}