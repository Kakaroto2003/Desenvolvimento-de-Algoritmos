//Escreva um programa que leia dois números inteiros e determine qual é o maior usando apenas operadores de
//comparação. Se os números forem iguais, exiba uma mensagem apropriada.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior numero eh: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero eh: %d\n", num2);
    } else {
        printf("Os dois numeros sao iguais: %d\n", num1);
    }

    system("pause");

    return 0;
}

