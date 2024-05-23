#pragma once

typedef struct elementoEncCirc
{
    int info;
    struct elementoEncCirc *prox;
} ElementoEncCirc;

ElementoEncCirc *criaListaEncCir();                              // feito
ElementoEncCirc *addInicioEncCir(ElementoEncCirc *l);            // feito
ElementoEncCirc *addFinalEncCir(ElementoEncCirc *l);             // feito
ElementoEncCirc *addOrdeandoCrescenteEncCir(ElementoEncCirc *l); // feito
ElementoEncCirc *removerElementoEncCir(ElementoEncCirc *l);      // feito
void freeListEncCir(ElementoEncCirc *head);
int tamanhoDaListaEncCir(ElementoEncCirc *l); // feito
void mostrarListaEncCir(ElementoEncCirc *l);  // feito
void exibicaomenuEncCir();                    // feito
