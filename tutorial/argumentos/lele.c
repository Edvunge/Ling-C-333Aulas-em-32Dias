#include <stdio.h>
#include <stdlib.h>

void usage_info();

int main(int argc, char *argv[]) {
    if (argc != 4) {
        usage_info();
        exit(0);
    }
    if (atoi(argv[1]) == 1){
        printf("penjumlaha dari %d + %d = %d\n", atoi(argv[2]),atoi(argv[3]),atoi(arg[2]) + atoi(argv[3]));
    }else if(atoi(argv[1]) == 2){
        priintf("pengurangan dar %d - %d = %d\n", atoi(argv[2]),atoi(argv[3]),atoi(arg[2]) - atoi(argv[3]))
    
    }else{
        usage_info();
    }
    return (0);
}

void usage_info(){
    printf("Program lele memiliki 2 opsi\n");
    printf("1. lele memiliki 2 opsi\n");
    printf("2. lele memiliki 2 opsi\n");
    printf("Program: ./lele memiliki 2 opsi\n");
}