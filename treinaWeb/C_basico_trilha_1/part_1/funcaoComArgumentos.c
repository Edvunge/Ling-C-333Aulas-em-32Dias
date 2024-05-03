#include <stdio.h>


void Saudacao();
int Soma();
float Sub(float num3, float num4);


int main(void) {
    Saudacao();
    float x = 20.5;
    float y = 12.5;
    float result = Sub(x, y);
    int resultado = Soma();

    printf("Valor da variavel resultado: %d\n\n", resultado);
    printf("Valor da variavel result: %.2f\n\n", result);
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

float Sub(float num3, float num4){
    return num3-num4;
}
