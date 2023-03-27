#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
        Exerc�cio de c
        Calculadora inteligente
        8. Pot�ncia de um n�mero
        9. Raiz quadrada de um n�mero
        10. Par ou �mpar
        11. N�meros primos
        12. Tabuada
        13. Fatorial de um n�mero
        14. Contagem crescente de 1 a 100
        15. Contagem decrescente 100 & 1
        16. Exponencial de um n�mero
        17. Radicia��o
        18. ..
        19. ..
        20. ..
*/

int main(){

// Sec��o De Variaveis. 
    int num1 ,num2 ,antecessor ,sucessor;
    int sucessorSegundoNumero ,antecessorNum1 ,antecessorNum2, sucessorNum1;
    const int opcao ,opcao2 ,opcao3 ,opcao4;
    int soma = num1 + num2;
    int subtraccao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;
    double modulo = num1 % num2;


    printf("Indique um numero inteiro?");
    scanf("%d", &num1);

    printf("Indique um outro numero inteiro?");
    scanf("%d",&num2);

    printf("Digite qual a opera��o que deseja: \n"); 
    printf("(1) adicao , (2) subtracao, (3) multiplicacao , (4) divisao e o (5) modulo.");
    printf("Digite qual a opera��o que deseja:"); 
    printf("(6) antecessor , (7) sucessor, (8) equacao1, (9) equacao2 ");
    opcao;

    switch (opcao){
        case '1':
            printf("A soma entre %d + %d e =  %d ", num1, num2 ,soma);
        break;
        
        case '2':
            printf("A soma entre %d - %d e =  %d " ,num1 , num2 ,subtraccao);
        break;
            
        case '3':
            printf("A soma entre %d * %d e =  %d " , num1 , num2 ,multiplicacao);
        break;

        case '4':
            printf("A soma entre %d / %d e =  %d " , num1 , num2 ,divisao);
        break;
            
        case '5':
            printf("A soma entre %d %% %d e =  %d " , num1 , num2 ,modulo);
        break;

        case '6':
            printf("Quer saber o antecessor do primeiro numero, marque (11)? ou segundo (22)? ");
            printf("44 para saber o sucessor");
        opcao2;

        switch (opcao2) {
            case '11':
                antecessorNum1 = num1 - 1;
                printf("o seu antecessor do %d e: %d ", num1 , antecessorNum1);
            break;
                
            case '22':
                antecessorNum2 = num2 - 1;
                printf("o seu antecessor do %d e: %d ", num2 , antecessorNum2);
            break;
                
            default:
                printf("DESCULPA! mas este texto � invalido.");        }
            break;    

            case '44':
                printf("Quer saber o sucessor do primeiro numero, marque (45)? ou segundo (46) ?");
                opcao3;

                switch (opcao3) {
                    case '45':
                        sucessorNum1 = num1 + 1;
                        printf("O seu sucessor do %d e: %d ", num1 , sucessorNum1);
                    break;
                    
                    case '46':
                        sucessorSegundoNumero = num2 + 1;
                        printf("O seu sucessor do %d e: %d ", num2 , sucessorSegundoNumero);
                    break;

                    default:
                        printf("DESCULPA! mas este texto e invalido.");
                }
            break;
            
            case '8':
                printf("Equa��o do 1� grau e toda equa��o que pode ser expressa na forma ax+b=0, com �a� diferente de zero ");

                int valorDeXis = (  - ( num2 / num1) );
                printf("O resultado do calculo da equa��o do primeiro grau e: " , valorDeXis);
            break;

            case '9':
                printf("Equa��o do 2� grau � toda equa��o que pode ser expressa na forma ax+b=0, com �a� diferente de zero ");

                printf(" %n indique o terceiro numero inteiro?");
                int num3;

                /*
                 Se o valor encontrado para delta for negativo,
                 n�o precisa fazer mais nenhum c�lculo e a resposta ser� que a equa��o n�o possui ra�zes reais.
                 Caso o valor do delta seja igual ou maior que zero,
                 devemos substituir todas as letras pelos seus valores na f�rmula de Bhaskara e calcular as ra�zes.
                */

                // F�rmula de DELTA
                int formulaDeDelta = ((num2*num2)-((4)*(num1)*(num3)));

                if(num1 != 0){

                    if (formulaDeDelta >= 0 ) {

                        // F�rmula de Bhaskara
                        double xisUm =(((-num2) + sqrt(formulaDeDelta))/((2)*(num1)));
                        double xisDois = (((-num2) - sqrt(formulaDeDelta))/((2)*(num1)));

                        printf(" Assim, as ra�zes da equa��o %d x2 %d x %d = 0 s�o x1 = %d e x2 = %d " ,num1 ,num2 ,num3 ,xisUm ,xisDois);
                    }
                    else
                        printf(" A equa��o n�o possui ra�zes reais ");
                }
                break;
            default:
                printf("Numero invalido, !!ESTA OPERA��O N�O EXISTE!!!");
    return 0;
    }
}
