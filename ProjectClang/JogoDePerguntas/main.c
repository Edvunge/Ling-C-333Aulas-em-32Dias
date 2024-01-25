#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL,"portuguese");
    int op;
    //system("color b0");
    printf("\nJOGO DE PERGUNTAS E RESPOSTAS \n");
    printf("PRIMEIRA PERGUNTA\n");
    printf("\nQUEM É O REI DA MÚSICA POP?\n");
    printf("1 -> ROBERTO CARLOS?\n");
    printf("2 -> MICHAEL JACKSON?\n");
    printf("3 -> JAY-Z?\n");
    printf("4 -> ELVIS PRESLEY?\n\n");

    scanf("%d",&op);
    // decisao
    switch (op){
    case 1:
        printf("\nVOCE ERROU!\n");
        break;
    case 2:
        printf("\nPARABENS VOCE ACERTOU.... !\n");
        break;
    case 3:
        printf("\nVOCE ERROU !\n");
        break;
    case 4:
        printf("\nVOCE ERROU!\n");
        break;
    
    default:
        printf("OPCAO INVALIDA, TENTE NOVAMENTE !\n");
    }
    /*printf("");
    printf("");
    printf("");
    printf("");
    printf("");*/
    
    printf("\n\n");
    system("PAUSE");
    return 0;
}