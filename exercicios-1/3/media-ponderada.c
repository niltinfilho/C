/* Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas. */

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Peso da primeira nota: ");
    scanf("%d", &peso1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);
    printf("Peso da segunda nota: ");
    scanf("%d", &peso2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);
    printf("Peso da terceira nota: ");
    scanf("%d", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("Media ponderada: %.2f", media);

}