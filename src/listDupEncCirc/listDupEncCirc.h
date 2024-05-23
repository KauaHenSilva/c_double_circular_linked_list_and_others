#pragma once

typedef struct elementoDupEncCirc
{
  struct elementoDupEncCirc *ant;
  int info;
  struct elementoDupEncCirc *prox;
} ElementoDupEncCirc;

extern int idElementoDupEnc;
extern ElementoDupEncCirc *headListDupEncCirc;

ElementoDupEncCirc *criaListaDupEncCirc();                                 // feito
ElementoDupEncCirc *addInicioDupEncCirc(ElementoDupEncCirc *l);            // feito
// ElementoDupEncCirc *addFinalDupEncCirc(ElementoDupEncCirc *l);             // feito;
// ElementoDupEncCirc *addOrdeandoCrescenteDupEncCirc(ElementoDupEncCirc *l); // feito
// ElementoDupEncCirc *removerElementoDupEncCirc(ElementoDupEncCirc *l);  // feito
void freeListDupEnc(ElementoDupEncCirc *head);
// int tamanhoDaListaDupEncCirc(ElementoDupEncCirc *l); // feito
// void mostrarListaDupEncCirc(ElementoDupEncCirc *l);  // feito
// void exibicaomenuDupEncCirc();             // feito
