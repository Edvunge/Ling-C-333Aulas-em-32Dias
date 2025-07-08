
#include <stdio.h>

int main(void){
    
    int aprovados = 0;
    int reprovados = 0;
    int aluno = 1;
    int resultado;

    while (aluno <= 10) {
        printf("Forneca resultado (1= aprovado, 2 = reprovado): ");
        scanf("%d", &resultado);

        if (resultado == 1) { 
            aprovados = aprovados + 1;
        } else {
            reprovados = reprovados + 1;
        }

        aluno = aluno + 1;
    }

    printf("Aprovados %d\n", aprovados);
    printf("Reprovados %d\n", reprovados);

    if (aprovados > 8) {
        printf("Bonus ao instrutor!\n");
    }
    return (0);
}

