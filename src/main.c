#include <src/listEncCircu/listEncCircu.h>
#include <src/listDupEnc/listDupEnc.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  headListDupEnc = criaListaDupEnc();
  headListDupEnc = addOrdeandoCrescenteDupEnc(headListDupEnc);
  headListDupEnc = addOrdeandoCrescenteDupEnc(headListDupEnc);
  headListDupEnc = removerElementoDupEnc(headListDupEnc);
  headListDupEnc = removerElementoDupEnc(headListDupEnc);

  return 0;
}