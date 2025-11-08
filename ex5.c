#include <stdio.h>

void buscarValor(int m[5][5], int x) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (m[i][j] == x) {
                printf("Encontrado em: linha %d, coluna %d\n", i, j);
                return;
            }
    printf("Nao encontrado.\n");
}

int main() {
    int m[5][5], x;
    printf("Digite a matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);
    printf("Digite o valor a buscar: ");
    scanf("%d", &x);
    buscarValor(m, x);
    return 0;
}
