#include <stdio.h>

int main(void){
    FILE *fh_output;

    fh_output = fopen("io.txt", "w");

    fputs("juelcia mae grande\n", fh_output);

    fclose(fh_output);

    return 0;
}