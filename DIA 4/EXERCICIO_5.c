//Escreva um programa que:
//▶ Use um laço for de 1 a 20
//▶ Use continue para pular números pares
//▶ Use break para parar quando encontrar o primeiro número maior que 15
//▶ Imprima apenas os números ímpares de 1 a 15

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i < 21; i++) {
        if (i > 15) {
            break;
        }
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    system("pause");
    
    return 0;
}

