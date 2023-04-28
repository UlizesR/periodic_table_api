#ifndef WINDOWWRAPPER_H
#define WINDOWWRAPPER_H

#include <string>

struct SGL_Color {
    float r, g, b, a;
};

struct SGL_Window {
    SGL_Window(const std::string& title, int width, int height, const SGL_Color& color);
    ~SGL_Window();
};

enum SGL_EventType {
    SGL_QUIT
};

struct SGL_Event {
    SGL_EventType type;
};

SGL_Window* SGL_CreateWindow(const std::string& title, int width, int height, const SGL_Color& color);
void SGL_DestroyWindow(SGL_Window* window);
bool SGL_PollEvent(SGL_Event* event);

#endif // WINDOWWRAPPER_H
