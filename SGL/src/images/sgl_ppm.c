#include "image/sgl_ppm.h"

#define return_defer(value) do { result = (value); goto defer; } while (0)

Errno sgl_ppm_write(uint32_t *pixels, size_t width, size_t height, const char *filename)
{
    int result = 0;
    FILE *file = NULL;
    {
        file = fopen(filename, "wb");
        if (file == NULL) return_defer(errno);

        fprintf(file, "P6\n%zu %zu 255\n", width, height);
        if (ferror(file)) return_defer(errno);

        for (size_t i = 0; i < width * height; i++)
        {
            uint32_t pixel = pixels[i];
            uint8_t bytes[3] = {
                ((pixel >> 16) &0xFF),
                ((pixel >> 8) &0xFF),
                ((pixel >> 0) &0xFF),
            };
            fwrite(bytes, sizeof(bytes), 1, file);
            if (ferror(file)) return_defer(errno);
        }
    }
    
    defer:
        if (file) fclose(file);
        return result;

    return 0;
}