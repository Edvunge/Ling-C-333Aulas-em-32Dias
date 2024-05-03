#include <stdio.h>
#include <stdlib.h>
/*
Fácil 9 -   Faça um programa que receba a idade de dez pessoas e que calcule e 
            mostre a quantidade de pessoas com idade maior ou igual a 18 anos.
*/
int main(){
    int i;
    for(i = 0; i < 10; i++){
        printf("indique a sua Idade:?");
        scanf("%d",&i);    
    }

    /*
    num =  0
    maiorDe18 = 0
    menorDe18 = 0
    igualA18 = 0 
    
    while num < 3:
        nome = input("Digite o nome da pessoa")
        idade = input("digite a idade do(a)" + nome)
    if int(idade) > 18:
        maiorDe18 = maiorDe18 + 1
    elif int(idade)< 18:
        menorDe18 = menorDe18 + 1
    else:
        igualA18 = igualA18 + 1
    num = num + 1
    
print ("maiores que 18: ", maiorDe18)
print ("menor que 18", menorDe18)
print ("igual a 18", igualA18)
    */
    return 0;
}