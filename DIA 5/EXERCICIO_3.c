//3) Desenvolva um programa que:

//▶ Leia 8 números para um array
//▶ Encontre e exiba o maior valor
//▶ Encontre e exiba o menor valor
//▶ Informe em qual posição cada um se encontra

#include <stdio.h>

int main() {
    int numeros[8];
    int i;
    int maior, menor;
    int pos_maior, pos_menor;

    // Leitura dos 8 números
    printf("Digite 8 numeros:\n");
    for(i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa maior e menor com o primeiro elemento
    maior = menor = numeros[0];
    pos_maior = pos_menor = 0;

    // Procura maior e menor valor
    for(i = 1; i < 8; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
            pos_maior = i;
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
            pos_menor = i;
        }
    }

    // Exibe os resultados
    printf("\nMaior valor: %d (posicao %d)\n", maior, pos_maior);
    printf("Menor valor: %d (posicao %d)\n", menor, pos_menor);
    
    system('pause');
    return 0;
}
