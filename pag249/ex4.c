//Ex. 4 – Repetir operações usando vetor

//As mesmas operações podem ser feitas com um array e funções que manipulam os índices para simular a lógica de ponteiros da lista.

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100


typedef struct {
    int dados[TAM_MAX];
    int frente;
    int tras;
} Fila;

void inicializarFila(Fila *f) {
    f->frente = 0;
    f->tras = -1;
}
int filaVazia(Fila *f) {
    return f->tras < f->frente;
}
void enfileirar(Fila *f, int valor) {
    if (f->tras == TAM_MAX - 1) {
        printf("Overflow (Fila Cheia)!\n");
        return;
    }
    f->dados[++f->tras] = valor;
}
int desenfileirar(Fila *f) {
    if (filaVazia(f)) {
        printf("Underflow (Fila Vazia)!\n");
        return -1; // Valor de erro
    }
    return f->dados[f->frente++];
}
int espiar(Fila *f) {
    if (filaVazia(f)) {
        
        return -1; 
    }
    return f->dados[f->frente];
}

int main() {
    Fila filaDeNumeros;
    inicializarFila(&filaDeNumeros);
    int valorDigitado;
    printf("Digite números (0 encerra): ");
    while (1) {
        scanf("%d", &valorDigitado);
        if (valorDigitado == 0) break;
        enfileirar(&filaDeNumeros, valorDigitado);
    }
    printf("Primeiro elemento (sem remover): %d\n", espiar(&filaDeNumeros));
    printf("Saída: ");
    while (!filaVazia(&filaDeNumeros)) {
        printf("%d ", desenfileirar(&filaDeNumeros));
    }
    printf("\n");
    return 0;
}



