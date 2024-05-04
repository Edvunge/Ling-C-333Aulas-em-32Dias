#include <stdio.h>

typedef struct Cadastro{
    char* name;
    int age;
    char level;
} cad;

void imprime(cad * cad1){
    printf("Os dados sao: \nNOME: %sIDADE: %d\nNIVEL: %c\n", cad->name, cad1->age, cad1->level);
}

cad obtem_dados(cad * c){
    printf("Informe o nome: ");
    fgets(c->name, 100, stdin);
    fflush(stdin);

    printf("Informe a idade e o nivel: ");
    scanf("%d %c", &c->age, &c->level);
    return *c;
}

int main(int argc, char** argv){
    cad c;
    obtem_dados(&c);
    imprime(&c);
    return (0);
}