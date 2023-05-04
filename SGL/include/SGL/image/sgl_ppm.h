#pragma once 

#include <stdint.h>
#include <stdio.h>
#include <errno.h>

#ifndef SGL_PPM_H
#define SGL_PPM_H

typedef int Errno;
Errno sgl_ppm_write(uint32_t *pixels, size_t width, size_t height, const char *filename);

#endif // SGL_PPM_H