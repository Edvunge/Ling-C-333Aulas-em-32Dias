#include <stdio.h>

int main(void){
	char ch;

	printf("1. Verificar Ortografia\n");
	printf("2. Corrigir Erros de Ortografia\n");
	printf("3. Mostrar Erros de Ortografia\n");
	printf("4. Abandonar\n");
	printf("	Digite sua escolha: ");

	do {
		ch = getchar(); // le do teclado a seleção
		switch(ch) {
			case '1':
				check_spelling();
				break;
			case '2':
				correct_errors();
				break;
			case '3':
				display_errors();
				break;
			case '4':
				exit(0); // retorna ao OS	
		}
	} while(ch != '1' && ch != '2' && ch != '3');
}
