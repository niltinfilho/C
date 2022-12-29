/* Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos. Sabendo  disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos, e diga quantas horas, minutos e  segundos se passaram a partir do tempo cronometrado. */

#include <stdio.h>

int main() {

    int seg, min, hora;

    printf("Digite o tempo cronometrado (em segundos): ");
    scanf("%d", &seg);

    hora = seg / 3600;
    seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;

    printf("Horas: %d\n", hora);
    printf("Minutos: %d\n", min);
    printf("Segundos: %d\n", seg);    

}