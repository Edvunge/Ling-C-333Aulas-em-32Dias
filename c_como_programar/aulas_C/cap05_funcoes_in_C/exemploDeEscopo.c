#include <stdio.h>

void useLocal( void );
void useStaticLocal( void );
void useGlobal( void );

int x = 1; // variavel global

int main(void) {
    int x = 5;

    printf("x local no escopo externo de main eh %d\n", x);

    {
        int x = 7;

        printf("x local no escopo interno de main eh %d\n", x);
    }

    printf("x local no escopo externo de main eh %d\n", x);

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    printf( "\nx local em main eh %d\n",x );
    return (0);
}


void useLocal( void ) {
    int x = 25;

    printf( "\nx local em useLocal eh %d apos entrar em useLocal\n",x );
    x++;
    printf( "\nx local em useLocal eh %d antes entrar em useLocal\n",x );
}

void useStaticLocal( void ) {
    static int x = 50;

    printf( "\nx local em useLocal eh %d apos entrar em useStaticLocal\n",x );
    x++;
    printf( "\nx local em useLocal eh %d antes entrar em useStaticLocal\n",x );
}

void useGlobal( void ) {
    printf( "\nx local em GLobal eh %d na entrada de useGlobal\n",x );
    x *= 10;
    printf( "\nx GLobal eh %d na saida em useGlobal\n",x );
}