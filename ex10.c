#include <stdio.h>

int somaDiagonalPrincipal(int m[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++)
        soma += m[i][i];
    return soma;
}

int main() {
    int m[3][3];
    printf("Digite a matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal(m));
    return 0;
}
