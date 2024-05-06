int a = ... // initialise to some value

if (a >= 1) {
    printf("a is greater than or equals 1.\n");
} else if (a == 0) { // we already know that is smaller than 1
    printf("a equals 0.");
} else { // a is smaller than 1 and not equals 0. hence.
    printf("a is negative.\n");
}