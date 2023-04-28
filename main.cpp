#include "WindowWrapper.h"
#include "Colors.h"

int main(int argc, const char * argv[]) {
    SGL_Window *window = SGL_CreateWindow("My C++ Window", 640, 480, SGL_BLACK);

    // Run the event loop
    bool quit = false;
    while (!quit) {
        SGL_Event event;
        while (SGL_PollEvent(&event)) {
            if (event.type == SGL_QUIT) quit = true;
        }
    }

    SGL_DestroyWindow(window);
    return 0;
}
