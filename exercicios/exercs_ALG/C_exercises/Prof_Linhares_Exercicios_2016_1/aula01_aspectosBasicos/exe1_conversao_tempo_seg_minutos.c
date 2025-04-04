#include <stdio.h>
#include <stdlib.h>

/*
1. Fazer um programa para
    a. receber do usuário um tempo em segundos, correspondente à duração de um evento
    qualquer (por ex. jogo de futebol)

    b. calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos
*/

int main(void){
    double seconds, hours, minutes;

    printf("\nDigite o tempo em segundos de um jogo:");
    scanf("%lf",&seconds);
    
    hours = seconds / 3600;
    minutes = (seconds / 60) - (hours * 60);

    printf("\n%.2lf segundos correspondem a %.2lf horas e %.2lf minutos.",seconds,hours,minutes);
    return (0);
}