#include <stdio.h>
#include <stdio.h>

void check_spelling();
void correct_errors();
void display_errors();

int main(void) {
	char ch;

	printf("1. Checar Ortografia\n");
	printf("2. Corrigir Erros de Ortografia\n");
	printf("3. Mostrar Erros de Ortografia\n");
	printf("Pressione Qualquer Outra Tecla para Abandonar\n");
	printf("		Entre com sua escolha:		");

	ch = getchar();

	switch (ch) {
	case '1':
		check_spelling();
		break;
	case '2':
		correct_errors();
		break;
	case '3':
		display_errors();
		break;	
	default:	
		printf("Nenhuma opção selecionada");
	}

	return (0);
}

// Implementação das funções
void check_spelling() {
    printf("Verificando ortografia...\n");
}

void correct_errors() {
    printf("Corrigindo erros...\n");
}

void display_errors() {
    printf("Exibindo erros...\n");
}