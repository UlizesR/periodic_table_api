#include "image/sgl_draw.h"


void sgl_fill(uint32_t *pixels, size_t width, size_t height, uint32_t color)
{
    for (size_t i = 0; i < width * height; i++)
    {
        pixels[i] = color;
    }
}

void sgl_draw_rect(uint32_t *pixels, size_t pixel_width, size_t pixel_height, size_t x, size_t y, size_t w, size_t h, uint32_t color)
{
    for (int dy = 0; dy < (int) h; dy++)
    {
        for (int dx = 0; dx < (int) w; dx++)
        {
            size_t px = x + dx;
            size_t py = y + dy;
            if (px >= pixel_width || py >= pixel_height) continue;
            pixels[py * pixel_width + px] = color;
        }
    }
}