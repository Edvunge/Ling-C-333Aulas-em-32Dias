#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
3. Calculadora Científica Simplificada

Descrição:
Crie uma calculadora em C que execute operações básicas e funções científicas (como raiz quadrada, potência, logaritmo).

Requisitos:
1. Operações Básicas:
   - Soma, subtração, multiplicação, divisão.
   - Tratar divisão por zero.

2. Funções Científicas:
   - Potência (`x^y`).
   - Raiz quadrada.
   - Logaritmo natural (usar `math.h`).
   - Seno/cosseno (em radianos).

3. Interface:
   - Menu com opções numéricas (ex.: `1-Soma, 2-Potência`).
   - Permitir que o usuário insira os valores necessários.

4. Extras (Opcionais):
   - Histórico das últimas operações.
   - Modo contínuo (usar resultado anterior em nova operação).

*/


int main(void) {

// 1. operaçoes basicas: soma, subtracçao, multiplicacao, divisao, 
// tratar divisao por zero
    int adition, subtration, multiplication, division;
    int choice, number1, number2;

    printf("Escolha uma operacao: ");
    printf("1 - SOMA ");
    printf("2 - SUBTRACCAO ");
    printf("3 - MULTIPLICACAO ");
    printf("4 - DIVISAO ");
    scanf("%d",&choice);

    switch(choice) {
        case 1:// soma 
            
            printf("Digite o primeiro valor: ");
            scanf("%d",&number1);

            printf("Digite o segundo valor: ");
            scanf("%d",&number2);
            
            adition = (number1 + number2);
            printf("A SOMA EH: %d", adition);
            break;
        case 2:// sub
             
            printf("Digite o primeiro valor: ");
            scanf("%d",&number1);

            printf("Digite o segundo valor: ");
            scanf("%d",&number2);
           
            if (number1 > number2) { 
                subtration = (number1 - number2);
                printf("A SUBTRATION EH: %d", subtration);
            } else {
                subtration = (number2 - number1);
                printf("A SUBTRATION EH: %d", subtration);
            }
            break;
        case 3: // mult
             
            printf("Digite o primeiro valor: ");
            scanf("%d",&number1);

            printf("Digite o segundo valor: ");
            scanf("%d",&number2);
            
            multiplication = (number1 * number2);
            printf("A MULTIPLICATION EH: %d", multiplication);
            break;
        case 4:// div
            do {   
                
                printf("Digite o primeiro valor: ");
                scanf("%d",&number1);

                printf("Digite o segundo valor: ");
                scanf("%d",&number2);
            
                division = (number1 / number2);
            } while(number1 > 0 && number2 > 0);
            
            printf("A DIVISION EH: %d", division);
            break;
        default:
            printf("VALUE INVALID!");
    }

// 2. funçoes cientificas
//  - potencia (x^y)
//  - raiz quadrada
//  - logaritmo natural (usar math.h)
//  - seno/cosseno (sem radianos)
//

// 3. Interface
//  - Menu com opçoes numericas (1-soma , 2-potencia, ...)


// 4. Extras (Opcionais)
//  - Historico das ultimas operaçoes 
//  - Modo continuo (usar resultado anterior em nova operaçao)
    return (0);
}

