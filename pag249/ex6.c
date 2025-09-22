#include <stdio.h>

int main() {
    int m[20][10], soma[10] = {0}, i, j;
    for (i = 0; i < 20; i++) for (j = 0; j < 10; j++) {
        scanf("%d", &m[i][j]);
        soma[j] += m[i][j];
    }
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 10; j++) printf("%d ", m[i][j] * soma[j]);
        printf("\n");
    }
    return 0;
}
