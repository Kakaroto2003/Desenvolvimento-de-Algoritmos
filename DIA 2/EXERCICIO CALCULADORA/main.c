//Implemente uma calculadora básica utilizando funções organizadas em arquivos separados. Crie os arquivos
//calculadora.h, calculadora.c e main.c. A calculadora deve implementar as operações de soma, subtração,
//multiplicação e divisão, além de validar a divisão por zero.

//main.c

#include <stdio.h>
#include "calculadora.h"

int main() {
    float a = 10.0, b = 5.0;

    printf("a = %.2f, b = %.2f\n", a, b);
    printf("Soma: %.2f\n", somar(a, b));
    printf("Subtracao: %.2f\n", subtrair(a, b));
    printf("Multiplicacao: %.2f\n", multiplicar(a, b));

    if (eh_divisao_valida(b)) {
        printf("Divisao: %.2f\n", dividir(a, b));
    } else {
        printf("Erro: Divisao por zero!\n");
    }

    system("pause");
    return 0;
}