//Desenvolva um programa que:
//▶ Leia números inteiros do usuário
//▶ Use do-while para validar se o número está entre 1 e 100
//▶ Continue pedindo até receber um número válido
//▶ Use while para permitir ao usuário inserir vários números
//▶ Calcule e exiba a média dos números válidos inseridos
//▶ Pare quando o usuário digitar 0

#include <stdio.h>

int main() {
    int num, soma = 0, contador = 0;
    float media;

    printf("Digite numeros entre 1 e 100 (ou 0 para sair):\n");

    while (1) { // laço principal, só sai quando o usuário digitar 0
        do {
            printf("Digite um numero: ");
            scanf("%d", &num);

            if (num == 0) { // condição de saída
                break;
            }

            if (num < 1 || num > 100) {
                printf("Numero invalido! Digite entre 1 e 100.\n");
            }

        } while (num < 1 || num > 100); // validação do intervalo

        if (num == 0) { // encerra o programa
            break;
        }

        // Se chegou aqui, o número é válido
        soma += num;
        contador++;
    }

    if (contador > 0) {
        media = (float)soma / contador;
        printf("\nVoce digitou %d numeros validos.\n", contador);
        printf("Media dos numeros: %.2f\n", media);
    } else {
        printf("\nNenhum numero valido foi inserido.\n");
    }

    return 0;
}
