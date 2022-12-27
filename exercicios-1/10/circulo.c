/* Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14. */

#include <stdio.h>
#define pi 3.14

int main() {

    float raio, area;

    printf("Area de um circulo!\n");

    printf("Valor do raio: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("Area do circulo: %.2f", area);

}