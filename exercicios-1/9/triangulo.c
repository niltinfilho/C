/* Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2. */

#include <stdio.h>

int main() {

    float base, altura, area;

    printf("Area do triangulo!\n");

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a base: ");
    scanf("%f", &base);

    area = (base * altura) / 2;

    printf("A area do triangulo eh: %.2f\n", area);

}