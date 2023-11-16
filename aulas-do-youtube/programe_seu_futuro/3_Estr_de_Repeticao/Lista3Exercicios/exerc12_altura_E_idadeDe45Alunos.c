#include <stdio.h>
#include <stdlib.h>

/*
12) Para uma turma de 45 alunos, construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;

b) A altura média dos alunos com mais de 20 anos.

*/

int main(void) {
    int idade = 0, i = 0, 
        numeroDeAlunos = 3, 
        somaDasIdades = 0
        , idadeMedia = 0;
    float altura, alturaMedia, somaDasAlturas;

    for (i = 1; i <= numeroDeAlunos; i++) {
        printf("Digite a idade: \n");
        scanf("%d",&idade);

        printf("Digite a altura: \n");
        scanf("%f",&altura);
        
        // a) idad média ds aluns menos de 1,70m de altur;
        if (altura >= 1.70) {
            somaDasIdades += idade;
            idadeMedia = somaDasIdades/numeroDeAlunos;
        }

        // b) altur média ds aluns mais de 20 ans.
        if (idade >= 20) {
            somaDasAlturas += altura;
            alturaMedia = (somaDasAlturas)/(float)numeroDeAlunos;
        }
    }

    printf("A idade media e de: %d\n",idadeMedia);
    printf("A altura media e de: %.2f\n",alturaMedia);
    return (0);
}