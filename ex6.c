#include <stdio.h>

void maiorPorPosicao(int a[4][4], int b[4][4], int r[4][4]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            r[i][j] = (a[i][j] > b[i][j]) ? a[i][j] : b[i][j];
}

void mostrarMatriz(int m[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int a[4][4], b[4][4], r[4][4];
    printf("Digite a primeira matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    printf("Digite a segunda matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &b[i][j]);
    maiorPorPosicao(a, b, r);
    printf("Matriz resultante:\n");
    mostrarMatriz(r);
    return 0;
}
