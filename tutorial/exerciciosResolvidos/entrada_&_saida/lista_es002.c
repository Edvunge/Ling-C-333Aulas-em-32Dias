#include <stdio.h>
#include <math.h>

int main(void) {

    float fTotal, fDolar, fSalario, fCustoCasa, fCasas, fSobras;

    printf("\nEntre com o valor do dolar: ");
    scanf("%f", &fDolar);

    printf("\nEntre com o valor do Salario: ");
    scanf("%f", &fSalario);

    fTotal = 10000000 * fDolar;

    fCustoCasa = (fSalario*150);

    fCasas = truncf(fTotal/fCustoCasa);
    fSobras = fTotal - (fCasas*fCustoCasa);

    printf("\nForam construidos %.0f casas e sobrou %.2f reais.", fCasas, fSobras);
    printf("\nCada casa custou %.2f reais.", fCustoCasa);
    return (0);
}
