// 48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_rest;

    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos_rest = segundos % 3600;
    minutos = segundos_rest / 60;
    segundos_rest %= 60;

    printf("%d horas, %d minutos, %d segundos\n", horas, minutos, segundos_rest);

    return 0;
}
