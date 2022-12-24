/* Faça  um  programa  que  receba  quatro números inteiros, calcule e mostre a soma desses números. */

#include <stdio.h>

int main() {

    int num1, num2, num3, num4, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Digite o ultimo numero: ");
    scanf("%d", &num4);

    soma = num1 + num2 + num3 + num4;

    printf("A soma total dos valores informados foi: %d", soma);
}