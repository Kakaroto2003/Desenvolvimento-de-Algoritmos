//Implemente uma funcao recursiva para calcular a potencia de um numero (x n). A funcao deve:
//▶ Ter um critério de parada adequado
//▶ Fazer a chamada recursiva com valor atualizado
//▶ Compare o resultado com uma implementação usando laço

#include <stdio.h>

// Função recursiva para calcular potencia (x^n)
int potenciaRecursiva(int x, int n) {
    // Critério de parada: qualquer número elevado a 0 é 1
    if (n == 0) {
        return 1;
    }
    // Chamada recursiva: x^n = x * x^(n-1)
    return x * potenciaRecursiva(x, n - 1);
}

// Função iterativa usando laço
int potenciaIterativa(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= x;
    }
    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base (x): ");
    scanf("%d", &base);

    printf("Digite o expoente (n): ");
    scanf("%d", &expoente);

    // Chamada das funções
    int rec = potenciaRecursiva(base, expoente);
    int ite = potenciaIterativa(base, expoente);

    printf("\nResultado com recursao: %d^%d = %d\n", base, expoente, rec);
    printf("Resultado com laco:     %d^%d = %d\n", base, expoente, ite);

    return 0;
}
