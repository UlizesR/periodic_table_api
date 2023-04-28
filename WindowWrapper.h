#ifndef WINDOWWRAPPER_H
#define WINDOWWRAPPER_H

#include <string>

struct WFM_Color {
    float r, g, b, a;
};

struct WFM_Window {
    WFM_Window(const std::string& title, int width, int height, const WFM_Color& color);
    ~WFM_Window();
};

enum WFM_EventType {
    WFM_QUIT
};

struct WFM_Event {
    WFM_EventType type;
};

WFM_Window* WFM_CreateWindow(const std::string& title, int width, int height, const WFM_Color& color);
void WFM_DestroyWindow(WFM_Window* window);
bool WFM_PollEvent(WFM_Event* event);

#endif // WINDOWWRAPPER_H
