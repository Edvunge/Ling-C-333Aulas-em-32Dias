#include <stdio.h>
#include <stdlib.h>

/*
            Aula 47: Operador Logico (&) E         
*/


int main(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade <= 5 || idade >= 60) {
        printf("Tem direito a gratuidade!\n");    
    } else {  
        printf("Nao tem direito a gratuidade!\n");
    }

/*

*/    
    return (0);
}