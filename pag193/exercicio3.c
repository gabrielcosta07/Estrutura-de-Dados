//Ex. 3 – Ler inteiros até 0 e mostrar na ordem

typedef struct {
    int dados[100]; 
    int frente;
    int tras;
} Fila;

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

    printf("Saída: ");

    while (!filaVazia(&filaDeNumeros)) {

        printf("%d ", desenfileirar(&filaDeNumeros));

    }

    printf("\n");

    return 0;

}