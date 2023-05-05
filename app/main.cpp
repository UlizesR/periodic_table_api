#include <iostream>
#include <SGL/sgl.h>


#define HEIGHT 800
#define WIDTH 600

#define COLS 8
#define ROWS 6
#define CELL_WIDTH (WIDTH / COLS)
#define CELL_HEIGHT (HEIGHT / ROWS)

static uint32_t pixels[HEIGHT * WIDTH];

int main(int argc, char** argv)
{

    SGL_Pattern data = { pixels, WIDTH, HEIGHT, ROWS, COLS, SGL_BLACK };
    if (!checker_pattern(data)) return -1;
    return 0;
}
