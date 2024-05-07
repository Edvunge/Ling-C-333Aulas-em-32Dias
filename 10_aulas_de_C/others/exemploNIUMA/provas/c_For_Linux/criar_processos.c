#include <stdio.h>
#include <unistd.h>

// Problema 2: Criar processos pai, 
// filho e neto para imprimir sequências de números 

void imprimir_sequencia(int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        printf("%d\n", i);//10 - 19
    }
}

int main() {
    pid_t filho_pid, neto_pid;

    filho_pid = fork();

    if (filho_pid == 0) { // Processo filho
        neto_pid = fork();
        
        if (neto_pid == 0) { // Processo neto
            imprimir_sequencia(0, 9);// 0 - 9 
        } else { // Processo filho
            wait(NULL);
            imprimir_sequencia(10, 19);
        }
    } else { // Processo pai
        wait(NULL);
        imprimir_sequencia(20, 29);
    }

    return 0;
}
