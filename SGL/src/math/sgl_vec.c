#include "math/sgl_vec.h"
#include <math.h>

SGL_Vec2 sgl_vec2(float x, float y)
{
    return (SGL_Vec2){x, y};
}

SGL_Vec3 sgl_vec3(float x, float y, float z)
{   
    return (SGL_Vec3){x, y, z};
}

SGL_Vec4 sgl_vec4(float x, float y, float z, float w)
{
    return (SGL_Vec4){x, y, z, w};
}


SGL_Vec2 sgl_vec2_add(SGL_Vec2 a, SGL_Vec2 b)
{
    SGL_Vec2 c;
    c.x = b.x + a.x;
    c.y = b.y + a.y;
    return c;
}

SGL_Vec3 sgl_vec3_add(SGL_Vec3 a, SGL_Vec3 b)
{
    SGL_Vec3 c;
    c.x = b.x + a.x;
    c.y = b.y + a.y;
    c.z = b.z + a.z;
    return c;
}

SGL_Vec4 sgl_vec4_add(SGL_Vec4 a, SGL_Vec4 b)
{
    SGL_Vec4 c;
    c.x = b.x + a.x;
    c.y = b.y + a.y;
    c.z = b.z + a.z;
    c.w = b.w + a.w;
    return c;
}


SGL_Vec2 sgl_vec2_sub(SGL_Vec2 a, SGL_Vec2 b)
{
    SGL_Vec2 c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c;
}

SGL_Vec3 sgl_vec3_sub(SGL_Vec3 a, SGL_Vec3 b)
{
    SGL_Vec3 c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    c.z = a.z - b.z;
    return c;
}

SGL_Vec4 sgl_vec4_sub(SGL_Vec4 a, SGL_Vec4 b)
{
    SGL_Vec4 c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    c.z = a.z - b.z;
    c.w = a.w - b.w;
    return c;
}

float dot2(SGL_Vec2 a, SGL_Vec2 b)
{
   return a.x * b.x + a.y * b.y;
}

float dot3(SGL_Vec3 a, SGL_Vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

float dot4(SGL_Vec4 a, SGL_Vec4 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}


SGL_Vec3 cross(SGL_Vec3 a, SGL_Vec3 b)
{
    SGL_Vec3 c = {a.y * b.z - a.z * b.y,
                  a.z * b.x - a.x * b.z,
                  a.x * b.y - a.y * b.x
                };
    return c;
}

SGL_Vec2 sgl_vec2_scalar(SGL_Vec2 a, float scalar)
{
    SGL_Vec2 b = {a.x * scalar, a.y * scalar};
    return b;
}

SGL_Vec3 sgl_vec3_scalar(SGL_Vec3 a, float scalar)
{
    SGL_Vec3 b = {a.x * scalar, a.y * scalar, a.z * scalar};
    return b;
}

SGL_Vec4 sgl_vec4_scalar(SGL_Vec4 a, float scalar)
{
    SGL_Vec4 b = {a.x * scalar, a.y * scalar, a.z * scalar, a.w * scalar};
    return b;
}

float sgl_length2(SGL_Vec2 a)
{
    return sqrtf(a.x * a.x + a.y * a.y);
}

float sgl_length3(SGL_Vec3 a)
{
    return sqrtf(a.x * a.x + a.y * a.y + a.z * a.z);
}

float sgl_length4(SGL_Vec4 a)
{
    return sqrtf(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
}

SGL_Vec2 sgl_vec2_normalize(SGL_Vec2 a)
{
    SGL_Vec2 b;
    float length = sgl_length2(a);
    b.x = a.x / length;
    b.y = a.y / length;
    return b;
}

SGL_Vec3 sgl_vec3_normalize(SGL_Vec3 a)
{
    SGL_Vec3 b;
    float length = sgl_length3(a);
    b.x = a.x / length;
    b.y = a.y / length;
    b.z = a.z / length;
    return b;
}

SGL_Vec4 sgl_vec4_normalize(SGL_Vec4 a)
{
    SGL_Vec4 b;
    float length = sgl_length4(a);
    b.x = a.x / length;
    b.y = a.y / length;
    b.z = a.z / length;
    b.w = a.w / length;
    return b;
}



