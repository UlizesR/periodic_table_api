#include <stdio.h>
#include "sgl_window.h"
#include "sgl_errors.h"
#include "sgl_colors.h"

int main(int argc, const char * argv[]) {
    SGL_Window *window = SGL_CreateWindow("SGL Window", 640, 480, SGL_DARKSKYBLUE);

    if (SGL_HasError()) {
        fprintf(stderr, "Error creating window: %s\n", SGL_GetError().message);
        SGL_ClearError();
        return 1;
    }

    // Run the event loop
    bool quit = false;
    while (!quit) {
        SGL_Event event;
        while (SGL_PollEvent(&event)) {
            if (event.type == SGL_QUIT) {
                quit = true;
            }
        }
    }

    SGL_DestroyWindow(window);

    return 0;
}
