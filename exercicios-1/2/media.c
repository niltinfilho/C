/* Faça  um  programa  que  receba  três  notas, calcule e mostre a média aritmética entre elas. */

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media, soma;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A sua media final foi: %.2f", media);

}