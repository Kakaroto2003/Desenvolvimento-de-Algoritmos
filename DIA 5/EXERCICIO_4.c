//4) Crie um programa que:

//▶ Leia 15 números inteiros
//▶ Conte quantos são pares e quantos são ímpares
//▶ Exiba os resultados

//O programa deve continuar executando até o usuário escolher sair.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numeros[15];    // Declara um array para armazenar os 15 números inteiros
    int i;              // Variável de controle do loop
    int pares, impares; // Variáveis para contar números pares e ímpares
    int opcao;          // Variável para controlar se o usuário quer repetir ou não

    do {
        pares = 0;      // Inicializa o contador de pares com zero
        impares = 0;    // Inicializa o contador de ímpares com zero

        printf("Digite 15 números inteiros:\n"); // Solicita os números ao usuário

        for (i = 0; i < 15; i++) { // Loop para ler 15 números
            printf("Número %d: ", i + 1); // Pede o número correspondente
            scanf("%d", &numeros[i]);    // Lê o número digitado e armazena no array

            if (numeros[i] % 2 == 0) {   // Verifica se o número é par
                pares++;                 // Incrementa o contador de pares
            } else {
                impares++;              // Se não for par, incrementa o contador de ímpares
            }
        }

        // Exibe a quantidade de pares e ímpares
        printf("\nTotal de números pares: %d\n", pares);
        printf("Total de números ímpares: %d\n", impares);

        // Pergunta se o usuário deseja repetir
        printf("\nDeseja executar novamente? (1 = sim / 0 = não): ");
        scanf("%d", &opcao); // Lê a opção do usuário (1 para sim, 0 para não)

    } while (opcao == 1); // Repete o processo se a opção for 1 (sim)

    printf("\nPrograma encerrado.\n"); // Mensagem final ao encerrar

    system("pause");
    return 0; // Encerra o programa
}
