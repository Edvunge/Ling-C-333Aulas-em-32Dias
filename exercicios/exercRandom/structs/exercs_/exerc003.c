#include <stdio.h>
#include <string.h>

/*
3. Crie uma estrutura chamada Book para armazenar detalhes do livro como título, 
autor e preço. Escreva um programa em C para inserir detalhes de três livros, 
encontrar os livros mais caros e os de menor preço e exibir suas informações. 
*/

struct Book {
	char title[25];
	char author[25];
	double price;
};

int main(void) {
	
	double maxPriceForBook = 0.0;
	double minPriceForBook = 0.0;

	struct Book livro1;
    struct Book livro2;
	struct Book livro3;

	strcpy(livro1.title, "Java basico");
	strcpy(livro1.author, " Edvaldo vunge ");	
	livro1.price = 12.50;

	strcpy(livro2.title, "Linguagem c");
	strcpy(livro2.author, " Luis Damas ");
	livro2.price = 33.23;

	strcpy(livro3.title, "Redes de computadores");
	strcpy(livro3.author, " Tanenbaw S. Lewis");
	livro3.price = 123.99;

	// = = = = = = = = | CALCULO DO MAIOR VALOR 
	if (livro1.price > livro2.price && livro1.price > livro3.price) {
		printf("1 preço - O livro mais Caro eh %.2f", livro1.price);
	} else if (livro2.price > livro1.price && livro2.price > livro3.price) {
		printf("2 preço - O livro mais Caro eh %.2f", livro2.price);
	} else if (livro3.price > livro1.price && livro3.price > livro2.price) {
		printf("3 preço - O livro mais Caro eh %.2f", livro3.price);
	}
	
	printf("\n\n");	
	
	// = = = = = = = = | CALCULO DO MENOR VALOR 
	if (livro1.price < livro2.price && livro1.price < livro3.price) {
		//printf("1 preço - O livro com menor valor eh %.2f", livro1.price);
		minPriceForBook = livro1.price;
	} else if (livro2.price < livro1.price && livro2.price < livro3.price) {
		//printf("2 preço - O livro com menor valor eh %.2f", livro2.price);
		minPriceForBook = livro2.price;
	} else if (livro3.price < livro1.price && livro3.price < livro2.price) {
		//printf("3 preço - O livro com menor valor eh %.2f", livro3.price);
		minPriceForBook = livro3.price;
	}
	printf("\nMin Price For Book: %.2f",minPriceForBook);
	/*
	printf("%s", livro1.title);
	printf("%s", livro1.author);
	printf("%.2f", livro1.price);
	
	printf("\n\n");	

	printf("%s", livro2.title);
	printf("%s", livro2.author);
    printf("%.2f", livro2.price);	
	*/
	
	

	/*
	int num[] = {1,2,3,4,5,6,7,8,9,10,20,21,22,23,24,25,26,27,28,29};
	int maxNum = 0;

	for (int i = 0; i < 20; i++) {
		if (num[i] > maxNum) {
			maxNum = num[i];
		}
	}

	printf("o maior valor eh: %d\n", maxNum);
	*/
	return (0);
}
