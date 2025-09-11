//Implemente a sequência de Fibonacci de duas formas:
//▶ Versão iterativa usando for ou while
//▶ Versão recursiva
//Compare o desempenho (empírico) das duas abordagens para calcular o 40º número da sequência.

#include <stdio.h>

// Fibonacci Recursivo
int fibonacciRecursivo(int n) {
    if (n == 0) return 0;   // Caso base
    if (n == 1) return 1;   // Caso base
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

// Fibonacci Iterativo
int fibonacciIterativo(int n) {
    int a = 0, b = 1, prox, i;

    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i <= n; i++) {
        prox = a + b;
        a = b;
        b = prox;
    }
    return b;
}

int main() {
    int n = 40; // queremos calcular o 40º termo
    int resultado;

    // --- Versão Recursiva ---
    printf("Calculando Fibonacci Recursivo(%d)...\n", n);
    resultado = fibonacciRecursivo(n);
    printf("Resultado Recursivo: %d\n\n", resultado);

    // --- Versão Iterativa ---
    printf("Calculando Fibonacci Iterativo(%d)...\n", n);
    resultado = fibonacciIterativo(n);
    printf("Resultado Iterativo: %d\n", resultado);

    return 0;
}
