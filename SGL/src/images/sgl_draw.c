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

void sgl_draw_circle(uint32_t *pixels, size_t pixel_width, size_t pixel_height, SGL_Circle circle)
{
    int x1 = circle.origin.x - (int) circle.radius;
    int x2 = circle.origin.x + (int) circle.radius;
    int y1 = circle.origin.y - (int) circle.radius;
    int y2 = circle.origin.y + (int) circle.radius;

    for (int y = y1; y < y2; y++)
    {
        for (int x = x1; x < x2; x++)
        {
            int dx = x - circle.origin.x;
            int dy = y - circle.origin.y;
            if (dx*dx + dy*dy <= circle.radius*circle.radius)
            {
                size_t px = x;
                size_t py = y;
                if (px >= pixel_width || py >= pixel_height) continue;
                pixels[py * pixel_width + px] = circle.color;
            }
        }
    }
}