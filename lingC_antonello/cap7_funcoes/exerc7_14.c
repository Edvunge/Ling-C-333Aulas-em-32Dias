#include <stdio.h>
#include <stdlib.h>

// 7.14) Escreva uma função que receba 3 notas 
// de um aluno e uma letra. 
// Se a letra for A então a função retorna a 
// média aritmética das notas do aluno, 
// se for P, a sua média ponderada (pesos: 5, 3 e 2) e 
// se for H, a sua média harmônica.
void func(int nota_a, int nota_b, int nota_c, char letra_d){
    int totalDeNotas = (nota_a + nota_b + nota_c);

    if (letra_d == 'A') {
        // media aritmetica
        float medAritmetica = ((totalDeNotas)/(3));
        printf("A media aritmetica: %.2f",medAritmetica);
    } else if (letra_d == 'P') {
        // media ponderada
        float medPonderada = (((nota_a*5)+(nota_b*3)+(nota_c*2))/(totalDeNotas));
        printf("A media Ponderada eh: %.2f",medPonderada);
    } else if (letra_d == 'H') {
        // media harmonica
        float medHarmonica = ((nota_a+nota_b+nota_c)/((1/nota_a)+(1/nota_b)+(1/nota_c)));
        printf("A media Harmonica eh: %.2f",medHarmonica);
    }
}

int main(void) {
    func(2, 4, 6, 'P');
    return (0);
}