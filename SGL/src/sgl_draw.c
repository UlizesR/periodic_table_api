#include "sgl_draw.h"


CGContextRef SGL_GetCGContext(SGL_Window *window) {
    return (CGContextRef)[[NSGraphicsContext currentContext] graphicsPort];
}

CGColorRef SGL_GetCGColor(const SGL_Color *color) {
    return [[NSColor colorWithRed:color->r green:color->g blue:color->b alpha:color->a] CGColor];
}

void SGL_DrawRect(SGL_Window *window, float x, float y, float w, float h, const SGL_Color *color) {
    CGContextRef context = SGL_GetCGContext(window);

    CGContextSetFillColorWithColor(context, SGL_GetCGColor(color));
    CGContextFillRect(context, CGRectMake(x, y, w, h));

    SGL_UpdateWindow(window);
}

void SGL_UpdateWindow(SGL_Window *window) {
    [(id)[window->reserved contentView] setNeedsDisplay:YES];
}
