#pragma once

typedef struct elemento
{
    int info;
    struct elemento *prox;
} Elemento;

Elemento *criaLista();                       // feito
Elemento *addInicio(Elemento *l);            // feito
Elemento *addFinal(Elemento *l);                  // feito
Elemento *addOrdeandoCrescente(Elemento *l); // feito
Elemento *removerElemento(Elemento *l);      // feito
int tamanhoDaLista(Elemento *l);             // feito
void mostrarLista(Elemento *l);              // feito
void exibicaomenu();                         // feito
