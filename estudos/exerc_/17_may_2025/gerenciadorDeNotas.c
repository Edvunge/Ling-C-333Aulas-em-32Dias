#include <stdio.h>
#include <stdlib.h>

/*
Exercício: Gerenciador de Notas
Crie um programa em C que permita gerenciar as notas de alunos de uma turma. O programa deve:

Pedir ao usuário quantos alunos há na turma (máximo 50).

Ler as notas de cada aluno (valores entre 0.0 e 10.0) e armazená-las em um vetor.

Calcular e mostrar:

A média da turma.

A maior nota.

A menor nota.

O número de alunos acima da média.

Permitir que o usuário busque a nota de um aluno específico (por índice).

Requisitos:
Use funções para organizar o código (ex: float calcularMedia(float notas[], int tamanho)).

Valide as entradas (números de alunos entre 1 e 50, notas entre 0.0 e 10.0).

Utilize laços (for/while) para processar o vetor. 
*/
//float calcularMedia(float notas[], int tamanho);

int main(void) {

    //float notas_alunos[50];
    //int numrs_alunos;
    

    return (0);
}

float calcularMedia(float notas[], int tamanho) {
    int media = 0, soma = 0;

    for (int i = 0; i < 10; i++) {
        soma += i;
    }
    
    media = soma/2;
    printf("Media: %d\n", media);
}

/*
Exercício: Gerenciador de Notas
Crie um programa em C que permita gerenciar as notas de alunos de uma turma. O programa deve:

Pedir ao usuário quantos alunos há na turma (máximo 50).

Ler as notas de cada aluno (valores entre 0.0 e 10.0) e armazená-las em um vetor.

Calcular e mostrar:

A média da turma.

A maior nota.

A menor nota.

O número de alunos acima da média.

Permitir que o usuário busque a nota de um aluno específico (por índice).

Requisitos:
Use funções para organizar o código (ex: float calcularMedia(float notas[], int tamanho)).

Valide as entradas (números de alunos entre 1 e 50, notas entre 0.0 e 10.0).

Utilize laços (for/while) para processar o vetor.
*/

