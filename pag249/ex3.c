#include <stdio.h>

int main() {
    int m[6][3], i, j, maior, menor, lmaior = 0, cmaior = 0, lmenor = 0, cmenor = 0;
    for (i = 0; i < 6; i++) for (j = 0; j < 3; j++) scanf("%d", &m[i][j]);
    maior = menor = m[0][0];
    for (i = 0; i < 6; i++) for (j = 0; j < 3; j++) {
        if (m[i][j] > maior) { maior = m[i][j]; lmaior = i; cmaior = j; }
        if (m[i][j] < menor) { menor = m[i][j]; lmenor = i; cmenor = j; }
    }
    printf("Maior: %d na posicao [%d][%d]\n", maior, lmaior, cmaior);
    printf("Menor: %d na posicao [%d][%d]\n", menor, lmenor, cmenor);
    return 0;
}
