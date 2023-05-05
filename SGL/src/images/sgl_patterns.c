#include "sgl_patterns.h"
#include "sgl_draw.h"
#include "sgl_ppm.h"
#include "sgl_errors.h"
#include "sgl_colors.h"

#include <string.h>


bool checker_pattern(SGL_Pattern data)
{
    sgl_fill(data.pixels, data.pixel_w, data.pixel_h, data.background_color);
    
    for (int y = 0; y < data.rows; y++)
    {
        for (int x = 0; x < data.cols; x++)
        {
            uint32_t color = data.background_color;
            if ((x + y) % 2 == 0) color = SGL_RED;
            SGL_Rect rect = {{x*data.cell_w, y*data.cell_h}, data.cell_w, data.cell_h, color};
            sgl_draw_rect(data.pixels, data.pixel_w, data.pixel_h, rect);
        }
    }

    const char *file_path = "../app/images/checker.ppm";
    Errno err = sgl_ppm_write(data.pixels, data.pixel_w, data.pixel_h, file_path);
    if (err)
    {
        fprintf (stderr, "ERROR: could not save file %s: %s\n", file_path, strerror(errno));
        return false;
    }
    return true;
}

bool circle_pattern(SGL_Pattern data)
{
    sgl_fill(data.pixels, data.pixel_w, data.pixel_h, data.background_color);
    
    

    const char *file_path = "../app/images/circle.ppm";
    Errno err = sgl_ppm_write(data.pixels, data.pixel_w, data.pixel_h, file_path);
    if (err)
    {
        fprintf (stderr, "ERROR: could not save file %s: %s\n", file_path, strerror(errno));
        return false;
    }
    return true;
}