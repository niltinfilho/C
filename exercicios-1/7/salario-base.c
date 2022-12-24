/* Faça um programa que receba o salário-base de  um  funcionário,  calcule  e  mostre  o  seu  salário  a  receber,  sabendo-se  que  esse funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>

int main() {

    float salarioBase, imposto, salarioNovo;

    printf("Digite seu salario-base: R$");
    scanf("%f", &salarioBase);

    imposto = 0.10 * salarioBase;
    salarioNovo = salarioBase + 600 - imposto;

    printf("Gratificacao de: R$600.00\n");
    printf("Valor do imposto: R$%.2f\n", imposto);
    printf("Salario a receber: R$%.2f\n", salarioNovo);

}