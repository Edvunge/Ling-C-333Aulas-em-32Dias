#include <stdio.h>
#include <ctype.h>

int main(void) {
    char cResponse = '\0';

    printf("\nPlease enter a letter: ");
    scanf("%c", &cResponse);
    
    if ( isdigit(cResponse) == 0 )
        printf("\nThank You\n");
    else 
        printf("\nYou did not enter a letter\n");

        /*
        familia nao acaba em sangue, mais tambem não começa em sangue,
        a familia gosta de vc, não do que vc pode fazer por ela, a familia sempre 
        esta ai pra vc na hora boa, na hora ma, pra tudo, mesmo quando doi isso é familia
        #Dean Winchester
        */    
    return (0);
}