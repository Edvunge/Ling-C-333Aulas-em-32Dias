struct coordinates {
    int x;
    int y;
    int z;
};

struct coordinates move(struct coordinates position, struct coordinates movement) {
    position.x += movement.x;
    position.y += movement.y;
    position.z += movement.z;
    return position;
}


struct lostOfData {
    int param1;
    char param2[80000];
};

struct lotsOfData doubleParam1(struct lotsOfData value) {

    value.param1 *= 2;
    return value;
}

void doubleParam1ByPtr(struct lotsOfData *value) {
    value->param1 *= 2; 
}