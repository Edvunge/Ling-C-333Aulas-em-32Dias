#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float matNotas[4][4];
    int i, j;
    for (i=0; i < 4; i++) {
        for (j=0; j < 3; j++) {
            printf("Para o aluno %d informe a nota %d: \n",i+1, j+1);
            scanf("%f", &matNotas[i][j]);
        }
        matNotas[i][3] = matNotas[i][0] + matNotas[i][1] + matNotas[i][2];
    }

    // imprimindo as notas dos alunos
    for (i=0; i<4;i++) {
        printf("Notas do aluno %d\n", i);
        for (j=0; j<3; j++) {
            if (j != 2) {
                printf("%f \t", matNotas[i][j]);
            } else {
                printf("%f \n", matNotas[i][j]);
            }
        }
        printf("Nota final........: %f \n", matNotas[i][3]);
    }
    return (0);
}