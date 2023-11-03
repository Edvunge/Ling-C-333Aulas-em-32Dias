#include <stdio.h>
#include <stdlib.h>
/*
4) Crie um programa que permita ao 
usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. 
Utilize como taxa de câmbio $1 igual a R$5.30.
*/
int main(void){
    float valorEmReal, valorEmDolar;
    char opcao;
    
    printf("Escolha (: d) para converter de real    para dollar\n");
    printf("Escolha (: r) para converter de dollar  para real\n");
    scanf("%c",&opcao);

    switch (opcao) {
    case 'd':
        printf("Digite o valor em reais a ser convertido:\n");
        scanf("%f", &valorEmReal);
        // => real para dollar
        valorEmDolar = valorEmReal / 5.3;
        printf("Valor em dolar: US%.2f\n", valorEmDolar);
        break;
    case 'r':      
        printf("Digite o valor em dollar a ser convertido:\n");
        scanf("%f", &valorEmDolar);
        // => dollar para real 
        valorEmReal = valorEmDolar / 1;
        printf("Valor em real: real%.2f\n", valorEmReal);
        break;
    default:
        printf("Caractere Inexistente.");
        break;
    }
    return 0;
}