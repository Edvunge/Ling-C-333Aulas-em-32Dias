struct MyStruct {
    int x;
    int y;
};

struct MyStruct myObject;
struct MyStruct *p = &myObject;

p->x = 42;
p->y = 123;

printf(".x = %i, .y = %i\n", p->x, p->y);
printf(".x = %i, .y = %i\n", myObject:x, myObject.y);

