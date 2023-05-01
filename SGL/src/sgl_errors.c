#include "sgl_errors.h"


static SGL_Error error = { NULL };

void SGL_SetError(const char *message) {
    error.message = message;
}

bool SGL_HasError(void) {
    return error.message != NULL;
}

SGL_Error SGL_GetError(void) {
    return error;
}

void SGL_ClearError(void) {
    error.message = NULL;
}
