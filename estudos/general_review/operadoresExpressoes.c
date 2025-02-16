#include <stdio.h>

/*
      Operadores e Expressões  
- Aritméticos (+, -, *, /, %)  
- Relacionais (==, !=, >, <)  
- Lógicos (&&, ||, !)  
- Bitwise (&, |, ^, ~, <<, >>)  
*/

int main() {
    
    unsigned int a = 5, b = 9;

    // Aritmeticos
    printf("\n\nAritmeticos: \n");
    int x = a + b;
    printf("a + b: %d\n",x);

    int t = b - a;
    printf("b - a: %d\n",t);

    int y = a * b;
    printf("a * b: %d\n",y);

    int l = b / a;
    printf("b / a: %d\n",l);

    int z = a % b;
    printf("a %% b: %d\n",z);



    // Relacionais  
    printf("\n\nRelacionais: \n");
    int p = a == b;
    printf("a == b: %d\n",p);

    int q = b != a;
    printf("b != a: %d\n",q);

    int e = b > a;
    printf("b > a: %d\n",e);

    int v = a < b;
    printf("a < b: %d\n",v);



    // Lógicos
    printf("\n\nLogicos: \n");
    int j = a && b;
    printf("a && b: %d\n",j);

    int x1 = a || b;
    printf("a || b: %d\n",x1);

    int t1 = !a;
    printf("!a: %d\n",t1);



    // Bitwise
    printf("\n\nBitwise: \n");
    int y1 = b & a;
    printf("b & a: %d\n",y1);

    int l1 = a | b;
    printf("a | b: %d\n",l1);

    int z1 = b ^ a;
    printf("b ^ a: %d\n",z1);

    int p1 = ~a;
    printf("~a: %d\n",p1);

    int q1 = b << a;
    printf("b << a: %d\n",q1);

    int e1 = b >> a;
    printf("b >> a: %d\n",e1);



    // The result is 00000001
    printf("\n\na = %u, b = %u\n", a, b);
    printf("a&b = %u\n", a & b);

    // The result is 00001101
    printf("a|b = %u\n", a | b);

    // The result is 00001100
    printf("a^b = %u\n", a ^ b);

    // The result is 11111111111111111111111111111010
    // (assuming 32-bit unsigned int)
    printf("\n\n~a = %u\n", a = ~a);

    // The result is 00010010
    printf("b<<1 = %u\n", b << 1);

    // The result is 00000100
    printf("b>>1 = %u\n", b >> 1);

    return 0;
}
