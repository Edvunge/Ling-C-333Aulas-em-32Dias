#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*--------------- Prototipos de Funções: ---------------*/
void additionFunction();
void subtractionFunction();
void multiplicationFunction();
void divisionFunction();

/*--------------- Função Principal: ---------------*/
int main(void) {
    int menu;

    do {

    } while(menu != 0);
    return (0);
}

/*--------------- Funções: ---------------*/
void additionFunction(){
    // Addition
    int valueA, valueB, sum;

    printf("Enter the value of a: \n");
    scanf("%d",&valueA);

    printf("Enter the value of b: \n");
    scanf("%d",&valueB);

    sum = valueA + valueB;
    
    printf("The sum of: %d and %d of is equal: %d",valueA ,valueB ,sum);
}

 
void subtractionFunction(){
    // Subtraction
    int valueA, valueB, Subtraction;

    printf("Enter the value of a: \n");
    scanf("%d",&valueA);

    printf("Enter the value of b: \n");
    scanf("%d",&valueB);

    if (valueA > valueB){
        Subtraction = valueA - valueB;
    
        printf("The Subtraction of: %d and %d of is equal: %d",valueA ,valueB ,Subtraction);
    } else {
        Subtraction = valueB - valueA;
    
        printf("The Subtraction of: %d and %d of is equal: %d",valueA ,valueB ,Subtraction);
    }
    
}

void multiplicationFunction(){
    // Multiplication
    int valueA, valueB, multiply;

    printf("Enter the value of a: \n");
    scanf("%d",&valueA);

    printf("Enter the value of b: \n");
    scanf("%d",&valueB);

    multiply = valueA * valueB;
    
    printf("The multiply of: %d and %d of is equal: %d",valueA ,valueB ,multiply);
}

void divisionFunction(){
    // Division
    int valueA, valueB, division;
    
    do { 
        printf("Enter the value of a: \n");
        scanf("%d",&valueA);

        printf("Enter the value of b: \n");
        scanf("%d",&valueB);
    
        division = valueA / valueB;
    
        printf("The sum of: %d and %d of is equal: %d",valueA ,valueB ,division);
    } while (valueB == 0);
}
