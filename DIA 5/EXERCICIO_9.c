//9) Desenvolva um programa que:

//▶ Crie uma matriz 5x5
//▶ Preencha com o padrão: matriz[i][j] = i + j
//▶ Exiba a matriz resultante

#include <stdio.h>

int main() {
    int matriz[5][5];

    // Preenchendo a matriz com o padrão matriz[i][j] = i + j
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = i + j;
        }
    }

    // Exibindo a matriz
    printf("Matriz 5x5 com padrão matriz[i][j] = i + j:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

