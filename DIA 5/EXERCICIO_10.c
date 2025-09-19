//10) Crie um programa que:

//▶ Leia duas matrizes 2x2
//▶ Compare se são iguais (todos os elementos nas mesmas posições)
//▶ Exiba “Matrizes iguais” ou “Matrizes diferentes”

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int matriz1[2][2];
    int matriz2[2][2];
    int iguais = 1; // Assumimos que são iguais até que se prove o contrário

    printf("Digite os elementos da primeira matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz1[%d][%d]: ", i + 1, j + 1);  // +1 para exibir a partir de 1
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz2[%d][%d]: ", i + 1, j + 1);  // +1 para exibir a partir de 1
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Comparação das matrizes
    for (int i = 0; i < 2 && iguais; i++) {
        for (int j = 0; j < 2; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                iguais = 0; // São diferentes
                break;
            }
        }
    }

    // Resultado
    if (iguais) {
        printf("\nMatrizes iguais\n");
    } else {
        printf("\nMatrizes diferentes\n");
    }

    system("pause");
    return 0;
}


