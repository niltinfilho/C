/* Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário. */

#include <stdio.h>

int main() {

    float salario, aumento, salarioNovo;
    int percentual;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Percentual de aumento: ");
    scanf("%d", &percentual);

    aumento = (percentual / 100.0) * salario;
    salarioNovo = salario + aumento;

    printf("Aumento de: R$%.2f\n", aumento);
    printf("Salário novo: R$%.2f\n", salarioNovo);

}