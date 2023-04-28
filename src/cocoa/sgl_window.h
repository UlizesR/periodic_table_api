#ifndef SGL_WINDOW_H
#define SGL_WINDOW_H

#include <stdbool.h>

typedef struct SGL_Color {
    float r, g, b, a;
} SGL_Color;

typedef enum SGL_EventType {
    SGL_QUIT
} SGL_EventType;

typedef struct SGL_Event {
    SGL_EventType type;
} SGL_Event;

typedef struct SGL_Window SGL_Window;

// Create a new window
SGL_Window *SGL_CreateWindow(const char *title, int width, int height, SGL_Color color);

// Destroy a window
void SGL_DestroyWindow(SGL_Window *window);

// Check for events
bool SGL_PollEvent(SGL_Event *event);

#endif // SGL_WINDOW_H