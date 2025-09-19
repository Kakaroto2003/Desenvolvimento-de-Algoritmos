//8) Implemente um programa que:

//▶ Leia uma matriz 3x3
//▶ Exiba apenas os elementos da diagonal principal
//▶ Calcule e mostre a soma desses elementos

#include <stdio.h>

int main() {
    int matriz[3][3];
    int i;
    int j;
    int somaDiagonal = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1); // Exibe índices a partir de 1
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da diagonal principal e cálculo da soma
    printf("\nElementos da diagonal principal:\n");
    for (i = 0; i < 3; i++) {
        printf("matriz[%d][%d] = %d\n", i + 1, i + 1, matriz[i][i]); // i == j na diagonal principal
        somaDiagonal += matriz[i][i];
    }

    // Mostra a soma
    printf("\nSoma dos elementos da diagonal principal: %d\n", somaDiagonal);

    system("pause");
    return 0;
}

