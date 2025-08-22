//Crie uma biblioteca de funções para operações com números inteiros. Implemente funções para verificar se um número
//é par, primo, calcular fatorial, encontrar o maior entre dois números e calcular potência. Organize o código nos
//arquivos numeros.h, numeros.c e main.c.

#include <stdio.h>
#include "numeros.h"

int main() {
    int a = 10;
    int b = 7;

    printf("%d e par? %s\n", a, ehPar(a) ? "Sim" : "Nao");
    printf("%d e par? %s\n", b, ehPar(b) ? "Sim" : "Nao");

    printf("%d e primo? %s\n", a, ehPrimo(a) ? "Sim" : "Nao");
    printf("%d e primo? %s\n", b, ehPrimo(b) ? "Sim" : "Nao");

    printf("Fatorial de %d: %d\n", a, fatorial(a));
    printf("Fatorial de %d: %d\n", b, fatorial(b));

    printf("Maior entre %d e %d: %d\n", a, b, maior(a, b));

    printf("%d elevado a %d: %d\n", a, b, potencia(a, b));
    printf("%d elevado a %d: %d\n", b, 3, potencia(b, 3));

    system("pause");
    return 0;
}
