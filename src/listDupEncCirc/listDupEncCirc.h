#pragma once

typedef struct elementoDupEncCirc
{
  struct elementoDupEncCirc *ant;
  int info;
  struct elementoDupEncCirc *prox;
} ElementoDupEncCirc;

extern int idElementoDupEnc;
extern ElementoDupEncCirc *headListDupEnc;

ElementoDupEncCirc *criaListaDupEnc();                                 // feito
// ElementoDupEncCirc *addInicioDupEnc(ElementoDupEncCirc *l);            // feito
// ElementoDupEncCirc *addFinalDupEnc(ElementoDupEncCirc *l);             // feito;
// ElementoDupEncCirc *addOrdeandoCrescenteDupEnc(ElementoDupEncCirc *l); // feito
// ElementoDupEncCirc *removerElementoDupEncCirc(ElementoDupEncCirc *l);  // feito
void freeListDupEnc(ElementoDupEncCirc *head);
// int tamanhoDaListaDupEnc(ElementoDupEncCirc *l); // feito
// void mostrarListaDupEnc(ElementoDupEncCirc *l);  // feito
// void exibicaomenuDupEnc();             // feito
