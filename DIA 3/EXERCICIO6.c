//Crie um programa que leia três números e determine o maior e o menor valor usando operadores lógicos AND e OR
//combinados com estruturas condicionais if-else.

#include <stdio.h>

int main() {
    int a, b, c;
    int maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    // Determinar o maior
    if (a >= b && a >= c) {
        maior = a;
    } else if (b >= a && b >= c) {
        maior = b;
    } else {
        maior = c;
    }

    // Determinar o menor
    if (a <= b && a <= c) {
        menor = a;
    } else if (b <= a && b <= c) {
        menor = b;
    } else {
        menor = c;
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    system("pause");

    return 0;
}

