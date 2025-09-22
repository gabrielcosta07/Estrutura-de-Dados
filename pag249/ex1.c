#include <stdio.h>

int main() {
    int m[3][5], i, j, cont = 0;
    for (i = 0; i < 3; i++) for (j = 0; j < 5; j++) scanf("%d", &m[i][j]);
    for (i = 0; i < 3; i++) for (j = 0; j < 5; j++) if (m[i][j] >= 15 && m[i][j] <= 20) cont++;
    printf("Quantidade entre 15 e 20: %d\n", cont);
    return 0;
}
