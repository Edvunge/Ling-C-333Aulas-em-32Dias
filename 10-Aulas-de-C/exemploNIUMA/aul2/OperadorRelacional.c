#include <stdio.h>
#include <stdlib.h>

/*

Operadores Relacionais (1 / 0)
	< menor que
	> maior que
	<= menor igual que
	>= maior igual que
	== igual que
	!= diferente de
*/

int main(void) {
    int x = 2, y = 4;

    // < menor que
    y > x;
    printf("4 > 2 = %d\n",(y > x) ); // 1 true (verdadeiro)
    printf("4 < 2 = %d\n",(y < x) ); // 0 false (falso)
    return (0);
}