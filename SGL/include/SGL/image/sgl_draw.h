#pragma once

#include <stdint.h>
#include <stdio.h>

#ifndef SGL_DRAW_H
#define SGL_DRAW_H

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point origin;
    int w;
    int h;
} SGL_Rect;

void sgl_fill(uint32_t *pixels, size_t pixel_w, size_t pixel_h, uint32_t color);

void sgl_draw_rect(uint32_t *pixels, size_t pixel_width, size_t pixel_height, SGL_Rect rect, uint32_t color);

#endif  // SGL_DRAW_H