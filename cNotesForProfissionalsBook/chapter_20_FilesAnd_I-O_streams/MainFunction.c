#include <stdlib.h>
#include <stdio.h>

void printAllWorlds(FILE *);

int main(void) {
    FILE *fp;

    if ((fp = fopen("example.txt", "r")) == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    printAllWorlds(fp);

    fclose(fp);

    return EXIT_SUCCESS;
}

void printAllWorlds(FILE * fp) {
    char tmp[20];
    int i = 1;

    while (fscanf(fp, "%19s", tmp) != EOF) {
        printf("World %d: %s\n", i, tmp);
        i++;
    }
}