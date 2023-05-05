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
    uint32_t color;
} SGL_Rect;

typedef struct {
    Point origin;
    size_t radius;
    uint32_t color;
} SGL_Circle;

void sgl_fill(uint32_t *pixels, size_t pixel_w, size_t pixel_h, uint32_t color);

void sgl_draw_rect(uint32_t *pixels, size_t pixel_width, size_t pixel_height, SGL_Rect rect);
void sgl_draw_circle(uint32_t *pixels, size_t pixel_width, size_t pixel_height, SGL_Circle circle);

#endif  // SGL_DRAW_H