#include <stdio.h>

int main() {
    float M[3][3], num;
    int i, j;
    for (i = 0; i < 3; i++) for (j = 0; j < 3; j++) scanf("%f", &M[i][j]);
    scanf("%f", &num);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%.2f ", M[i][j] * num);
        printf("\n");
    }
    return 0;
}
