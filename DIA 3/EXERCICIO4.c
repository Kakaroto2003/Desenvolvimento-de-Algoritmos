//Implemente uma calculadora simples usando switch-case. O programa deve ler dois números e um operador (+, -, *, /)
//e realizar a operação correspondente. Inclua validação para divisão por zero e operadores inválidos usando default.

#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // espaço antes do %c para ignorar enter

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero nao permitida!\n");
            }
            break;
        default:
            printf("Erro: operador invalido!\n");
    }

    system("pause");

    return 0;
}
