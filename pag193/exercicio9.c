//Ex. 9 – Fila circular

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100

typedef struct {

    int dados[TAM_MAX];

    int frente, tras, quantidade;

} FilaCircular;



void inicializarFilaCircular(FilaCircular *fc) {

    fc->frente = 0;

    fc->tras = -1;

    fc->quantidade = 0;

}



int filaCircularVazia(FilaCircular *fc) { return fc->quantidade == 0; }

int filaCircularCheia(FilaCircular *fc) { return fc->quantidade == TAM_MAX; }



void enfileirarCircular(FilaCircular *fc, int valor) {

    if (filaCircularCheia(fc)) {

        printf("Overflow!\n");

        return;

    }

    fc->tras = (fc->tras + 1) % TAM_MAX;

    fc->dados[fc->tras] = valor;

    fc->quantidade++;

}



int desenfileirarCircular(FilaCircular *fc) {

    if (filaCircularVazia(fc)) {

        printf("Underflow!\n");

        return -1;

    }

    int valorRemovido = fc->dados[fc->frente];

    fc->frente = (fc->frente + 1) % TAM_MAX;

    fc->quantidade--;

    return valorRemovido;

}


