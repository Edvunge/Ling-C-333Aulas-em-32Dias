#include <stdio.h>
#include <stdlib.h>

/*
	24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
	possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). 
	Faca um programa em que o usuario entre com o valor e o estado destino do
	produto e o programa retorne o preco final do produto acrescido do imposto do estado
	em que ele sera vendido. 
	Se o estado digitado nao for valido, mostrar uma mensagem de erro.
*/
int main() {
	
	int estado; 
	float produto, discMg, discRj, discSp, discMs, mg, rj, sp, ms;
	
	printf("\nescolha uma numero para o estado:\n ( 1 - MG 7%; 2- SP 12%; 3 - RJ 15%; 4 - MS 8% ):\n");
	scanf("%d",&estado);
	
	switch(estado){
		case 1:
			printf("insira o valor do produto:?\n");
			scanf("%f",&produto);
			
			double discMg = ( produto * 7 / 100);
        	mg = produto + discMg;
			
			printf("\nO preco final do produto acrescido do imposto: %.2f",mg);
		break;
		case 2:
			printf("insira o valor do produto:?\n");
			scanf("%f",&produto);
			
			double discSp = ( produto * 12 / 100);
        	sp = produto + discSp;
			
			printf("\nO preco final do produto acrescido do imposto: %.2f",sp);
		break;
		case 3:
			printf("insira o valor do produto:?\n");
			scanf("%f",&produto);
			
			double discRj = ( produto * 15 / 100);
        	rj = produto + discRj;
			
			printf("\nO preco final do produto acrescido do imposto: %.2f",rj);
		break;
		case 4:
			printf("insira o valor do produto:?\n");
			scanf("%f",&produto);
			
			double discMs = ( produto * 8 / 100);
        	ms = produto + discMs;
			
			printf("\nO preco final do produto acrescido do imposto: %.2f",ms);
		break;
		default:
			printf("\nERRO! , Estado Invalido.");
		break;
	}
	return 0;
}
