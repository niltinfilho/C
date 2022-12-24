/* Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base. */

#include <stdio.h>

int main() {

    float salarioBase, gratificacao, imposto, salarioNovo;

    printf("Digite seu salario-base: R$");
    scanf("%f", &salarioBase);

    gratificacao = 0.05 * salarioBase;
    imposto = 0.07 * salarioBase;
    salarioNovo = salarioBase + gratificacao - imposto;

    printf("Gratificacao de 5%%: R$%.2f\n", gratificacao);
    printf("Imposto de 7%%: R$%.2f\n", imposto);
    printf("Salario a receber: R$%.2f\n", salarioNovo);

}