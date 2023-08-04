#include <stdio.h>
#include <stdlib.h>
/*
39. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
    • O primeiro ganhador receberá 46%;
    • O segundo receberá 32%;
    • O terceiro receberá o restante; 
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/
int main(void){
    float quantiaTotal = 780.000, percentagem_1_Ganhador, percentagem_2_Ganhador, percentagem_3_Ganhador;
    float premio_final_do_primeiro_ganhador, premio_final_do_segundo_ganhador, premio_final_do_terceiro_ganhador;
    

    // calculo do premio atribuido ao primeiro ganhador
    percentagem_1_Ganhador = (quantiaTotal * 46 ) / 100;
    premio_final_do_primeiro_ganhador = quantiaTotal - percentagem_1_Ganhador;
    printf("\nO valor do premio final do primeiro ganhador: %.2f ",premio_final_do_primeiro_ganhador);


    // calculo do premio atribuido ao segundo ganhador
    percentagem_2_Ganhador = (quantiaTotal * 32 ) / 100;
    premio_final_do_segundo_ganhador = quantiaTotal - percentagem_2_Ganhador;
    printf("\nO valor do premio final do segundo ganhador: %.2f ",premio_final_do_segundo_ganhador);


    // calculo do premio atribuido ao terceiro ganhador
    percentagem_3_Ganhador = (quantiaTotal * 22 ) / 100;
    premio_final_do_terceiro_ganhador = quantiaTotal - percentagem_3_Ganhador;
    printf("\nO valor do premio final do terceiro ganhador: %.2f ",premio_final_do_terceiro_ganhador);
    return 0;
}