#include <stdio.h>

int main() {
    int A, B, soma, sub, mult, divisao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    mult = A * B;
    divisao = A / B;

    printf("Resultados:\n");
    printf("Soma: %d + %d = %d\n", A, B, soma);
    printf("Subtracao: %d - %d = %d\n", A, B, sub);
    printf("Multiplicacao: %d * %d = %d\n", A, B, mult);
    printf("Divisao: %d / %d = %d", A, B, divisao);
}