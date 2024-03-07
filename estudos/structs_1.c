#include <stdio.h>

typedef struct {int Dia,Mes,Ano;} DATA;

typedef struct pessoa {
    char Nome[100];
    int Idade;
    float salario;
    DATA Nasc;
} PESSOA;

void Mostrar (struct pessoa x) {
    printf("Nome         :  %s\n",x.Nome);
    printf("Idade        :  %d\n",x.Idade);
    printf("Salario      : %.2f\n",x.salario);
    printf("Dt. Nasc     : %d/%d/%d\n",x.Nasc.Dia, x.Nasc.Mes, x.Nasc.Ano);
}

int main(void) {
    struct pessoa p = {"carlos", 23, 12345.67, {23.5 , 1954}};
    Mostrar(p);
    
    return (0);
}