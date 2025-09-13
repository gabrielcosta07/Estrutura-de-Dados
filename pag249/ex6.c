//Ex. 6 – Algoritmos de fila de prioridade em lista

// Insere de forma ordenada (prioridade para o menor valor)
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* proximo;
} No;

void enfileirarPrioridade(No** refCabeca, int valor) {

    No* novoNo = (No*) malloc(sizeof(No));

    novoNo->dado = valor;

    novoNo->proximo = NULL;

    if (*refCabeca == NULL || (*refCabeca)->dado > valor) {

        novoNo->proximo = *refCabeca;

        *refCabeca = novoNo;

        return;

    }

    No* noAtual = *refCabeca;

    while (noAtual->proximo && noAtual->proximo->dado < valor) {

        noAtual = noAtual->proximo;

    }

    novoNo->proximo = noAtual->proximo;

    noAtual->proximo = novoNo;

}

int desenfileirarMinimo(No** refCabeca) {

    if (*refCabeca == NULL) return -1;

    No* noParaRemover = *refCabeca;

    int valorMinimo = noParaRemover->dado;

    *refCabeca = noParaRemover->proximo;

    free(noParaRemover);

    return valorMinimo;

}

int filaPrioridadeVazia(No* cabeca) {

    return cabeca == NULL;

}

int main() {

    No* filaPrioridade = NULL;

    int valorDigitado;

    printf("Digite números (0 encerra): ");

    while (1) {

        scanf("%d", &valorDigitado);

        if (valorDigitado == 0) break;

        enfileirarPrioridade(&filaPrioridade, valorDigitado);

    }

    printf("Saída em ordem de prioridade: ");

    while (!filaPrioridadeVazia(filaPrioridade)) {

        printf("%d ", desenfileirarMinimo(&filaPrioridade));

    }

    printf("\n");

    return 0;

}

