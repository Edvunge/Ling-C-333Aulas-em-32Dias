#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numPessoas;
    float valorDespesa, gorjeta, valorTotal, valorPorPessoa;


    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorjeta, &numPessoas);

    valorTotal = valorDespesa * gorjeta/100 + valorDespesa;
    valorPorPessoa = valorTotal / numPessoas;
    
    printf("Cada um ira pagar R$%.2f\n", valorPorPessoa);
    return (0);
}