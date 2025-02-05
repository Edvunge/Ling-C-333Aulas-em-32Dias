#include <stdio.h>
#include <string.h>

// =================================== structs ====================================
struct Livros {
    char Titulo[12];  
    char Autor[14];  
    int  AnoDePublicacao;  
    int  NumeroDePaginas; 
};


// =================================== prototipes functions ====================================
void adicionarLivro(Livros livros);  
void listarLivros();  
void buscarLivro();  
void removerLivro(); 


int main(void) {
    int options;
    int x;
    struct Livros liv;

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
            printf("\nopção 1.1: ");
            adicionarLivro(liv.AnoDePublicacao);
            printf("\nopção 1.1: ");
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
/*
char Titulo[12];  
char Autor[14];  
int  AnoDePublicacao;  
int  NumeroDePaginas; 
*/
// =================================== functions ====================================
void adicionarLivro(Livros livros){
    printf("\nDigite o título do livro: ");
    scanf("%c ",&livros.Titulo);
    printf("\nDigite o nome do autor:");
    scanf("%c ",&livros.Autor);
    printf("\nDigite o ano de publicação:");
    scanf("%d ",&livros.AnoDePublicacao);
    printf("\nDigite o número de páginas:");
    scanf("%d ",&livros.NumeroDePaginas);

    printf("\nTitulo do livro: %s", livros.Titulo);
    printf("\nLivro adicionado com sucesso!");
}

void listarLivros();  
void buscarLivro();  
void removerLivro(); 