#include <stdio.h>
#include <stdlib.h>
// aula 03 - STRUCTS

// declaracao da estrutura
typedef struct {
    /* data */
    double largura;
    double altura;
    double comprimento;
    double densidade;
} Paralelepipedo;

// prototipos das funções
void calculaArea(Paralelepipedo p);
void calculaVolume(Paralelepipedo p);
void calculaMassa(Paralelepipedo p);


int main(void) {
    Paralelepipedo p;

    // entradas de dados
    printf("Digite a largura do paralelepipedo:\n");
    scanf("%lf",&p.largura);  
    printf("Digite a altura do paralelepipedo:\n");
    scanf("%lf",&p.altura);  
    printf("Digite o comprimento do paralelepipedo:\n");
    scanf("%lf",&p.comprimento);  
    printf("Digite a densidade do paralelepipedo:\n");
    scanf("%lf",&p.densidade);

    printf("Dados do paralelepipedo: l: %lf h: %lf c: %lf d: %lf",p.largura, p.altura, p.comprimento, p.densidade);    
    
    calculaArea(p);
    calculaVolume(p);
    calculaMassa(p);

    return (0);
}

void calculaArea(Paralelepipedo p){
    double area = 2*p.largura*p.comprimento + 2*p.largura*p.altura + 2*p.comprimento*p.altura;
    printf("Area: %lf",area);
}

void calculaVolume(Paralelepipedo p){
    double volume = p.largura*p.comprimento*p.altura;
    printf("Volume: %lf",volume);
}

void calculaMassa(Paralelepipedo p){
    double volume = p.largura*p.comprimento*p.altura;
    double massa = p.densidade*volume;
    printf("Massa: %lf",massa);
}
