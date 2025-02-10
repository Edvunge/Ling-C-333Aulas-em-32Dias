#include <stdio.h>
// conta espaços

int main(void) {
	char s[80], *str;
	int space;

	printf("Digite uma string: ");
	gets(s);
	str = s;

	for (space = 0; *str; str++) {
		if (*str != ' ') continue;
		space++;
	}
	printf("%d espaços\n", space);
	return (0);
}
