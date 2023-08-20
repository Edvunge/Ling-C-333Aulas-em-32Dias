#include <stdio.h>
/*
49. Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário
(hora, minuto e segundo) do termino da mesma.
*/
int main() {
    int hora_inicio, minuto_inicio, segundo_inicio;
    int duracao_segundos;

    printf("Digite o horário de início (hora minuto segundo): ");
    scanf("%d %d %d", &hora_inicio, &minuto_inicio, &segundo_inicio);

    printf("Digite a duração em segundos: ");
    scanf("%d", &duracao_segundos);

    int hora_termino = hora_inicio + (duracao_segundos / 3600);
    int minuto_termino = minuto_inicio + ((duracao_segundos % 3600) / 60);
    int segundo_termino = segundo_inicio + (duracao_segundos % 60);

    if (segundo_termino >= 60) {
        segundo_termino -= 60;
        minuto_termino += 1;
    }
    if (minuto_termino >= 60) {
        minuto_termino -= 60;
        hora_termino += 1;
    }
    if (hora_termino >= 24) {
        hora_termino -= 24;
    }

    printf("Horário de término: %02d:%02d:%02d\n", hora_termino, minuto_termino, segundo_termino);

    return 0;
}
