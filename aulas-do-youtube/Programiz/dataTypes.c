#include <stdio.h>
#include <stdlib.h>

int main(void){
    /*
    int       (4 bytes) | %d  for printing
    double   (8 bytes)  | %lf for printing
    float    (4 bytes)  | %f  for printing
    char     (1 byte)   | %c  for printing
    */

   int  age = 28;
   double hight = 1.89;
   float low = 97.0f;
   char character = 'z';
   
   printf("int size = %zu", sizeof (age));
   printf("\ndouble size = %zu", sizeof(low));
   printf("%c", character);
   
    return (0);
}