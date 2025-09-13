//Ex. 3 – Operações com listas ligadas

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int dado;

    struct No *proximo;

} No;

No* inserirNoFim(No* cabecaLista, int valor) {

    No* novoNo = (No*) malloc(sizeof(No));

    novoNo->dado = valor;

    novoNo->proximo = NULL;

    if (cabecaLista == NULL) return novoNo;

    No* noAtual = cabecaLista;

    while (noAtual->proximo) noAtual = noAtual->proximo;

    noAtual->proximo = novoNo;

    return cabecaLista;

}

No* concatenarListas(No* lista1, No* lista2) {

    if (lista1 == NULL) return lista2;

    No* noAtual = lista1;

    while (noAtual->proximo) noAtual = noAtual->proximo;

    noAtual->proximo = lista2;

    return lista1;

}

void liberarLista(No* cabecaLista) {

    No* noTemporario;

    while (cabecaLista) {

        noTemporario = cabecaLista;

        cabecaLista = cabecaLista->proximo;

        free(noTemporario);

    }

}

No* inverterLista(No* cabecaLista) {

    No* noAnterior = NULL;

    No* noAtual = cabecaLista;

    No* proximoNo;

    while (noAtual) {

        proximoNo = noAtual->proximo;

        noAtual->proximo = noAnterior;

        noAnterior = noAtual;

        noAtual = proximoNo;

    }

    return noAnterior;

}

No* removerUltimoNo(No* cabecaLista) {

    if (cabecaLista == NULL) return NULL;

    if (cabecaLista->proximo == NULL) { free(cabecaLista); return NULL; }

    No* iterador = cabecaLista;

    while (iterador->proximo->proximo) iterador = iterador->proximo;

    free(iterador->proximo);

    iterador->proximo = NULL;

    return cabecaLista;

}

No* removerNoDaPosicao(No* cabecaLista, int posicao) {

    if (posicao == 0) {

        No* noParaRemover = cabecaLista;

        cabecaLista = cabecaLista->proximo;

        free(noParaRemover);

        return cabecaLista;

    }

    No* noAtual = cabecaLista;

    for (int i = 0; noAtual && i < posicao - 1; i++) {

        noAtual = noAtual->proximo;

    }

    if (noAtual && noAtual->proximo) {

        No* noParaRemover = noAtual->proximo;

        noAtual->proximo = noParaRemover->proximo;

        free(noParaRemover);

    }

    return cabecaLista;

}