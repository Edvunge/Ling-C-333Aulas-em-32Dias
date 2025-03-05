#include <stdio.h>

/*
3. Crie uma estrutura chamada Book para armazenar detalhes do livro como título, 
autor e preço. Escreva um programa em C para inserir detalhes de três livros, 
encontrar os livros mais caros e os de menor preço e exibir suas informações. 
*/

struct book {
	char title[25];
	char author[25];
	double price;
};

int main(void) {
	
	int num[] = {1,2,3,4,5,6,7,8,9,10,20,21,22,23,24,25,26,27,28,29};
	int maxNum = 0;

	for (int i = 0; i < 20; i++) {
		if (num[i] > maxNum) {
			maxNum = num[i];
		}
	}

	printf("o maior valor eh: %d\n", maxNum);
	printf("FIM DO CICLO\n");
	return (0);
}
