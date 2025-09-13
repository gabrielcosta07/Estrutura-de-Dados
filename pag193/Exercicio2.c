//Ex. 2 – Retornar primeiro elemento sem remover

// Sugestão alternativa usando ponteiro

typedef struct {
    int dados[100];
    int frente;
    int tras;
} Fila;

int espiar(Fila *f, int *valor) {
    if (filaVazia(f)) {
        return 0; // Falso, não conseguiu espiar
    }
    *valor = f->dados[f->frente];
    return 1; // Verdadeiro, conseguiu espiar
}