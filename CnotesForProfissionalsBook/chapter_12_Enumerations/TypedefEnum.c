enum color {
    RED,
    GREEN,
    BLUE
};  


typedef enum {
    RED,
    GREEN,
    BLUE
} color;

color chosenColor = RED;
enum color defaultColor = BLUE;

void printColor() {
    if (chosenColor == RED) {
        printf("RED\n");
    } else if (chosenColor == GREEN) {
        printf("GREEN\n");
    } else if (chosenColor == BLUE) {
        printf("BLUE\n");
    }
}