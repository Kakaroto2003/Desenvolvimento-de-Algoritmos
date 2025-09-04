//Desenvolva um programa que leia a idade de uma pessoa e use o operador ternário para determinar se ela é maior de
//idade (>= 18 anos). O programa deve armazenar o resultado em uma variável e depois exibir uma mensagem apropriada.

#include <stdio.h>

int main() {
    int idade;
    const char *resultado;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    printf("%s\n", resultado);

    system("pause");

    return 0;
}
