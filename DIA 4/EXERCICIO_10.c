//Implemente uma solução recursiva para a Conjectura de Collatz (3n + 1):
//▶ Se n é par: n = n/2
//▶ Se n é ímpar: n = 3n + 1
//▶ Pare quando n = 1
//▶ A função deve retornar quantos passos foram necessários

#include <stdio.h>

// Função recursiva para calcular os passos da Conjectura de Collatz
int collatz(int n) {
    if (n == 1) {
        return 0; // critério de parada: já chegou em 1
    } else if (n % 2 == 0) {
        // n é par → divide por 2
        return 1 + collatz(n / 2);
    } else {
        // n é ímpar → aplica 3n + 1
        return 1 + collatz(3 * n + 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero maior que 0.\n");
    } else {
        int passos = collatz(n);
        printf("Foram necessarios %d passos para chegar em 1.\n", passos);
    }

    return 0;
}
