//Implemente um menu interativo usando switch-case que ofereça as seguintes opções:
// 1) Calcular área do círculo
// 2) Calcular área do retângulo
// 3) Calcular área do triângulo
// 4) Sair.
//Para cada opção, leia os dados necessários e realize o cálculo apropriado. Use break corretamente em cada case.

#include <stdio.h>

int main() {
    int opcao;
    float raio, base, altura, largura, area;

    do {
        // Exibe o menu
        printf("\n=== MENU DE AREAS ===\n");
        printf("1) Calcular area do circulo\n");
        printf("2) Calcular area do retangulo\n");
        printf("3) Calcular area do triangulo\n");
        printf("4) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: // Área do círculo
                printf("Digite o raio do circulo: ");
                scanf("%f", &raio);
                area = 3.14159 * raio * raio;
                printf("Area do circulo: %.2f\n", area);
                break;
            case 2: // Área do retângulo
                printf("Digite a largura do retangulo: ");
                scanf("%f", &largura);
                printf("Digite a altura do retangulo: ");
                scanf("%f", &altura);
                area = largura * altura;
                printf("Area do retangulo: %.2f\n", area);
                break;
            case 3: // Área do triângulo
                printf("Digite a base do triangulo: ");
                scanf("%f", &base);
                printf("Digite a altura do triangulo: ");
                scanf("%f", &altura);
                area = (base * altura) / 2.0;
                printf("Area do triangulo: %.2f\n", area);
                break;
            case 4: // Sair
                printf("Saindo do programa...\n");
                break;
            default: // Opção inválida
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while(opcao != 4); // Continua mostrando o menu até o usuário escolher sair

    system("pause");

    return 0;
}
