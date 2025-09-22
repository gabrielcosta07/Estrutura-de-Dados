#include <stdio.h>

int main() {
    int M[5][5], i, j, somaLinha4 = 0, somaCol2 = 0, somaDiagP = 0, somaDiagS = 0, somaTotal = 0;
    for (i = 0; i < 5; i++) for (j = 0; j < 5; j++) {
        scanf("%d", &M[i][j]);
        somaTotal += M[i][j];
        if (i == 3) somaLinha4 += M[i][j];
        if (j == 1) somaCol2 += M[i][j];
        if (i == j) somaDiagP += M[i][j];
        if (i + j == 4) somaDiagS += M[i][j];
    }
    printf("Soma linha 4: %d\n", somaLinha4);
    printf("Soma coluna 2: %d\n", somaCol2);
    printf("Soma diagonal principal: %d\n", somaDiagP);
    printf("Soma diagonal secundaria: %d\n", somaDiagS);
    printf("Soma total: %d\n", somaTotal);
    return 0;
}
