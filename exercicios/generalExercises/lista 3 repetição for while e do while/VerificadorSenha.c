#include <stdio.h>
#include <stdlib.h>

/*
	2) 	Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
		de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
		informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
		encerrado. Considere que a senha correta é o valor 123456.
*/

int main() {
	
	int senha, senhaValida = 123456;
	
	printf("digite a sua senha:?");
	scanf("%d",&senha);
		
	while( senha != senhaValida ){
		printf("\nSenha Invalida!\nDigite a senha correta: ");
		scanf("%d",&senha);
	}
	printf("\n\tAcesso Permitido.\n");
	
	return 0;
}
