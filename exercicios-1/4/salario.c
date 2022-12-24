/* Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário,  sabendo-se que este sofreu um aumento de 25%. */

#include <stdio.h>

int main() {

    float salario, aumento, salarioNovo;

    printf("Seu salário: ");
    scanf("%f", &salario);

    aumento = 0.25 * salario;

    salarioNovo = salario + aumento;

    printf("Aumento de: R$%.2f\n", aumento);
    printf("Valor novo: R$%.2f\n", salarioNovo);

}