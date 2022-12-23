#include <stdio.h>

int main() {

    int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Numero antes das atribuicoes: %d\n", num);

    num++;
    printf("Depois do incremento: %d\n", num);

    num--;
    printf("Depois do decremento: %d\n", num);

    num += 3;
    printf("Depois do incremento em 3 unidades: %d\n", num);

    num -= 2;
    printf("Depois do decremento em 2 unidades: %d\n", num);

    num *= 10;
    printf("Depois de multiplicar por 10: %d\n", num);
}