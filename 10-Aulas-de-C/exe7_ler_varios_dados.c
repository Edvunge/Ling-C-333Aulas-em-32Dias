#include <stdio.h>
#include <stdlib.h>

/*
7. Faça um programa em C que leia o nome o endereço e o telefone de um cliente e ao final,
  imprima esses dados.
*/

int main(void){
    
    char nome[10], endereco[15];
	int telf;

	printf("Digite seu nome");
	fgets(nome, 10, stdin);

	printf("Digite seu endereco");
    fgets(endereco, 15, stdin);
	
	printf("Digite seu numero de telf:");
    scanf("%d",&telf);
	
	printf("o seu nome:   %s",nome);
	printf("a sua morada: %s",endereco);
	printf("o seu numero de telf: %d",telf);
    
    return (0);
}