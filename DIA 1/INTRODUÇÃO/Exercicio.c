// 1. Faça um programa que pergunte para o usuário 5 números inteiros e imprima o resultado da soma.
// 2. Faça o mesmo usando números de ponto flutuante.

//#include <stdio.h>

//int main() {
//    int i, numero, soma = 0;
//
//    printf("Digite 5 números inteiros:\n");
//
//    for(i = 1; i <= 5; i++) {
//        printf("Número %d: ", i);
//        scanf("%d", &numero);
//        soma += numero;
//    }
//
//    printf("A soma dos 5 números é: %d\n", soma);
//
//    return 0;
//}

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    printf("Digite o quarto número: ");
    scanf("%d", &n4);

    printf("Digite o quinto número: ");
    scanf("%d", &n5);

    soma = n1 + n2 + n3 + n4 + n5;

    printf("A soma dos 5 números é: %d\n", soma);

    return 0;
}
