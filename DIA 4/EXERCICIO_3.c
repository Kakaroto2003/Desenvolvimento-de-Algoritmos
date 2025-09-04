//Implemente o mesmo algoritmo (somar números de 1 a N) de duas formas:
//▶ Uma usando for
//▶ Outra usando while
//Compare qual fica mais legível e explique quando usar cada estrutura.

//USANDO FOR

#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("Soma de 1 a %d usando for: %d\n", N, soma);

    system("pause");

    return 0;
}

//USANDO WHILE

#include <stdio.h>

int main() {
    int N; 
    int soma = 0;
    int i = 1;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    while (i <= N) {
        soma += i;
        i++;
    }

    printf("Soma de 1 a %d usando while: %d\n", N, soma);

    system("pause");

    return 0;
}

//O for é mais compacto e geralmente mais legível quando sabemos o número exato de iterações (contagem controlada).

//O while é mais flexível e costuma ser usado quando a quantidade de repetições depende de uma 
//condição que pode mudar durante a execução, ou não sabemos exatamente quantas vezes o loop

// O for é mais compacto e simples, pessoalmente eu prefiro usar o while pois a sintaxe é mais simples, porém, em casos como este
// o uso do for é mais apropriado