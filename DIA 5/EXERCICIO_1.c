//1) Crie um programa que:

//▶ Declare um array de 5 inteiros
//▶ Peça ao usuário para digitar os 5 valores
//▶ Exiba todos os valores na ordem digitada

#include <stdio.h>

int main() {
    int numeros[5];

    // Entrada: solicitando ao usuário que digite os valores
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Saída: exibindo os valores na ordem digitada
    printf("\nOs numeros digitados foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
