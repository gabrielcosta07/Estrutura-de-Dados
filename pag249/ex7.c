//Ex. 7 – Pilha e fila com nó de cabeçalho

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* proximo;
} No;

typedef struct NoCabecalho {

    int dadoFalso; // Não utilizado

    No* primeiroNo;

} NoCabecalho;


void empilharComCabecalho(NoCabecalho* cabecalho, int valor) {

    No* novoNo = (No*) malloc(sizeof(No));

    novoNo->dado = valor;

    novoNo->proximo = cabecalho->primeiroNo;

    cabecalho->primeiroNo = novoNo;

}

int desempilharComCabecalho(NoCabecalho* cabecalho) {

    if (cabecalho->primeiroNo == NULL) return -1;

    No* noParaRemover = cabecalho->primeiroNo;

    int valor = noParaRemover->dado;

    cabecalho->primeiroNo = noParaRemover->proximo;

    free(noParaRemover);

    return valor;

}

