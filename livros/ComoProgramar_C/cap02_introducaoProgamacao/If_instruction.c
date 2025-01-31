#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("Entre com dois inteiros e lhe direi\n");
    printf("o relacionamento que eles satisfazem:");
    scanf("%d%d", &num1, &num2);

    if (num1 == num2) 
        printf("%d e igual a %d\n",num1,num2);
    if (num1 != num2)
        printf("%d nao e igual a %d\n",num1,num2);
    if (num1 < num2)
        printf("%d e menor que %d\n",num1,num2);
    if (num1 > num2)
        printf("%d e maior que %d\n",num1,num2);
    if(num1 <= num2)
        printf("%d e menor que ou igual a %d\n",num1,num2);
    if (num1 >= num2)
        printf("%d e maior que ou igual a %d\n",num1,num2);
    return (0);
}