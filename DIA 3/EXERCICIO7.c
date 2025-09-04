//Desenvolva um programa que simule um sistema de login simples. Leia um nome de usuário e senha. Use
//operadores lógicos para verificar se ambos estão corretos (“admin” e “123456”). Exiba mensagens diferentes para:
//credenciais corretas, usuário incorreto, senha incorreta, ou ambos incorretos.

#include <stdio.h>   // Biblioteca padrão de entrada/saída (printf, scanf)
#include <string.h>  // Biblioteca para manipulação de strings (strcmp, strcpy, strlen, etc.)

int main() {
    char usuario[20], senha[20]; // Declara duas variáveis para armazenar o usuário e a senha (até 19 caracteres + '\0')

    printf("Digite o usuario: ");
    scanf("%s", usuario); // Lê uma string sem espaços e armazena em 'usuario'

    printf("Digite a senha: ");
    scanf("%s", senha); // Lê uma string sem espaços e armazena em 'senha'

    // strcmp compara strings:
    // Retorna 0 se as duas strings são IGUAIS
    // Retorna diferente de 0 se forem diferentes

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "123456") == 0) {
        // Se usuário for "admin" E senha for "123456"
        printf("Login bem-sucedido! Credenciais corretas.\n");
    } else if (strcmp(usuario, "admin") != 0 && strcmp(senha, "123456") == 0) {
        // Se a senha estiver correta, mas o usuário for diferente
        printf("Usuario incorreto!\n");
    } else if (strcmp(usuario, "admin") == 0 && strcmp(senha, "123456") != 0) {
        // Se o usuário estiver correto, mas a senha for diferente
        printf("Senha incorreta!\n");
    } else {
        // Caso nem usuário nem senha estejam corretos
        printf("Usuario e senha incorretos!\n");
    }

    return 0; // Indica que o programa terminou corretamente
}
