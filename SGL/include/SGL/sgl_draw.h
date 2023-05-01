#ifndef SGL_DRAW_H
#define SGL_DRAW_H

#ifdef __cplusplus
extern "C" {
#endif

#include <CoreGraphics/CoreGraphics.h>
#include "sgl_window.h"

CGContextRef SGL_GetCGContext(SGL_Window *window);
CGColorRef SGL_GetCGColor(const SGL_Color *color);
void SGL_DrawRect(SGL_Window *window, float x, float y, float w, float h, const SGL_Color *color);
void SGL_UpdateWindow(SGL_Window *window);

#ifdef __cplusplus
}
#endif

#endif // SGL_DRAW_H
