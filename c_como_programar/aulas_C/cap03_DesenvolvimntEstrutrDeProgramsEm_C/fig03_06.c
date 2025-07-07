/* fig03_06.c
 * Programa de média da turma com repetição controlada por contador
 * */

#include <stdio.h>

// função main inicia execução do programa   
int main(void) {

    int contador; // numero da nota a digitar em seguida
    int nota;     // valor da nota 
    int total;    // soma das notas inseridas pelo usuario
    int media;    // media das notas

    // fase de inicialização 
    total = 0; // inicializa total
    contador = 1; // inicializa contador do loop
                  
    // fase de processamento
    while ( contador <= 10 ) {  // loop 10 vezes
          printf("Digite a nota: ");  // prompt para inserção
          scanf("%d", &nota);  // le a nota do usuario
          
          total = total + nota; // soma nota ao total
          contador = contador + 1;
    }
    media = total / 10;
    
    printf("Media da turma e %d\n", media);
    return (0);
}

