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
    sgl_fill(pixels, WIDTH, HEIGHT, SGL_BLACK);

    sgl_draw_rect(pixels, WIDTH, HEIGHT, 200, 200, CELL_WIDTH, CELL_HEIGHT, SGL_DARK_GOLDENROD);
    const char* file_path = "../app/images/test1.ppm"; // save file to "images" directory
    Errno err = sgl_ppm_write(pixels, WIDTH, HEIGHT, file_path);
    if (err) {
        fprintf (stderr, "ERROR: could not save file %s: %s\n", file_path, strerror(errno));
        return 1;
    }
    return 0;
}
