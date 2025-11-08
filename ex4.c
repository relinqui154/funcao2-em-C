#include <stdio.h>

void maiorElemento(int m[4][4]) {
    int maior = m[0][0], lin = 0, col = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] > maior) {
                maior = m[i][j];
                lin = i;
                col = j;
            }
    printf("Maior valor: %d (linha %d, coluna %d)\n", maior, lin, col);
}

int main() {
    int m[4][4];
    printf("Digite a matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);
    maiorElemento(m);
    return 0;
}
