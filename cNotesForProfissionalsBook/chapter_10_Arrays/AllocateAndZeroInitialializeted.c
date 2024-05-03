#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int * pdata;
    size_t n;

    printf("Enter the size of the array: ");
    fflush(stdout);

    if (1 != scanf("%zu", &n)) {
        fprintf("scanf() did not read a in proper value.\n");
        exit(EXIT_FAILURE);
    }

    pdata = calloc(n, sizeof *pdata);
    if (NULL == pdata) {
        perror("calloc() failed");
        exit(EXIT_FAILURE);
    }

    free(pdata);

    return EXIT_SUCCESS;
}