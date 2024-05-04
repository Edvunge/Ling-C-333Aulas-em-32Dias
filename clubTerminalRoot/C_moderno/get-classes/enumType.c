#include <stdio.h>

enum Logs {
    success,
    warning,
    error,
    info
};

int main(int argc, char** argv){
    enum Logs s = success, w = warning, e = error, i = info;
    printf("Sucesso eh: %d\n", s);
    printf("Warning eh: %d\n", w);
    printf("Error eh: %d\n", e);
    printf("Info eh: %d\n", i);
    return (0);
}