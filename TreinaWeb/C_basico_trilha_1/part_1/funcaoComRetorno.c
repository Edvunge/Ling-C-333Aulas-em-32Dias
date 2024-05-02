#include <stdio.h>

int main(void) {
    Saudacao();

    int resultado = Soma();
    printf("Valor da variavel resultado: %d\n\n", resultado);
    return (0);
}


void Saudacao() {
    printf("Boa tarde\n\n");
}

int Soma(){
    int num1, num2;

    num1 = 30;
    num2 = 15;

    return num1+num2;
}