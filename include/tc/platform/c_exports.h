#pragma once

#include <cstddef>

extern "C" {
    // Platform wrappers
    float trussc_platform_getDisplayScaleFactor();
    const char* trussc_platform_getExecutableDir();
    int trussc_platform_saveScreenshot(const char* path);
    void trussc_platform_setWindowSize(int width, int height);
    int trussc_platform_captureWindow(void* outPixels);

    // Core lifecycle / internal
    void trussc_setup();
    void trussc_cleanup();
    void trussc_internal_resizeSgl(int newMaxVertices, int newMaxCommands);
    // Clear screen wrapper
    void trussc_clear(float r, float g, float b, float a);
}
