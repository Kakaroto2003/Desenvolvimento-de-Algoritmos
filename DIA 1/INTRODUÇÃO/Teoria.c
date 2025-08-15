// HELLO WORLD

//EXEMPLO 1
#include <stdio.h>

void main() {
 printf ("Hello, world!");
}

//EXEMPLO 2
#include <stdio.h>
int main() {
 printf ("Hello, world!");
 return 0;
}

// TIPOS DE VARIAVEIS E FORMATAÇÃO

#include <stdio.h>

int main() {
 int i = 1; // tipo inteiro
 float f = 3.14; // ponto flutuante
 char c = 'a';
 printf("Inteiro: %d\n", i);
 printf("Ponto flutuante: %f\n", f);
 printf("Letra: %c\n", c);
 return 0;
}

// INICIALIZAÇÃO DE VARIAVEIS

#include <stdio.h>

void main() {
 int i;
 printf("%d\n",i);
}

// OPERADORES

#include <stdio.h>
void main() {
 int i = 1;
 int j = 2;

 int soma = i + j;
 int subtracao = i - j;
 int multiplicacao = i * j;
 int divisao = i / j;
 int resto = i % j;
 int incremento = i++; // ou ++i
 int decremento = i--; // ou --i }
}

// LEITURA DO TECLADO INT - FLOAT - CHAR

#include <stdio.h>

int main(){
 int i;
 scanf("%d", &i);
 printf("%d", i);
}

#include <stdio.h>

int main(){
 float f;
 scanf("%f", &f);
 printf("%f", f);
}

#include <stdio.h>

int main(){
 char c;
 scanf("%c", &c);
 printf("%c", c);
}




