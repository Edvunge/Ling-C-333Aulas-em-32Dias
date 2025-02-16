#include <stdio.h>

int main(void) {
    int notaFinal, smsPersonality;

    printf("Exibir a nota final do aluno (um numero de 0 a 100): \n");
    scanf("%d",&notaFinal);

    printf("Escolher um tipo de mensagem personalizada (digite um numero de 1 a 3): \n");
    scanf("%d",&smsPersonality);


    if (notaFinal >= 90) {
        printf("CONCEITO A\n");
    } else if (notaFinal >= 80 && notaFinal < 89) {
        printf("CONCEITO B\n");
    } else if (notaFinal >= 70 && notaFinal < 79) {
        printf("CONCEITO C\n");
    } else if (notaFinal >= 60 && notaFinal < 69) {
        printf("CONCEITO D\n");
    } else if (notaFinal < 60 ) {
        printf("CONCEITO F\n");
    } 


    switch (smsPersonality) {
    case 1:
        printf("\nLAMENTO, TENTE DENOVO NA PROXIMA\n");
        printf("Nota do Aluno: %d",notaFinal);
        break;
    case 2:
        printf("\nESTUDE COM MAS AFINCO, PARA MELHORAR AS NOTAS\n");
        printf("Nota do Aluno: %d",notaFinal);
        break;
    case 3:
        printf("\nMUITO BEM, VOCE CONSEGUIO UMA BOA NOTA\n");
        printf("Nota do Aluno: %d",notaFinal);    
    default:
        printf("\nCONCEITO INESPLICAVEL");
        break;
    }
    return (0);
}