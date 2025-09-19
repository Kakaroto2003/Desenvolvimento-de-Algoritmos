//7) Crie um programa que:

//▶ Leia uma matriz 4x4
//▶ Calcule e exiba a soma de cada linha
//▶ Calcule e exiba a soma de cada coluna

#include <stdio.h> 
#include <stdlib.h> // Necessário para system("pause")

int main() {
    int matriz[4][4]; 
    int i; 
    int j; 

    // Leitura da matriz 4x4
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) { // Loop pelas linhas
        for (j = 0; j < 4; j++) { // Loop pelas colunas

            // Mostra os índices com +1 para exibição (mas sem alterar os índices reais)
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula e exibe a soma de cada linha
    printf("\nSoma de cada linha:\n");
    for (i = 0; i < 4; i++) {
        int somaLinha = 0;
        for (j = 0; j < 4; j++) {
            somaLinha += matriz[i][j];
        }
        // Mostra a linha com +1 para exibição
        printf("Linha %d: %d\n", i + 1, somaLinha);
    }

    // Calcula e exibe a soma de cada coluna
    printf("\nSoma de cada coluna:\n");
    for (j = 0; j < 4; j++) {
        int somaColuna = 0;
        for (i = 0; i < 4; i++) {
            somaColuna += matriz[i][j];
        }
        // Mostra a coluna com +1 para exibição
        printf("Coluna %d: %d\n", j + 1, somaColuna);
    }

    system("pause");
    return 0;
}



