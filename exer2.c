#include <stdio.h>

void preencherDiagonal(int m[5][5]) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            m[i][j] = (i == j) ? 1 : 0;
}

void mostrarMatriz(int m[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int m[5][5];
    preencherDiagonal(m);
    mostrarMatriz(m);
    return 0;
}
