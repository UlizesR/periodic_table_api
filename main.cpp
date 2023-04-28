#include "WindowWrapper.h"

int main(int argc, const char * argv[]) {
    WFM_Window *window = WFM_CreateWindow("My C++ Window", 640, 480);

    // Run the event loop
    bool quit = false;
    while (!quit) {
        WFM_Event event;
        while (WFM_PollEvent(&event)) {
            if (event.type == WFM_QUIT) quit = true;
        }
    }

    WFM_DestroyWindow(window);
    return 0;
}
