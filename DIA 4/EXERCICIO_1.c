//Escreva um programa que use um laço for para imprimir os números de 1 a 10, cada um em uma linha separada.

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int i;

    for (i = 1; i < 11; i++) {
        printf("\n%d", i);
    }
    system("pause");
    return 0;
}