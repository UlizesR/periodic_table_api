#pragma once

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef SGL_PATTERNS_H
#define SGL_PATTERNS_H

#include "sgl_draw.h"

typedef struct {
    uint32_t *pixels;
    size_t pixel_w;
    size_t pixel_h;
    size_t rows;
    size_t cols;
    size_t cell_w;
    size_t cell_h;

    uint32_t background_color;
} SGL_Pattern;

enum SGL_Shapes {
    SGL_SHAPE_CIRCLE,
    SGL_SHAPE_RECT,
    SGL_SHAPE_TRIANGLE,
};

typedef struct SGL_Shape {
    enum SGL_Shapes shape;
    SGL_Rect rect;
} SGL_Shape;



bool checker_pattern(SGL_Pattern data);
bool circle_pattern(SGL_Pattern data);

#endif // SGL_PATTERNS_H