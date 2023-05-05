#include "sgl_draw.h"


void sgl_fill(uint32_t *pixels, size_t pixel_w, size_t pixel_h, uint32_t color)
{
    for (size_t i = 0; i < pixel_w * pixel_h; i++)
    {
        pixels[i] = color;
    }
}

void sgl_draw_rect(uint32_t *pixels, size_t pixel_width, size_t pixel_height, SGL_Rect rect)
{
    for (int dy = 0; dy < rect.h; dy++)
    {
        for (int dx = 0; dx < rect.w; dx++)
        {
            size_t px = rect.origin.x + dx;
            size_t py = rect.origin.y + dy;
            if (px >= pixel_width || py >= pixel_height) continue;
            pixels[py * pixel_width + px] = rect.color;
        }
    }
}