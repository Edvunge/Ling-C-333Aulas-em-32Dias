#include <stdio.h>

int main(void) {
    char* str = "Hello, wolrd"; // String literal

    // String literals can be used to initialize arrays
    char a1[] = "abc";
    char a2[4] = "abc";
    char a3[3] = "abc";

    char* s = "foobar";
    s[0] = 'F';

    char const* s1 = "foobar";
    s[1] = 'F';


    // String literals, same as character constatnts
    char* s3 = L"abc";

    wchar_t*
    return (0);
}