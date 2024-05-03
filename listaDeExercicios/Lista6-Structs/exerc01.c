#include <stdio.h>
#include <stdlib.h>
/*
1. Escreva um trecho de codigo para fazer a criacao 
dos novos tipos de dados conforme solicitado abaixo:
    
    Horario: composto de hora, minutos e segundos.
    
    Data: composto de dia, mes e ano.
    
    Compromisso: composto de uma data, 
        horario e texto que descreve o compromisso.
*/

typedef struct  {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    char mes[45];
    int ano;
} Data;

typedef struct comprimisso{
    Data data;
    Horario horario;
    char jantar[45];
} COMPRIMISSO;

void apointment (struct comprimisso comp) {
    printf("Data: %d/%s/%d \n",comp.data.dia ,comp.data.mes ,comp.data.ano);
    printf("Horario: [%d:%d.%d]\n",comp.horario.hora ,comp.horario.minutos ,comp.horario.segundos);
    printf("Nesse Dia, %s \n",comp.jantar);
}

int main(void) {
    
    struct comp saidaMarcada = {{10, "julho", 2021}, {20, 10, 09}, "Jantar Romantico"}
    apointment(saidaMarcada);
    return (0);
}