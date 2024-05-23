#include <src/listEncCircu/listEncCircu.h>
#include <src/listDupEncCirc/listDupEncCirc.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  headListDupEncCirc = criaListaDupEncCirc();
  headListDupEncCirc = addInicioDupEncCirc(headListDupEncCirc);
  headListDupEncCirc = addInicioDupEncCirc(headListDupEncCirc);
  headListDupEncCirc = addInicioDupEncCirc(headListDupEncCirc);

  return 0;
}