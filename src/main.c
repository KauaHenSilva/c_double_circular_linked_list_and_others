#include <src/listDupEncCirc/listDupEncCirc.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  headListDupEncCirc = criaListaDupEncCirc();
  headListDupEncCirc = addFinalDupEncCirc(headListDupEncCirc);
  headListDupEncCirc = addFinalDupEncCirc(headListDupEncCirc);
  headListDupEncCirc = addFinalDupEncCirc(headListDupEncCirc);

  return 0;
}