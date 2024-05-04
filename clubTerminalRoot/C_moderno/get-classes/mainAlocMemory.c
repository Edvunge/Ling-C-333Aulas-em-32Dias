#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Null Pointers Academy (NPA)

struct BigData {
    int array[4];
    char * text;
    long id;
};

int main(int argc, char** argv) {
    srand(time(NULL));

    struct BigData * big = malloc(sizeof(big));

    big->text = "Eu Sou Alguem!";
    for (int i = 0; i < 4; ++i) {
        big->array[i] = rand() % 9;
    }
    
    big->id = 9876543210;
    
    printf("String: %s\n", big->text);
    for (int i = 0; i < 4; ++i) {
        printf("Array %d: %d\n",i , big->array[i]);
    }

    printf("ID: %lu\n", big->id);

    free(big);
    return 0;
}