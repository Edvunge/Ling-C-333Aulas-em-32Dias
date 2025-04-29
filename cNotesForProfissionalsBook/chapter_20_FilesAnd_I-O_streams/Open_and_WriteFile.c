#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int e = EXIT_SUCCESS;

    char *path = (argc > 1) ? argv[1] : "output.txt";

    FILE *file = fopen(path, "w");

    if (!file) {
        perror(path);
        return EXIT_FAILURE;
    }

    if(fputs("Output in file.\n", file) == EOF) {
        perror(path);
        e = EXIT_FAILURE;
    }

    if (fclose(file)) {
        perror(path);
        return EXIT_FAILURE;
    }
    return e;
}