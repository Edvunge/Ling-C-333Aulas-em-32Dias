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
	strcpy(livro1.author, "Edvaldo vunge ");	
	livro1.price = 12.50;

	strcpy(livro2.title, "Linguagem c");
	strcpy(livro2.author, "Luis Damas ");
	livro2.price = 33.23;

	strcpy(livro3.title, "Redes de computadores");
	strcpy(livro3.author, "Tanenbaw S. Lewis");
	livro3.price = 123.99;

	// = = = = = = = = | CALCULO DO MAIOR VALOR 
	if (livro1.price > livro2.price && livro1.price > livro3.price) {
		maxPriceForBook = livro1.price;
	} else if (livro2.price > livro1.price && livro2.price > livro3.price) {
		maxPriceForBook = livro2.price;
	} else if (livro3.price > livro1.price && livro3.price > livro2.price) {
		maxPriceForBook = livro3.price;
	}
	
	printf("\n\n");	
	
	// = = = = = = = = | CALCULO DO MENOR VALOR 
	if (livro1.price < livro2.price && livro1.price < livro3.price) {
		minPriceForBook = livro1.price;
	} else if (livro2.price < livro1.price && livro2.price < livro3.price) {
		minPriceForBook = livro2.price;
	} else if (livro3.price < livro1.price && livro3.price < livro2.price) {
		minPriceForBook = livro3.price;
	}

	printf("\n\t ========== QUALITY PRICE ========== \n");

	printf("\nDates for Book Number 1#");
	printf("\nThe Title is:  %s", livro1.title);
	printf("\nThe Author is: %s", livro1.author);
	printf("\nThe Price is:  %.2f", livro1.price);
	
	printf("\n\n");	
	printf("\nDates for Book Number 2#");
	printf("\nThe Title is:  %s", livro2.title);
	printf("\nThe Author is: %s", livro2.author);
    printf("\nThe Price is:  %.2f", livro2.price);

	printf("\n\n");	
	printf("\nDates for Book Number 3#");
	printf("\nThe Title is:  %s", livro3.title);
	printf("\nThe Author is: %s", livro3.author);
    printf("\nThe Price is:  %.2f", livro3.price);

	printf("\n\n");	
	printf("\nMin Price For Book: %.2f", minPriceForBook);
	printf("\nMax Price For Book: %.2f\n", maxPriceForBook);
	
	return (0);
}
