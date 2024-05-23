#pragma once

typedef struct elementoDupEnc
{
  struct elementoDupEnc *ant;
  int info;
  struct elementoDupEnc *prox;
} ElementoDupEnc;

extern int idElementoDupEnc;
extern ElementoDupEnc *headListDupEnc;

ElementoDupEnc *criaListaDupEnc();                             // feito
ElementoDupEnc *addInicioDupEnc(ElementoDupEnc *l);            // feito
ElementoDupEnc *addFinalDupEnc(ElementoDupEnc *l);             // feito;
ElementoDupEnc *addOrdeandoCrescenteDupEnc(ElementoDupEnc *l); // feito
ElementoDupEnc *removerElementoDupEnc(ElementoDupEnc *l);      // feito
void freeListDupEnc(ElementoDupEnc *head);
// int tamanhoDaListaDupEnc(ElementoDupEnc *l); // feito
// void mostrarListaDupEnc(ElementoDupEnc *l);  // feito
// void exibicaomenuDupEnc();             // feito
