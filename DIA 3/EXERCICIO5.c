//Escreva um programa que leia um número de 1 a 7 e use switch-case para exibir o dia da semana correspondente
//(1=Domingo, 2=Segunda, etc.). Use break adequadamente e inclua tratamento para números inválidos.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido! Digite um valor de 1 a 7.\n");
    }

    system("pause");

    return 0;
}
