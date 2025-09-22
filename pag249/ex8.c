#include <stdio.h>

int main() {
    int A[3][8], B[3][8], soma[3][8], dif[3][8], i, j;
    for (i = 0; i < 3; i++) for (j = 0; j < 8; j++) scanf("%d", &A[i][j]);
    for (i = 0; i < 3; i++) for (j = 0; j < 8; j++) scanf("%d", &B[i][j]);
    for (i = 0; i < 3; i++) for (j = 0; j < 8; j++) {
        soma[i][j] = A[i][j] + B[i][j];
        dif[i][j] = A[i][j] - B[i][j];
    }
    printf("Soma:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 8; j++) printf("%d ", soma[i][j]);
        printf("\n");
    }
    printf("Diferenca:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 8; j++) printf("%d ", dif[i][j]);
        printf("\n");
    }
    return 0;
}
