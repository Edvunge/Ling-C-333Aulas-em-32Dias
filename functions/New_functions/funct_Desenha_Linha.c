#include <stdio.h>
#include <stdlib.h>
/*
16. Faca uma funcao chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando
varios sımbolos de igual (Ex: ========). A funcao recebe por parametro quantos sinais
de igual serao mostrados.
*/
int functionDesenhaLinha(int sinais){
    sinais = 0;
    while(sinais < 9){
       return printf("="); 
       sinais++;
    }
}

int main(){
    functionDesenhaLinha(2);
    return 0;
}