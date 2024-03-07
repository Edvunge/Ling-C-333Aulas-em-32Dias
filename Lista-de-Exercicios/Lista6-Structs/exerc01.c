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

typedef struct {
    Data data;
    Horario horario;
} Compromisso;

int main(void) {
    struct Horario hour { 10, 20, 05 };
    struct Data date {10, "julho", 2021};
    struct Comprimisso jantarRomantico;

    printf("Voce tera um jantar romantico, no dia: %d", jantarRomantico.data.dia);

    return (0);
}