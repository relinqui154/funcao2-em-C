#include <stdio.h>

int contarMaiorQue10(int m[4][4]) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] > 10)
                cont++;
    return cont;
}

int main() {
    int m[4][4];
    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);
    printf("Valores maiores que 10: %d\n", contarMaiorQue10(m));
    return 0;
}
