//Ex. 1 – Implementar pilhas e filas em um único vetor
//A mesma ideia do exercício de duas filas pode ser aplicada: a pilha cresce a partir do início do vetor (índice 0) e a fila cresce a partir do final (índice TAM_MAX - 1), movendo-se em direções opostas.

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100

typedef struct {
    int dados[TAM_MAX];
    int topoPilha; // Índice do topo da pilha
    int frenteFila; // Índice da frente da fila
    int trasFila; // Índice do tras da fila
} PilhaFila;

void inicializarPilhaFila(PilhaFila *pf) {
    pf->topoPilha = -1; // Pilha vazia
    pf->frenteFila = TAM_MAX; // Fila vazia
    pf->trasFila = TAM_MAX; // Fila vazia
}

int pilhaVazia(PilhaFila *pf) {
    return pf->topoPilha == -1;
}

int filaVazia(PilhaFila *pf) {
    return pf->trasFila == TAM_MAX;
}

void empilhar(PilhaFila *pf, int valor) {
    if (pf->topoPilha + 1 == pf->trasFila) {
        printf("Overflow (Pilha cheia ou Fila cheia)!\n");
        return;
    }
    pf->dados[++pf->topoPilha] = valor;
}

int desempilhar(PilhaFila *pf) {
    if (pilhaVazia(pf)) {
        printf("Underflow (Pilha vazia)!\n");
        return -1; // Valor de erro
    }
    return pf->dados[pf->topoPilha--];
}

void enfileirar(PilhaFila *pf, int valor) {
    if (pf->topoPilha + 1 == pf->trasFila) {
        printf("Overflow (Pilha cheia ou Fila cheia)!\n");
        return;
    }
    pf->dados[--pf->trasFila] = valor;
}

int desenfileirar(PilhaFila *pf) {
    if (filaVazia(pf)) {
        printf("Underflow (Fila vazia)!\n");
        return -1; // Valor de erro
    }
    return pf->dados[pf->frenteFila--];
}

int main() {
    PilhaFila pf;
    inicializarPilhaFila(&pf);

    // Testando pilha
    empilhar(&pf, 10);
    empilhar(&pf, 20);
    printf("Desempilhado: %d\n", desempilhar(&pf)); // Deve imprimir 20

    // Testando fila
    enfileirar(&pf, 30);
    enfileirar(&pf, 40);
    printf("Desenfileirado: %d\n", desenfileirar(&pf)); // Deve imprimir 30

    return 0;
}
