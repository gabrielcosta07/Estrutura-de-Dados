#include <stdio.h>

int main() {
    int M[4][6], N[6][4], soma[4][4], i, j, k;
    for (i = 0; i < 4; i++) for (j = 0; j < 6; j++) scanf("%d", &M[i][j]);
    for (i = 0; i < 6; i++) for (j = 0; j < 4; j++) scanf("%d", &N[i][j]);
    for (i = 0; i < 4; i++) for (j = 0; j < 4; j++) {
        soma[i][j] = 0;
        for (k = 0; k < 6; k++) soma[i][j] += M[i][k] + N[k][j];
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) printf("%d ", soma[i][j]);
        printf("\n");
    }
    return 0;
}
