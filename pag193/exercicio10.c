//Ex. 10 – Simulação de atendimento no banco

#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 100

typedef struct {

    int dados[TAM_MAX];

    int frente, tras;

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

        return -1; 

    }

    return f->dados[f->frente++];

}


int main() {

    Fila filaDeClientes;

    inicializarFila(&filaDeClientes);

    int numClientes, idCliente;



    printf("Digite o número de clientes: ");

    scanf("%d", &numClientes);



    for (idCliente = 1; idCliente <= numClientes; idCliente++) {

        enfileirar(&filaDeClientes, idCliente);

    }



    printf("Atendimento:\n");

    while (!filaVazia(&filaDeClientes)) {

        printf("Cliente %d atendido.\n", desenfileirar(&filaDeClientes));

    }

    return 0;

}


