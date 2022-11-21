#include <stdio.h>
#include <stdlib.h>

/*
	8) Escreva um programa em C que funcione como uma calculadora. 
	O programa deve apresentar um menu ao usu�rio da seguinte forma:
	
	1 � Somar
	2 � Subtrair
	3 � Multiplicar
	4 � Dividir
	0 � Sair
	
		Uma estrutura do tipo switch deve ser utilizada para realizar cada opera��o em um case. Ap�s a
	escolha da opera��o, dois valores devem ser pedidos ao usu�rio para realizar a opera��o escolhida.
	Se a opera��o escolhida for a 4 o dividendo n�o pode ser zero, um novo valor deve ser solicitado. 
	O programa deve funcionar at� que o usu�rio escolha a op��o 0 (op��o de sa�da).
*/

int main() {
	
	int i, opcao;
	float num1, num2, soma, mult, div, sub;
	
		do {
		
			printf("\n\t**************** / Menu do Sistema / \n\n");
			printf("\n\t\t1 - Somar.\n");
			printf("\n\t\t2 - Subtrair.\n");
			printf("\n\t\t3 - Multiplicar.\n");
			printf("\n\t\t4 - Dividir.\n");
			printf("\n\t\t0 - sair.\n");
			printf("\n\t************************************\n\n");
			printf("\n\tEscolhe uma opcao do menu.\n\t");
			scanf("%d",&opcao);
			
			switch(opcao){
				
				case 1:
					printf("\n\tSOMA:\n\n");
					
						printf("\n\tDigite o Primeiro valor:\n\t");
						scanf("%f",&num1);
			
						printf("\n\tDigite o Segundo valor:\n\t");
						scanf("%f",&num2);
			
					soma = (num1 + num2);
					printf("\n\tO %.1f e o %.1f a soma: %.1f",num1 ,num2 ,soma);
				break;
				
				case 2:
					printf("\n\tSubtraccao:\n\n");
					
						printf("\n\tDigite o Primeiro valor:\n\t");
						scanf("%f",&num1);
		
						printf("\n\tDigite o Segundo valor:\n\t");
						scanf("%f",&num2);
			
					sub = (num1 - num2);
					printf("\n\tO %.1f e o %.1f a subtracao: %.1f",num1 ,num2 ,sub);
				break;
				
				case 3:
					printf("\n\tMultiplicacao:\n\n");
			
							printf("\n\tDigite o Primeiro valor:\n\t");
							scanf("%f",&num1);
						
							printf("\n\tDigite o Segundo valor:\n\t");
							scanf("%f",&num2);
						
						mult = (num1 * num2);
						printf("\n\tO %.1f e o %.1f a multiplicacao: %.1f",num1 ,num2 ,mult);
				break;
			
				case 4:
					// 	Se a opera��o escolhida for a 4 o dividendo n�o pode ser zero, um novo valor deve ser solicitado. 
					printf("\n\tDivisao:\n\n");
				
						printf("\n\tDigite o Primeiro valor:\n\t");
						scanf("%f",&num1);
			
						while(num2 == 0){
							printf("N�o existe divisao por zero!\nDigite outro valor: ");
							scanf("%d\n",&num2);
						}
			
						div = (num1 / num2);
						printf("\n\tO %.1f e o %.1f a divisao: %.1f",num1 ,num2 ,div);
				break;
				case 0:
					printf("\nSaindo...\n");
				break;
				default:
					printf("\nOpcao invalida!\n");		
			}	
		} while ( opcao != 0 );
	return 0;
}
