#include <stdio.h>
#include <unistd.h>

// Problema 3: Calcular a expressão z = x + 5 
// usando processos pai, filho e neto

int main() {
    int fd[2];
    pid_t filho_pid, neto_pid;
    int x, z;

    if (pipe(fd) == -1) {
        perror("Erro ao criar o pipe");
        return 1;
    }

    filho_pid = fork();

    if (filho_pid == 0) { // Processo filho
        close(fd[0]); // Fechamos a leitura, só vamos escrever
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        write(fd[1], &x, sizeof(x)); // Enviamos x para o processo neto
        close(fd[1]); // Fechamos o pipe
    } else { // Processo pai
        neto_pid = fork();
        
        if (neto_pid == 0) { // Processo neto
            close(fd[1]); // Fechamos a escrita, só vamos ler
            read(fd[0], &x, sizeof(x)); // Recebemos x do processo filho
            z = x + 5;
            printf("O valor de z é: %d\n", z);
            close(fd[0]); // Fechamos o pipe
        } else { // Processo pai
            wait(NULL); // Esperamos pelo processo filho
            wait(NULL); // Esperamos pelo processo neto
        }
    }

    return 0;
}
