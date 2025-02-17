#include <stdio.h>

/*

3. Depósito de Dinheiro (Usando for)  
- O usuário pode fazer até 3 depósitos seguidos antes de voltar ao menu principal.  
- Se o usuário tentar fazer mais de 3 depósitos seguidos, 
    uma mensagem de limite atingido deve ser exibida. 

*/  

int main() {
    int numrsDepositos = 6;
    for (int i = 1; i <= numrsDepositos; i++) {
        printf("%d\n",i);
        if (numrsDepositos > 3) {
            printf("O LIMITE FOI ATINGIDO\n");
            break;
        } 
    }
    return (0);
}