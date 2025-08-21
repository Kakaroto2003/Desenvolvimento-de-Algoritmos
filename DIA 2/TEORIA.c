//ASSINATURA DE UMA FUNÇÃO

tipo_de_retorno nome_da_funcao (parametro1, parametro2, ...) {
 instrucoes;
 return valor; // ou return;
}

//tipo de retorno: tipos fundamentais do C ou void . Define o tipo de uma função;

//nome da função: não pode ser uma palavra reservada. Define como essa função será chamada durante o resto do código;

//parametros: os tipos devem ser declarados e podemos passar quantos parâmetros forem necessários;

//return: caso o tipo da função não seja void , precisamos retornar algo. A variável retornada deve ser do mesmo tipo que a função.

//ASSINATURA DE UMA FUNÇÃO

int soma_int(int a, int b){
 int soma = a + b;
 return soma;
}

float soma_float(float a, float b){
 float soma = a + b;
 return soma;
}

int fibonacci(int pos){
 int a = 0;
 int b = 1;
 int i;
 for(i = 3; i <= pos; i++){
 int aux = b;
 b = a + b;
 a = aux;
 }
 return b;
}

//Em C:
//Uma função deve ser declarada antes de ser usada;
//Podemos declarar a assinatura da função antes de ser usada e fazer a implementação depois;
//Só podemos declarar uma função fora de outra função

//DECLARAÇÃO DE FUNÇÕES

#include <stdio.h>
int fibonacci(int pos){
 // implementação
}
int main() {
 int n = 10;
 int r = fibonacci(n);
 printf("\no numero na posicao %d eh %d\n", n, r);
}

#include <stdio.h>
int fibonacci(int); // somente o tipo é obrigatório
int main() {
 int n = 10;
 int r = fibonacci(n);
 printf("\no numero na posicao %d eh %d\n", n, r);
}
int fibonacci(int pos){
 // implementação
}


//Com o tempo, as funções são usadas sem sabermos exatamente o que está implementado nelas.
//Por exemplo a função printf definida em stdio.h : não vemos a implementação dela, mas usamos para exibir valores na tela.
//São os arquivos .h que incluímos no início do código, como o stdio.h
//Eles apresentam a assinatura das funções, mas não necessariamente a sua implementação. Facilitam a reutilização e organização do código.

//ARQUIVOS DE CABEÇALHO E IMPLEMENTAÇÃO

int soma(int, int);
int fatorial(int);
float valor_percentual(float total, float percentual);
int idade(int ano, int mes, int dia);
int printf(const char *format, ...);
int main(void);
int main(int argc, char* argv[]);

//1. Descrição das assinaturas no arquivo .h
//2. Implementação das funções no arquivo .c de mesmo nome
//3. Inclusão no arquivos que possui a função main :
//      entre "" se os arquivos estiverem na mesma pasta
//      entre <> se os arquivos estiverem no path

//ARQUIVOS DE CABEÇALHO E IMPLEMENTAÇÃO

// funcoes.h
int soma_int(int, int);

// funcoes.c
int soma_int(int a, int b){
 return a + b;
}

// main.c
#include <stdio.h>
#include "funcoes.h"
int main(){
 int a = 1, b = 2;
 int r = soma_int(a, b);
 printf("%d\n", r);
}