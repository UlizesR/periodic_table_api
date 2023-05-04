#pragma once

#include <stdint.h>
#include <stdio.h>

#ifndef SGL_DRAW_H
#define SGL_DRAW_H


void sgl_fill(uint32_t *pixels, size_t width, size_t height, uint32_t color);

void sgl_draw_rect(uint32_t *pixels, size_t width, size_t height, size_t x, size_t y, size_t w, size_t h, uint32_t color);

#endif  // SGL_DRAW_H