#ifndef sgl_window_h
#define sgl_window_h

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct SGL_Window SGL_Window;

typedef struct SGL_Color {
    float r, g, b, a;
} SGL_Color;

typedef struct SGL_Event {
    int type;
} SGL_Event;

#define SGL_QUIT 1

#ifdef __cplusplus
extern "C" {
#endif

SGL_Window *SGL_CreateWindow(const char *title, int width, int height, SGL_Color color);
void SGL_DestroyWindow(SGL_Window *window);
bool SGL_PollEvent(SGL_Event *event);

#ifdef __cplusplus
}
#endif

#endif /* sgl_window_h */