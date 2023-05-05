#pragma once

#ifndef SGL_VEC_H
#define SGL_VEC_H

typedef struct SGL_Vec2 {
    float x;
    float y;
} SGL_Vec2;

typedef struct SGL_Vec3 {
    float x;
    float y;
    float z;
} SGL_Vec3;

typedef struct SGL_Vec4 {
    float x;
    float y;
    float z;
    float w;
} SGL_Vec4;

SGL_Vec2 sgl_vec2(float x, float y);
SGL_Vec3 sgl_vec3(float x, float y, float z);
SGL_Vec4 sgl_vec4(float x, float y, float z, float w);

SGL_Vec2 sgl_vec2_add(SGL_Vec2 a, SGL_Vec2 b);
SGL_Vec3 sgl_vec3_add(SGL_Vec3 a, SGL_Vec3 b);
SGL_Vec4 sgl_vec4_add(SGL_Vec4 a, SGL_Vec4 b);

SGL_Vec2 sgl_vec2_sub(SGL_Vec2 a, SGL_Vec2 b);
SGL_Vec3 sgl_vec3_sub(SGL_Vec3 a, SGL_Vec3 b);
SGL_Vec4 sgl_vec4_sub(SGL_Vec4 a, SGL_Vec4 b);

float dot2(SGL_Vec2 a, SGL_Vec2 b);
float dot3(SGL_Vec3 a, SGL_Vec3 b);
float dot4(SGL_Vec4 a, SGL_Vec4 b);

SGL_Vec3 cross(SGL_Vec3 a, SGL_Vec3 b);

SGL_Vec2 sgl_vec2_scale(SGL_Vec2 a, float scalar);
SGL_Vec3 sgl_vec3_scale(SGL_Vec3 a, float scalar);
SGL_Vec4 sgl_vec4_scale(SGL_Vec4 a, float scalar);

SGL_Vec2 sgl_vec2_normalize(SGL_Vec2 a);
SGL_Vec3 sgl_vec3_normalize(SGL_Vec3 a);
SGL_Vec4 sgl_vec4_normalize(SGL_Vec4 a);

float sgl_length2(SGL_Vec2 a);
float sgl_length3(SGL_Vec3 a);
float sgl_length4(SGL_Vec4 a);



#endif // SGL_VEC_H