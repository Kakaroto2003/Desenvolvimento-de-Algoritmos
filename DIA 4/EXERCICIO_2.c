//Crie um programa que demonstre a diferença entre i++ e ++i. O programa deve:
//▶ Declarar uma variável int i = 5
//▶ Usar printf para mostrar o valor de i++
//▶ Usar printf para mostrar o valor de ++i
//▶ Explicar através de comentários o que acontece em cada caso

#include <stdio.h>

int main() {
    int i = 5;

    // Usando i++
    // Primeiro o valor de i é usado na expressão (impressão),
    // depois i é incrementado.
    printf("Usando i++: %d\n", i++); // Imprime 5, depois i vira 6

    // Agora i já vale 6

    // Usando ++i
    // Primeiro i é incrementado,
    // depois o valor incrementado é usado na expressão.
    printf("Usando ++i: %d\n", ++i); // Incrementa para 7, depois imprime 7

    system("pause");

    return 0;
}

