#include <stdio.h>

int main(void){

	char str[20];
	int x;

	for (x = 0; x < 3 && strcmp(str, "senha"); ++x){
		printf("Digite a senha por favor:");
		gets(str);	
	}

	if (x == 3) return;
	return (0);
}
