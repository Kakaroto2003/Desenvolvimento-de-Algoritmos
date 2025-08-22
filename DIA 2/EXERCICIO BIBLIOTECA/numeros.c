//Crie uma biblioteca de funções para operações com números inteiros. Implemente funções para verificar se um número
//é par, primo, calcular fatorial, encontrar o maior entre dois números e calcular potência. Organize o código nos
//arquivos numeros.h, numeros.c e main.c.

#include "numeros.h"

int ehPar(int n) {
    return n % 2 == 0;
}

int ehPrimo(int n) {
    if (n < 2) return 0;

    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int fatorial(int n) {
    if (n < 0) return 0;

    int resultado = 1;
    int i;
    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int potencia(int base, int expoente) {
    int resultado = 1;
    int i;
    for (i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}