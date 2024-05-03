#include <stdio.h>
#include <stdlib.h>
/*
Fácil 27 – Escreva um programa que pergunte o dia, 
mês e ano do aniversário de uma pessoa e diga se a data é válida ou não. Caso não seja, diga o motivo. 
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.
*/
int main(){
    int dia, mes, ano;

        printf("Insira o Dia do aniversario:?");
        scanf("%d",&dia); // 1-31

        printf("Insira o Mes do aniversario:?");
        scanf("%d",&mes); // 1-12

        printf("Insira o Ano do aniversario:?");
        scanf("%d",&ano); // ate 2013
        
        if ( (dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano <= 2013) ){
            switch (mes){
                case 1:  printf("\nO seu aniversario e %d / Jan / %d ",dia,ano); break;
                case 2:  printf("\nO seu aniversario e %d / Fev / %d ",dia,ano); break;
                case 3:  printf("\nO seu aniversario e %d / Mar / %d ",dia,ano); break;
                case 4:  printf("\nO seu aniversario e %d / Abr / %d ",dia,ano); break;
                case 5:  printf("\nO seu aniversario e %d / mai / %d ",dia,ano); break;
                case 6:  printf("\nO seu aniversario e %d / Jun / %d ",dia,ano); break;
                case 7:  printf("\nO seu aniversario e %d / Jul / %d ",dia,ano); break;
                case 8:  printf("\nO seu aniversario e %d / Ago / %d ",dia,ano); break;
                case 9:  printf("\nO seu aniversario e %d / Set / %d ",dia,ano); break;
                case 10: printf("\nO seu aniversario e %d / Out / %d ",dia,ano); break;
                case 11: printf("\nO seu aniversario e %d / Nov / %d ",dia,ano); break;
                case 12: printf("\nO seu aniversario e %d / Dez / %d ",dia,ano); break;
            default:printf("Mes inexistente.");break;
            }
        } else {
            printf("Algum dado invalido.");
        }
        
    return 0;
}