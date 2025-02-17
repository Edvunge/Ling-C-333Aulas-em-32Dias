#include <stdio.h>

int main(void) {
        int escolha, n;
        int saldoInicial = 290;

        do {
                printf("= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =");
                printf("\n#=#=#          ESCOLHA UMA OPCAO:                     #=#=#\n");
                printf("= = = = = = = = = = = = = = = = = = = = = = = = = = = = = =\n");
                printf("1. Depositar dinheiro\n");  
                printf("2. Sacar dinheiro\n");  
                printf("3. Consultar saldo\n");  
                printf("4. Sair\n\n\n");
                scanf("%d",&escolha);


                switch (escolha) {
                    case 1: // depositar dinheiro
/*

3. Depósito de Dinheiro (Usando for)  
- O usuário pode fazer até 3 depósitos seguidos antes de voltar ao menu principal.  
- Se o usuário tentar fazer mais de 3 depósitos seguidos, 
    uma mensagem de limite atingido deve ser exibida. 

*/                  
                    

                    break;
                    case 2:
                        printf("2. Sacar Dinheiro...\n");
                        break;
                    case 3:
                        printf("3. Consultar Saldo...\n");
                        break;        
                    default:
                        printf("4. SAIR...\n");
                        break;
                }
                printf("\n\nQuer continuar as operacoes: (sim = 1 , nao = 4) \n");
                scanf("%d",&n);
        } while (n != 4);    
    return (0);
}
/* VARIAVEIS:
    saldoInicial
    menu

- - - - - - - - - - 
    do {
        if () {
            - - -
            - - -
            - - -
        }
        - - -
        - - -
        - - -
    } while( n != 4);
- - - - - - - - - -    
*/