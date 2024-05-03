struct ex1 {
    size_t foo;
    int flex[];
};

struct ex2_header {
    int foo;
    char bar;
}

struct ex2 {
    struct ex2_header hdr;
    int flex[];
};

struct ex3 {
    int foo;
    char bar;
    int flex[];
};

