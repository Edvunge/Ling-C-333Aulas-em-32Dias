#include <stdio.h>

/*
 - `void adicionarLivro();`  
   - `void listarLivros();`  
   - `void buscarLivro();`  
   - `void removerLivro();` 
*/
 void adicionarLivro();  
 void listarLivros();  
 void buscarLivro();  
 void removerLivro(); 

int main(void) {
    int options;
    int x;

    do { 
        printf("=== BIBLIOTECA DIGITAL ===\n");
        printf("1. Adicionar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Buscar Livro pelo Título\n");
        printf("4. Remover Livro\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &options);

        switch (options) {
        case 1: // adicionar livro
            printf("Digite o título do livro:");
            scanf("%",&);
            printf("Digite o nome do autor:");
            scanf("%",&);
            printf("Digite o ano de publicação:");
            scanf("%",&);
            printf("Digite o número de páginas:");
            scanf("%",&);
            printf("Livro adicionado com sucesso!");

            printf("opção 1: ");
            break;
        case 2:
            printf("opção 2: ");
            break;
        case 3:
            printf("opção 3: ");
            break;
        case 4:
            printf("opção 4: ");
            break;
        case 5:
            printf("opção 5: ");
            break;                
        default:
            printf("opção invalida!");
            break;
        }
        printf("\n\nSe quiser continuar a operação: ");
        printf("\n clique 8 (continuar): ");
        printf(" - clique 5 (sair da operação): ");
        scanf("%d",&x);
    } while(x != 5);
    return (0);
}

void adicionarLivro();  
void listarLivros();  
void buscarLivro();  
void removerLivro(); 