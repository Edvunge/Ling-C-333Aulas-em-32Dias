/*
🎯 Algoritmos e Estruturas de Dados com o Projeto Push_Swap | Escola 42 🔐

Durante minha jornada na 42 Lisboa, em um estágio intermediário da formação em engenharia de software, tive a oportunidade de desenvolver o projeto Push_Swap. Essa experiência me proporcionou uma imersão prática e aprofundada em algoritmos, estruturas de dados, otimização e boas práticas de codificação em C.

🧠 O Desafio:
O objetivo era simples, mas o caminho, complexo: ordenar uma sequência de números utilizando apenas duas pilhas e um conjunto limitado de operações. A verdadeira dificuldade residia em encontrar a solução mais eficiente possível, sempre respeitando as restrições rigorosas impostas.

📌 Principais Aprendizados:
- Implementação e manipulação de listas ligadas e estruturas em pilha
- Otimização de algoritmos sob condições restritas
- Análise de complexidade temporal e desempenho
- Tratamento robusto de erros e entradas inválidas
- Escrita de código limpo, modular e bem documentado

💬 Interessado em Estruturas de Dados e Algoritmos?
Se você se interessa por esses tópicos ou quer saber mais sobre projetos desafiadores como o Push_Swap, convido você a explorar meu GitHub! O projeto está muito bem documentado, detalhando todo o processo e as soluções. — 🔗 Link no primeiro comentário!

🔍 Curioso para ver um pouco do que explorei nesse processo?
Entenda a criação e manipulação de uma Linked List por baixo do capô através de alguns exemplos de códigos em C. 👇🏽
*/

// CREATE A SIMPLE LINKED LIST IN C

// You need this includes to use malloc, free, NULL, exit and printf.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a node that contains an integer and a pointer to the next node
typedef struct Node {
    int x;
    struct Node* next;
} Node;

// SIMPLE USE OF NODE IN A PROGRAM

int main(int argc, char* argv[]) {
    // Create a node called root.
    Node root;
    // Assign a value to the node.
    root.x = 15;
    // Create a pointer to the next node and memory allocation.
    root.next = malloc(sizeof(Node));
    // Assign a value to the next node.
    root.next ->x = -2;
    // Create a pointer to the next node and set it to NULL.
    root.next->next = NULL;

    printf("First: %d\n", root.x); // output: 15
    printf("Second: %d\n", root.next->x); // output: -2
    return 0;
}

// ITERATING OVER A LINKED LIST
int main(int argc, char* argv[]){
    Node root;
    root.x = 15;
    root.next = malloc(sizeof(Node));
    root.next->x = -2;
    root.next->next = malloc(sizeof(Node));
    root.next->next->x = 22 
        root.next->next->next = NULL;

    // Iterate over the linked list with a while loop.
    Node* curr = &root;
    while (curr != NULL) {
        printf("%d\n", curr->x);
        curr = curr->next;
    }

    for (Node* curr = &root; curr != NULL; curr = curr->next) {
        printf("%d\n", curr->x);
    }

    // You need free this memory first before you can free the root.next.
    free(root.next->next);
    free(root.next);

    return (0);
}


