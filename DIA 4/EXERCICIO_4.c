//Crie um programa que simule um menu usando do-while. O menu deve oferecer as opções:
//1. Calcular quadrado de um número
//2. Calcular cubo de um número
//3. Sair
//O programa deve continuar executando até o usuário escolher sair.

#include <stdio.h>

int main() {
    int opcao;
    float num;

    do {
        printf("\nMenu:\n");
        printf("1. Calcular quadrado de um numero\n");
        printf("2. Calcular cubo de um numero\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%f", &num);
                printf("Quadrado de %.2lf = %.2lf\n", num, num * num);
                break;
            case 2:
                printf("Digite um numero: ");
                scanf("%f", &num);
                printf("Cubo de %.2f = %.2f\n", num, num * num * num);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 3);

    system("pause");

    return 0;
}
