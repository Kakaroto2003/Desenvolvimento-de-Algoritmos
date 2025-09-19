//2) Implemente um programa que:

//▶ Leia 10 números inteiros para um array
//▶ Calcule e exiba a soma de todos os elementos
//▶ Exiba também quantos números são positivos

#include <stdio.h>

int main() {
    int numeros[10];     // Array para armazenar 10 números inteiros
    int soma = 0;        // Variável para armazenar a soma
    int positivos = 0;   // Contador de números positivos

    // Entrada: leitura dos 10 números
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Soma os valores
        soma += numeros[i];

        // Conta os números positivos
        if (numeros[i] > 0) {
            positivos++;
        }
    }

    // Saída: soma e quantidade de positivos
    printf("\nSoma de todos os numeros: %d\n", soma);
    printf("Quantidade de numeros positivos: %d\n", positivos);

    system("pause");
    return 0;
}
