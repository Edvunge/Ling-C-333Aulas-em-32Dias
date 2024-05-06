#include <stdio.h>
#include <string.h>

int main(void);

int main(void) {

    float fValue = 123.0F;
    double dValue = 987.0;
    long double ddValue = 123123123123.0L;

    int nInteger = 12345;
    int nIntegerAgain = 12345;
    long ILong = 987;
    unsigned long uILong = 987;
    char cChar = 'A';

    printf("fValue %f \n dValue %lf \n ddValue %Lf\n nInteger %d \n ILong %ld \n uILong %lu \n cChar %c\n",fValue ,dValue ,ddValue ,nInteger ,ILong ,uILong ,cChar);

    /* These assignment statements generate a warning message about type conversion. */

    nInteger = dValue;
    ILong    = ddValue;
    uILong   = ddValue;
    cChar    = nIntegerAgain;

    printf("\n fValue %f \n dValue %lf \n ddValue %Lf \n nInteger %d \n ILong %ld \n uLong %lu \n cChar %c\n", fValue, dValue, ddValue ,nInteger ,ILong ,uILong ,cChar);

    // With a cast, there is no warning message; 
    // homever, the conversion is the same

    nInteger    = (int)dValue;
    ILong       = (long)ddValue;
    uILong      = (unsigned long)ddValue;
    cChar       = (char)nIntegerAgain;

    // with a cast, there is no warning message;
    // homever, the conversion is the same

    nInteger    = (int)dValue;
    ILong       = (long)ddValue;
    uILong      = (unsigned long)ddValue;
    cChar       = (char)nIntegerAgain;

    printf("\n fValue %f \n dValue %lf \n ddValue %Lf \n nInteger %d \n ILong %ld \n uILong %lu \n cChar %c\n"
    ,fValue ,dValue ,ddValue ,nInteger ,ILong, uILong ,cChar);

    printf("\nNotice that 'ILong' and 'uILong' both have the wrong value.\n");
    return (0);
}
