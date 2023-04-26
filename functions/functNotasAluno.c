#include <stdio.h>
#include <stdlib.h>

int functionNotasAlunos(float num1, float num2, float num3, char letra){
    float media_aritmetica = 0, media_ponderada = 0;

    if(letra == 'a' || letra == 'A'){
        media_aritmetica = ( num1 + num2 + num3 / 3 );
        return printf("A media aritmetica e de: %.2f",media_aritmetica);    
    } else if (letra == 'p' || letra == 'P'){
        media_ponderada = ( ( num1 * 5 ) + ( num2 * 3 ) + ( num3 * 2 ) ) / ( 5 + 3 + 2 );
        return printf("A media aritmetica e de: %.2f",media_ponderada);    
    } else {
        return printf("Valores Inseridos Incorretos.");
    }
}
/**
 ( (num1*2)+(num2*2)+(num3*3) ) / = 2+2+3
*/
int main(void){
    functionNotasAlunos( 2.1 , 1.2 , 3.2 , 'p');
    return 0;
}