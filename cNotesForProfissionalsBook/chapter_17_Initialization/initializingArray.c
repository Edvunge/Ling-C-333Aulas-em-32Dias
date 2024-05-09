
int days_of_moth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


// initializing character arrays
char chr_array[] = "hello";

char ch2_array[] = { 'h', 'e', 'l', 'l', 'o', '\0' };


// Designated initializers for array elements

int array[] = { [4] = 29, [5] = 31, [17] = 101, [18] = 103, [19] = 107, [20] = 109 };


// Designated initializers for structures
struct Date {
    int year;
    int month;
    int day;
};

struct Date us_independece_day = { .day = 4, .month = 7, .year = 1776 };


// Designated initializer for unions
struct discriminated_union {
    enum { DU_INT, DU_DOUBLE } discriminant;
    union {
        int du_int;
        double du_double;
    } du;
};

struct discriminated_union du1 = { .discriminant = DU_INT, .du = { .du_int = 1 } };
struct discriminated_union du2 = { .discriminant = DU_DOUBLE, .du = { .du_double = 3.14159 } };


