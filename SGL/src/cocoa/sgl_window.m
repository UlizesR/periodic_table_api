#import <Cocoa/Cocoa.h>
#include "sgl_window.h"
#include "sgl_errors.h"

// Add a complete type definition for SGL_Window
struct SGL_Window {
    void *reserved;
};

@interface AppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate>
@property (nonatomic, strong) NSWindow *window;
@property (atomic) BOOL shouldKeepRunning;
@end

@implementation AppDelegate

- (instancetype)initWithTitle:(NSString *)title width:(CGFloat)width height:(CGFloat)height {
    self = [super init];
    if (self) {
        _shouldKeepRunning = YES;

        _window = [[NSWindow alloc] initWithContentRect:NSMakeRect(0, 0, width, height)
                                              styleMask:NSWindowStyleMaskTitled | NSWindowStyleMaskClosable | NSWindowStyleMaskResizable | NSWindowStyleMaskMiniaturizable
                                                backing:NSBackingStoreBuffered
                                                  defer:NO];
        [_window cascadeTopLeftFromPoint:NSMakePoint(20, 20)];
        [_window setTitle:title];
        [_window setDelegate:self];
        [_window makeKeyAndOrderFront:nil];
    }
    return self;
}

- (void)applicationDidFinishLaunching:(NSNotification *)notification {
    // Do nothing
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)sender {
    return YES;
}

- (void)windowWillClose:(NSNotification *)notification {
    _shouldKeepRunning = NO;
    [NSApp terminate:self];
}

- (void)setBackgroundColor:(NSColor *)color {
    [_window setBackgroundColor:color];
}

@end

SGL_Window *SGL_CreateWindow(const char *title, int width, int height, SGL_Color color) {
    SGL_ClearError(); // Clear any previous errors

    SGL_Window *window = (SGL_Window *)malloc(sizeof(SGL_Window));
    if (window == NULL) {
        SGL_SetError("Failed to allocate memory for SGL_Window");
        return NULL;
    }

    @autoreleasepool {
        NSString *nsTitle = [NSString stringWithCString:title encoding:NSUTF8StringEncoding];
        CGFloat nsWidth = (CGFloat)width;
        CGFloat nsHeight = (CGFloat)height;

        NSApplication *app = [NSApplication sharedApplication];
        AppDelegate *appDelegate = [[AppDelegate alloc] initWithTitle:nsTitle width:nsWidth height:nsHeight];

        // Check for errors
        if (SGL_HasError()) {
            free(window);
            return NULL;
        }

        [app setDelegate:appDelegate];

        // Set the background color
        CGFloat red = color.r;
        CGFloat green = color.g;
        CGFloat blue = color.b;
        CGFloat alpha = color.a;
        NSColor *backgroundColor = [NSColor colorWithSRGBRed:red green:green blue:blue alpha:alpha];
        [appDelegate setBackgroundColor:backgroundColor];

        [app run];
    }

    return window;
}

void SGL_DestroyWindow(SGL_Window *window) {
    if (window) {
        free(window);
    }
}

bool SGL_PollEvent(SGL_Event *event) {
    AppDelegate *appDelegate = (AppDelegate *)[NSApp delegate];
    if (!appDelegate.shouldKeepRunning) {
        event->type = SGL_QUIT;
        return true;
    }
    printf("Hello, World!\n");
    return false;
}

