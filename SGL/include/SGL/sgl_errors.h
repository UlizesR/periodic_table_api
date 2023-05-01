#ifndef SGL_ERRORS_H
#define SGL_ERRORS_H

#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SGL_Error {
    const char *message;
} SGL_Error;

void SGL_SetError(const char *message);
bool SGL_HasError(void);
SGL_Error SGL_GetError(void);
void SGL_ClearError(void);

#ifdef __cplusplus
}
#endif

#endif // SGL_ERRORS_H
