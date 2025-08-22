//Implemente uma calculadora básica utilizando funções organizadas em arquivos separados. Crie os arquivos
//calculadora.h, calculadora.c e main.c. A calculadora deve implementar as operações de soma, subtração,
//multiplicação e divisão, além de validar a divisão por zero.


// calculadora.c

#include "calculadora.h"

float somar(float a, float b) {
 return a + b;
}

float subtrair(float a, float b) {
 return a - b;
}

float multiplicar(float a, float b) {
 return a * b;
}

float dividir(float a, float b){
    return a / b;
}

int eh_divisao_valida(float b) {
    return b != 0;
}
