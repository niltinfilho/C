/* Faça um programa que receba o valor de um depósito e  o valor da taxa de  juros, calcule e  mostre o valor do rendimento e o valor total depois do rendimento. */

#include <stdio.h>

int main() {

    float deposito, rendimento, valorTotal;
    int juros;

    printf("Valor do deposito: R$");
    scanf("%f", &deposito);

    printf("Taxa de juros: ");
    scanf("%d", &juros);

    rendimento = deposito * (juros / 100.0);
    valorTotal = deposito + rendimento;

    printf("Rendimento de %d%%: R$%.2f\n", juros, rendimento);
    printf("Valor total: R$%.2f\n", valorTotal);
       
}