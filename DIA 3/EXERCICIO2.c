//Crie um programa que leia três notas de um aluno e calcule a média. Use estruturas condicionais if-else
//para determinar se o aluno foi aprovado (média >= 7.0),ficou em recuperação (média >= 5.0 e < 7.0) ou foi
//reprovado (média < 5.0).

#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Media do aluno: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno APROVADO!\n");
    } else if (media >= 5.0) {
        printf("Aluno em RECUPERACAO!\n");
    } else {
        printf("Aluno REPROVADO!\n");
    }

    system("pause");

    return 0;
}

