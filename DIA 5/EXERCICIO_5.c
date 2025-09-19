//5) Implemente um programa que:

//▶ Leia 10 números para um array
//▶ Peça um número para buscar
//▶ Informe se o número foi encontrado e em qual posição
//▶ Se não encontrado, exiba uma mensagem apropriada

#include <stdio.h>

int main() {
    int numeros[10];
    int i; 
    int numeroBusca;
    int encontrado = 0;

    // Leitura dos 10 números
    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Leitura do número a ser buscado
    printf("Digite um numero para buscar: ");
    scanf("%d", &numeroBusca);

    // Busca no array
    for(i = 0; i < 10; i++) {
        if(numeros[i] == numeroBusca) {
            printf("Numero encontrado na posicao %d (indice %d).\n", i + 1, i);
            encontrado = 1;
            break; // remove este break se quiser encontrar todas as ocorrências
        }
    }

    // Caso não seja encontrado
    if(!encontrado) {
        printf("Numero não encontrado no array.\n");
    }

    system("pause");
    return 0;
}
