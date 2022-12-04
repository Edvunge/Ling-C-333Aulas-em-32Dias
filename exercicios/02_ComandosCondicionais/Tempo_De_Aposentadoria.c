#include <stdio.h>
#include <stdlib.h>

/*
22. Leia a idade e o tempo de servico de um trabalhador e escreva se ele pode ou nao se
aposentar. As condicoes para aposentadoria sao
	 Ter pelo menos 65 anos,
	 Ou ter trabalhado pelo menos 30 anos,
	 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main() {
	
	int idade, tempo;
	
	printf("insira a idade:?\n");
	scanf("%d",&idade); 
	
	printf("insira o tempo de serviço de um trabalhador:?\n");
	scanf("%d",&tempo);
	// 
	if( (idade > 65) || (tempo > 30) || (idade > 60 && tempo > 25) ){
		printf("\nPode se Aposentar.");
	} else {
		printf("\nNao Pode se Aposentar.");
	}
	return 0;
}
