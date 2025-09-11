//Crie um programa que:
//▶ Use laços aninhados para imprimir um padrão triangular de asteriscos
//▶ O usuário define quantas linhas terá o triângulo
//▶ Exemplo para 5 linhas:
//*
//**
//***
//****
//*****

#include <stdio.h>

int main() {
    int linhas, i, j;

    printf("Digite o numero de linhas do triangulo: ");
    scanf("%d", &linhas);

    // Laço externo: controla as linhas
    for (i = 1; i <= linhas; i++) {
        // Laço interno: imprime os asteriscos de cada linha
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Pula para a próxima linha
    }

    return 0;
}
