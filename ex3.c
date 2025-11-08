#include <stdio.h>

void preencherProduto(int m[4][4]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            m[i][j] = i * j;
}

void mostrarMatriz(int m[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int m[4][4];
    preencherProduto(m);
    mostrarMatriz(m);
    return 0;
}
