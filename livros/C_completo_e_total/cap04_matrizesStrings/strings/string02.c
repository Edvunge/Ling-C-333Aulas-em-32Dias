#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[80], s2[80];

	gets(s1);
	gets(s2);

	printf("comprimentos: %lu %lu\n", strlen(s1), strlen(s2));

	if (!strcmp(s1, s2)) printf("As strings sao iguais\n");
	strcat(s1, s2);
	printf("%s\n", s1);

	strcpy(s1, "Isso é um teste.\n");
	printf(s1,"%s");
	
	if (strchr("alo", 'o')) 
		printf("o esta em alo\n");
	
	if (strstr("ola aqui", "ola")) 
		printf("ola encontrado");

	return (0);
}
