// bibliotecas
#include <stdio.h>
#include <stdlib.h>

// comentario de uma linha

/*
um comentário de 

multiplas linhas

*/


int main(void) { 
    // tipos de variaveis
    int idade = 10; // declaraçao e inicializaçao de uma variavel
    double altura = 1.23;
    char primeiraLetraDoNome = 'e';
    float peso = 78.0f;

   /*
   int -> 1 - %d , %i
   float -> 3.4f  5.5f  3.5f  %f
   char - 'a' 'b'  %c
   double - 3.4 5.5 3.5 %lf
   */
 
  // \n -> new line
  // \t -> table 

    printf("\tidade: %d ",idade);
    printf("\n\taltura sera: %.2f",altura);
    printf("\n\tprimeira letra do nome: %c",primeiraLetraDoNome);
    printf("\n\t o peso: %.0f\n",peso); 

    return (0);
}
