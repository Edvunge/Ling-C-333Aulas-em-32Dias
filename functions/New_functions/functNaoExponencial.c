#include <stdio.h>
#include <stdlib.h>
/*
18. Faca uma funcao que receba por parametro dois valores X e Z. Calcule e retorne o
resultado de X^Z para o programa principal. Atencao nao utilize nenhuma funcao pronta
de exponenciacao.
*/
int functionMulplication(int x, int z){
    int mult = x * z;
    return printf("o resultado de X elevado Z e: %d",mult);
}
int main(void){
    functionMulplication(2, 6);
    return 0;
}