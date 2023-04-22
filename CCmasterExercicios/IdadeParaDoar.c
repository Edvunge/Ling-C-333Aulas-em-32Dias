#include <stdio.h>
#include <stdlib.h>
/*
Fácil 26- Para doar sangue é necessário ter entre 18 e 67 anos. 
Faça um aplicativo que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. 
Use alguns dos operadores lógicos OU (||) e E (&&).  
*/
int main(){
    int idade;
    
    printf("Digite a sua idade:?");
    scanf("%d",&idade);

    if(idade >= 18 && idade < 67){
        printf("Pode doar");
    } else {
        printf("Nao pode doar.");
    }
    return 0;
}