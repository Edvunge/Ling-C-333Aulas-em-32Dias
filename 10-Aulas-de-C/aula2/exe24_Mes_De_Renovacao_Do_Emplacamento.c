#include <stdio.h>

int main() {
    char placa[8];
    int ultimoDigito;

    // Solicita ao usuário que insira a placa do carro
    printf("Digite a placa do carro (formato ABC-1234): ");
    scanf("%s", placa);

    // Obtém o último dígito da placa
    ultimoDigito = placa[7] - '0';

    // Determina o mês de renovação com base no último dígito da placa
    switch (ultimoDigito) {
        case 1:
        case 2:
            printf("O emplacamento deve ser renovado em Janeiro.\n");
            break;
        case 3:
        case 4:
            printf("O emplacamento deve ser renovado em Fevereiro.\n");
            break;
        case 5:
        case 6:
            printf("O emplacamento deve ser renovado em Março.\n");
            break;
        case 7:
        case 8:
            printf("O emplacamento deve ser renovado em Abril.\n");
            break;
        case 9:
        case 0:
            printf("O emplacamento deve ser renovado em Maio.\n");
            break;
        default:
            printf("Placa inválida.\n");
    }

    return 0;
}
