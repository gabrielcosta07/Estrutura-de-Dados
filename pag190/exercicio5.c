#include <stdio.h>

int main() {
    int logica[15], prog[10], i, j;
    for (i = 0; i < 15; i++) scanf("%d", &logica[i]);
    for (i = 0; i < 10; i++) scanf("%d", &prog[i]);
    for (i = 0; i < 15; i++) for (j = 0; j < 10; j++) if (logica[i] == prog[j]) printf("Matricula: %d\n", logica[i]);
    return 0;
}
