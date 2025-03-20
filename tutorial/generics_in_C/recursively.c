#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    IMG_SIZE = 8
};

struct image {
    char pixels[IMG_SIZE][IMG_SIZE];
};

static void flood_fill(struct image *const img, 
                        int x, int y,
                        char find, char replace) 
{
    if (x < 0 || y < 0 || 
        x >= IMG_SIZE || y >= IMG_SIZE ||
        img -> pixels[y][x] != find)
        {
            return;
        }

        img->pixels[y][x] = replace;
        flood_fill(img, x+1, y, find, replace);
        flood_fill(img, x, y+1, find, replace);
        flood_fill(img, x-1, y, find, replace);
        flood_fill(img, x, y-1, find, replace);
}

int main(int argc, char const *argv[])
{
    struct image img = {{
        {' ', ' ', ' ', '#', '#', ' ', ' ', ' '},
        {' ', '#', ' ', ' ', ' ', ' ', '#', ' '},
        {' ', ' ', '#', ' ', '#', '#', ' ', ' '},
        {'#', '#', '#', ' ', ' ', '#', '#', '#'},
        {'#', ' ', '#', '#', ' ', '#', ' ', '#'},
        {' ', ' ', '#', ' ', ' ', '#', ' ', '#'},
        {'#', ' ', '#', ' ', '#', '#', ' ', ' '},
        {'#', '#', ' ', ' ', '#', ' ', '#', '#'},
    }};
    
    for (int y = 0; y < IMG_SIZE; ++y) {
        printf("%.*s\n", IMG_SIZE, img.pixels[y]);
    }

    puts("Enter coordinates (x,y):");
    char input[16];
    int start_x, start_y;

    if (fgets(input, sizeof(input), stdin) == NULL ||
    strchr(input, '\n') == NULL ||
    sscanf(input, "%d,%d", &start_x, &start_y) != 2 ||
    start_x < 0 || start_y < 0 ||
    start_x >= IMG_SIZE || start_y >= IMG_SIZE)
    {
        fputs("Bad input\n", stderr);
        return EXIT_FAILURE;
    }

    char const find = img.pixels[start_y][start_x];
    flood_fill(&img, start_x, start_y, find, '.');
    puts("New image:");

    for (int y = 0; y < IMG_SIZE; ++y) {
        printf("%.*s\n", IMG_SIZE, img.pixels[y]);
    }

    return EXIT_SUCCESS;
}