#include <stdio.h>
#include <stdlib.h>


/*
	39. A importancia de R$ 780.000,00 sera dividida entre tres ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador receber´a 46%;
 O segundo receber´a 32%;
 O terceiro receber´a o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/

int main() {

	float valorPremio = 780.000;
	float playerOne = 46;
	
	float descontoPlayerOne = ( valorPremio * playerOne / 100 );
	valorPremio - descontoPlayerOne;
	
	valorPremio;
	float playerTwo = 32;
	
	float descontoPlayerTwo = ( valorPremio * playerTwo / 100 );
	valorPremio - descontoPlayerTwo;
	
	
	float playerThree;
	float descontoPlayerThree = ( valorPremio * playerThree / 100 );
	valorPremio - descontoPlayerThree;
	
	printf("Ganhador 1. Ganhou: %f\n",descontoPlayerOne);
	printf("Ganhador 2. Ganhou: %f\n",descontoPlayerTwo);
	printf("Ganhador 3. Ganhou: %f\n",descontoPlayerThree);
	
	return 0;
}
