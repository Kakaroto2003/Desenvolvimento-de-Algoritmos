//6) Desenvolva um programa que:

//▶ Declare uma matriz 3x3
//▶ Preencha com números digitados pelo usuário
//▶ Exiba a matriz em formato tabular

#include <stdio.h>

int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz em formato tabular
    printf("\nMatriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]); // Espaço para alinhamento
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

