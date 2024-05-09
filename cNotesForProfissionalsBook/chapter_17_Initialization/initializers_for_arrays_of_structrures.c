typedef struct Date Date;

struct date_range {
    Date dr_from;
    Date dr_to;
    char dr_what[80];
};

struct date_range ranges[] = {
    [3] = { .dr_from = { .year = 1066, .month = 10, .day = 14 },
            .dr_to   = { .year = 1066, .month = 12, .day = 25 },
            .dr_what = "Battle of Hastings to Coronation of Willim the Conqueror",
    },
    [2] = { .dr_from = { .year = 1776, .month = 7, .day = 4 },
            .dr_to   = { .year = 1787, .month = 5, .day = 14 },
            .dr_what = "US Declaration of Independece to Constitutional Convention",
    }
};


// Specifying ranges in array initializers

int array[] = { [ 3 ... 7 ] = 29, 19 = 107 };
