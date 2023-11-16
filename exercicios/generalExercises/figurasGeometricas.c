#include <stdio.h>
#include <stdlib.h>

/*--------------  Variaveis Globais:  --------------*/  
float a, b, c, longitude, area, lado;
float perimetro, altura, diagonalMaior;
float diagonalMenor, raio;
const float PI = 3.1415;
int escolha;
/*--------------  Variaveis Globais:  --------------*/ 


/*--------------  Prototipo de Funções:  --------------*/ 
void trianguloFunction();
void quadradoFunction();
void retanguloFunction();
void paralelogramoFunction();
void losangoFunction();
void trapezioFunction();
void circuloFunction();
/*--------------  Prototipo de Funções:  --------------*/ 

int main(void) {
    
    printf("escolha a opcao desejada: \n");
    printf("1 - triangulo\t 2 - quadrado\t 3 - retangulo\n");
    printf("4 - paralelogramo\t 5 - losango\t 6 - trapezio\n");
    printf("7 - circulo\t 0 - Sair\n");
    scanf("%d",&escolha);

    switch (escolha) {
    case 0:
        // sair -> 0
        exit(0);
        break;
    case 1:// triangulo
        trianguloFunction();
        break;
    case 2:// quadrado
        quadradoFunction();
        break;
    case 3:// retangulo
        retanguloFunction();
        break;
    case 4:// paralelogramo
        paralelogramoFunction();
        break;
    case 5:// losango
        losangoFunction();
        break;
    case 6:// trapezio
        trapezioFunction();
        break;
    case 7:// circulo
        circuloFunction();
        break;
    default:
        printf("Valor Invalido!\n");
        break;
    }
    return (0);
}

/*--------------  FUNÇÃO TRIANGULO:  --------------*/ 
void trianguloFunction (){
        // triangulo
        printf("Digite os 3 lados:\n");
        scanf("%f%f%f",&a ,&b ,&c);

        printf("Digite a altura: \n");
        scanf("%f",&altura);

        // perimetro
        perimetro = (a+b+c);
        // area
        area = (b*altura)/2;

        printf("O Perimetro do Triangulo: %.2f\n",perimetro);
        printf("A Area do Triangulo: %.2f\n",area);
}

/*--------------  FUNÇÃO QUADRADO:  --------------*/ 
void quadradoFunction(){
    // quadrado
        printf("Digite o valor:\n");
        scanf("%f",&lado);

        // perimetro
        perimetro = (4*lado);
        // area
        area = (lado*lado);

        printf("O Perimetro do Triangulo: %.2f\n",perimetro);
        printf("A Area do Triangulo: %.2f\n",area);
}

/*--------------  FUNÇÃO RETANGULO:  --------------*/ 
void retanguloFunction(){
        // triangulo
        printf("Digite os 3 lados: \n");
        scanf("%f%f%f",&a ,&b ,&c);

        printf("Digite a altura: \n");
        scanf("%f",&altura);

        // perimetro
        perimetro = (a+b+c);
        // area
        area = (b*altura)/2;

        printf("O Perimetro do Triangulo: %.2f\n",perimetro);
        printf("A Area do Triangulo: %.2f\n",area);
}

/*--------------  FUNÇÃO PARALELOGRAMO:  --------------*/ 
void paralelogramoFunction(){
        // paralelogramo
        printf("Digite O lado a e b: \n");
        scanf("%f%f",&a ,&b);

        printf("Digite o valor da altura: ");
        scanf("%f",&altura);
        
        // perimetro
        perimetro = ((2*a)+(2*b));
        // area
        area = (a*altura);

        printf("O Perimetro do Triangulo: %.2f\n",perimetro);
        printf("A Area do Triangulo: %.2f\n",area);
}

/*--------------  FUNÇÃO LOSANGO:  --------------*/ 
void losangoFunction(){
        // losango
        printf("Digite O lado a: \n");
        scanf("%f",&a);

        printf("Digite a diagonal maior e menor: \n");
        scanf("%f%f",&diagonalMaior ,&diagonalMenor);

        // perimetro
        perimetro = (4*lado);
        // area
        area = (diagonalMaior*diagonalMenor)/2;

        printf("O Perimetro do Triangulo: %.2f\n",perimetro);
        printf("A Area do Triangulo: %.2f\n",area);
}

/*--------------  FUNÇÃO TRAPEZIO:  --------------*/ 
void trapezioFunction(){
        // trapezio
        printf("Digite os 3 lados: \n");
        scanf("%f%f%f",&a ,&b ,&c);

        printf("Digite a diagonal maior e menor: \n");
        scanf("%f%f",&diagonalMaior ,&diagonalMenor);

        // perimetro
        perimetro = (a+b+c+diagonalMaior);
        // area
        area = ((diagonalMaior*diagonalMenor)/2)*2;

        printf("O Perimetro do Triangulo: %.2f\n",perimetro);
        printf("A Area do Triangulo: %.2f\n",area);
}

/*--------------  FUNÇÃO CIRCULO:  --------------*/ 
void circuloFunction(){
        // circulo
        printf("Digite O valor do raio: \n");
        scanf("%f",&raio);

        // perimetro
        longitude = (2*PI*raio);
        // area
        area = PI*(raio*raio);

        printf("O Perimetro do Triangulo: %.2f\n",longitude);
        printf("A Area do Triangulo: %.2f\n",area);
}