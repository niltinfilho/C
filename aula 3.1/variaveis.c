#include <stdio.h>

#define texto "Entrada e saída de dados."

int main() {
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Olá, %s! Você têm %d anos de idade e mede %.2fm.\n", nome, idade, altura);

    printf("Dados informados: \n");
    printf("Nome: %s;\n", nome);
    printf("Idade: %d;\n", idade);
    printf("Altura: %.2f.\n", altura);
}