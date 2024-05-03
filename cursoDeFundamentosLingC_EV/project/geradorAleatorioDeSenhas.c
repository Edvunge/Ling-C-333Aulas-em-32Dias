#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar e imprimir a senha aleatória
void generatePassword(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]|:;<>,.?/~";
    const int charsetSize = sizeof(charset) - 1;
    srand(time(NULL));
    for (int i = 0; i < length; ++i) {
        putchar(charset[rand() % charsetSize]);
    }
    putchar('\n');
}

int main() {
    int length;

    printf("Digite o comprimento da senha que voce deseja gerar: ");
    scanf("%d", &length);

    generatePassword(length);

    return 0;
}
