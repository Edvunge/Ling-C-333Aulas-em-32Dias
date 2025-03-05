// lista_mat001.c
#include <stdio.h>
#include <stdlib.h>

#define QTD_L 4
#define QTD_C 3

int main(void) {

	int matA[QTD_L][QTD_C], matB[QTD_L][QTD_C], matC[QTD_L][QTD_C];

	int iL, iC;

	for(iL = 0; iL < QTD_L; iL++) {
		for(iC = 0; iC < QTD_C; iC++) {
			printf("Entre com o valor para A[%1d][%1d]: ", iL, iC);
			scanf("%d",&matA[iL][iC]);
		}
	}

	for(iL = 0; iL < QTD_L; iL++) {
		for(iC = 0; iC < QTD_C; iC++) {
			printf("Entre com o valor para B[%1d][%1d]: ", iL, iC);
			scanf("%d",&matB[iL][iC]);
		}
	}

	for(iL = 0; iL < QTD_L; iL++) {
		for(iC = 0; iC < QTD_C; iC++) {
			matC[iL][iC] = (matA[iL][iC] == matB[iL][iC]); 
		}
	}

	printf("\nMatriz A\tMatriz B\tMatriz C");
	for ( iL = 0; iL < QTD_L; iL++) {
		for ( iC = 0; iC < QTD_C; iC++) {
			printf("\n[%1d][%1d] = %d", iL, iC, matA[iL][iC]);
			printf("\n[%1d][%1d] = %d", iL, iC, matA[iL][iC]);
			printf("\n[%1d][%1d] = %d", iL, iC, matA[iL][iC]); 
		}
	}
	return (0);
}
