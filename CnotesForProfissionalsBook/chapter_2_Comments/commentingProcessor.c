#include <stdio.h>

#if 0/*Starts the "comment", anything from here on is removed by preprocessor */

/*A large amount of tcode with multi-line comments */

int foo() {

    /* lots of code */
    ...
    /*... some comment describing the if statement ... */
    if (someTest) {
        /* some more comments */
        return 1;
    }

    return 0;
}

#endif /* 0 */