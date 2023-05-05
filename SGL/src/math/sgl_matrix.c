#include "math/sgl_matrix.h"

SGL_Mat2x2 sgl_mat2x2(SGL_Vec2 m1, SGL_Vec2 m2)
{
    SGL_Mat2x2 M;
    M.R0 = sgl_vec2(m1.x, m2.x);
    M.R1 = sgl_vec2(m1.y, m2.y);
    M.C0 = m1;
    M.C1 = m2;
    return M;
}

SGL_Mat3x3 sgl_mat3x3(SGL_Vec3 m1, SGL_Vec3 m2, SGL_Vec3 m3)
{
    SGL_Mat3x3 M;
    M.R0 = sgl_vec3(m1.x, m2.x, m3.x);
    M.R1 = sgl_vec3(m1.y, m2.y, m3.y);
    M.R2 = sgl_vec3(m1.z, m2.z, m3.z);
    M.C0 = m1;
    M.C1 = m2;
    M.C2 = m3;
    return M;
}

SGL_Mat4x4 sgl_mat4x4(SGL_Vec4 m1, SGL_Vec4 m2, SGL_Vec4 m3, SGL_Vec4 m4)
{
    SGL_Mat4x4 M;
    M.R0 = sgl_vec4(m1.x, m2.x, m3.x, m4.x);
    M.R1 = sgl_vec4(m1.y, m2.y, m3.y, m4.y);
    M.R2 = sgl_vec4(m1.z, m2.z, m3.z, m4.z);
    M.R3 = sgl_vec4(m1.w, m2.w, m3.w, m4.w);
    M.C0 = m1;
    M.C1 = m2;
    M.C2 = m3;
    M.C3 = m4;
    return M;
}

SGL_Mat2x2 sgl_mat2x2_identity()
{
    SGL_Mat2x2 M;
    M.R0 = sgl_vec2(1.0f, 0.0f);
    M.R1 = sgl_vec2(0.0f, 1.0f);
    M.C0 = sgl_vec2(1.0f, 0.0f);
    M.C1 = sgl_vec2(0.0f, 1.0f);
    return M;
}

SGL_Mat3x3 sgl_mat3x3_identity()
{
    SGL_Mat3x3 M;
    M.R0 = sgl_vec3(1.0f, 0.0f, 0.0f);
    M.R1 = sgl_vec3(0.0f, 1.0f, 0.0f);
    M.R2 = sgl_vec3(0.0f, 0.0f, 1.0f);
    M.C0 = sgl_vec3(1.0f, 0.0f, 0.0f);
    M.C1 = sgl_vec3(0.0f, 1.0f, 0.0f);
    M.C2 = sgl_vec3(0.0f, 0.0f, 1.0f);
    return M;
}

SGL_Mat4x4 sgl_mat4x4_identity()
{
    SGL_Mat4x4 M;
    M.R0 = sgl_vec4(1.0f, 0.0f, 0.0f, 0.0f);
    M.R1 = sgl_vec4(0.0f, 1.0f, 0.0f, 0.0f);
    M.R2 = sgl_vec4(0.0f, 0.0f, 1.0f, 0.0f);
    M.R3 = sgl_vec4(0.0f, 0.0f, 0.0f, 1.0f);
    M.C0 = sgl_vec4(1.0f, 0.0f, 0.0f, 0.0f);
    M.C1 = sgl_vec4(0.0f, 1.0f, 0.0f, 0.0f);
    M.C2 = sgl_vec4(0.0f, 0.0f, 1.0f, 0.0f);
    M.C3 = sgl_vec4(0.0f, 0.0f, 0.0f, 1.0f);
    return M;
}

SGL_Mat2x2 sgl_mat2x2_add(SGL_Mat2x2 a, SGL_Mat2x2 b)
{
    SGL_Mat2x2 M;
    M.R0 = sgl_vec2_add(a.R0, b.R0);
    M.R1 = sgl_vec2_add(a.R1, b.R1);
    return M;
}

SGL_Mat3x3 sgl_mat3x3_add(SGL_Mat3x3 a, SGL_Mat3x3 b)
{
    SGL_Mat3x3 M;
    M.R0 = sgl_vec3_add(a.R0, b.R0);
    M.R1 = sgl_vec3_add(a.R1, b.R1);
    M.R2 = sgl_vec3_add(a.R2, b.R2);
    return M;
}

SGL_Mat4x4 sgl_mat4x4_add(SGL_Mat4x4 a, SGL_Mat4x4 b)
{
    SGL_Mat4x4 M;
    M.R0 = sgl_vec4_add(a.R0, b.R0);
    M.R1 = sgl_vec4_add(a.R1, b.R1);
    M.R2 = sgl_vec4_add(a.R2, b.R2);
    M.R3 = sgl_vec4_add(a.R3, b.R3);
    return M;
}


SGL_Mat2x2 sgl_mat2x2_sub(SGL_Mat2x2 a, SGL_Mat2x2 b)
{
    SGL_Mat2x2 M;
    M.R0 = sgl_vec2_sub(a.R0, b.R0);
    M.R1 = sgl_vec2_sub(a.R1, b.R1);
    return M;
}

SGL_Mat3x3 sgl_mat3x3_sub(SGL_Mat3x3 a, SGL_Mat3x3 b)
{
    SGL_Mat3x3 M;
    M.R0 = sgl_vec3_sub(a.R0, b.R0);
    M.R1 = sgl_vec3_sub(a.R1, b.R1);
    M.R2 = sgl_vec3_sub(a.R2, b.R2);
    return M;
}

SGL_Mat4x4 sgl_mat4x4_sub(SGL_Mat4x4 a, SGL_Mat4x4 b)
{
    SGL_Mat4x4 M;
    M.R0 = sgl_vec4_sub(a.R0, b.R0);
    M.R1 = sgl_vec4_sub(a.R1, b.R1);
    M.R2 = sgl_vec4_sub(a.R2, b.R2);
    M.R3 = sgl_vec4_sub(a.R3, b.R3);
    return M;
}


SGL_Mat2x2 sgl_mat2x2_scale(SGL_Mat2x2 a, float scalar)
{
    SGL_Mat2x2 M;
    M.R0 = sgl_vec2_scale(a.R0, scalar);
    M.R1 = sgl_vec2_scale(a.R1, scalar);
    return M;
}

SGL_Mat3x3 sgl_mat3x3_scale(SGL_Mat3x3 a, float scalar)
{
    SGL_Mat3x3 M;
    M.R0 = sgl_vec3_scale(a.R0, scalar);
    M.R1 = sgl_vec3_scale(a.R1, scalar);
    M.R2 = sgl_vec3_scale(a.R2, scalar);
    return M;
}

SGL_Mat4x4 sgl_mat4x4_scale(SGL_Mat4x4 a, float scalar)
{
    SGL_Mat4x4 M;
    M.R0 = sgl_vec4_scale(a.R0, scalar);
    M.R1 = sgl_vec4_scale(a.R1, scalar);
    M.R2 = sgl_vec4_scale(a.R2, scalar);
    M.R3 = sgl_vec4_scale(a.R3, scalar);
    return M;
}

SGL_Mat2x2 sgl_mat2x2_mul(SGL_Mat2x2 a, SGL_Mat2x2 b)
{
    SGL_Mat2x2 M;
    M.R0 = sgl_vec2(sgl_vec2_dot(a.R0, b.C0), sgl_vec2_dot(a.R0, b.C1));
    M.R1 = sgl_vec2(sgl_vec2_dot(a.R1, b.C0), sgl_vec2_dot(a.R1, b.C1));
    return M;
}

SGL_Mat3x3 sgl_mat3x3_mul(SGL_Mat3x3 a, SGL_Mat3x3 b)
{
    SGL_Mat3x3 M;
    M.R0 = sgl_vec3(sgl_vec3_dot(a.R0, b.C0), sgl_vec3_dot(a.R0, b.C1), sgl_vec3_dot(a.R0, b.C2));
    M.R1 = sgl_vec3(sgl_vec3_dot(a.R1, b.C0), sgl_vec3_dot(a.R1, b.C1), sgl_vec3_dot(a.R1, b.C2));
    M.R2 = sgl_vec3(sgl_vec3_dot(a.R2, b.C0), sgl_vec3_dot(a.R2, b.C1), sgl_vec3_dot(a.R2, b.C2));
    return M;
}

SGL_Mat4x4 sgl_mat4x4_mul(SGL_Mat4x4 a, SGL_Mat4x4 b)
{
    SGL_Mat4x4 M;
    M.R0 = sgl_vec4(sgl_vec4_dot(a.R0, b.C0), sgl_vec4_dot(a.R0, b.C1), sgl_vec4_dot(a.R0, b.C2), sgl_vec4_dot(a.R0, b.C3));
    M.R1 = sgl_vec4(sgl_vec4_dot(a.R1, b.C0), sgl_vec4_dot(a.R1, b.C1), sgl_vec4_dot(a.R1, b.C2), sgl_vec4_dot(a.R1, b.C3));
    M.R2 = sgl_vec4(sgl_vec4_dot(a.R2, b.C0), sgl_vec4_dot(a.R2, b.C1), sgl_vec4_dot(a.R2, b.C2), sgl_vec4_dot(a.R2, b.C3));
    M.R3 = sgl_vec4(sgl_vec4_dot(a.R3, b.C0), sgl_vec4_dot(a.R3, b.C1), sgl_vec4_dot(a.R3, b.C2), sgl_vec4_dot(a.R3, b.C3));
    return M;
}


SGL_Mat2x2 sgl_mat2x2_transpose(SGL_Mat2x2 a)
{
    SGL_Mat2x2 M;
    M.R0 = sgl_vec2(a.R0.x, a.R1.x);
    M.R1 = sgl_vec2(a.R0.y, a.R1.y);
    M.C0 = sgl_vec2(a.C0.x, a.C0.y);
    M.C1 = sgl_vec2(a.C1.x, a.C1.y);
    return M;
}

SGL_Mat3x3 sgl_mat3x3_transpose(SGL_Mat3x3 a)
{
    SGL_Mat3x3 M;
    M.R0 = sgl_vec3(a.R0.x, a.R1.x, a.R2.x);
    M.R1 = sgl_vec3(a.R0.y, a.R1.y, a.R2.y);
    M.R2 = sgl_vec3(a.R0.z, a.R1.z, a.R2.z);
    M.C0 = sgl_vec3(a.C0.x, a.C0.y, a.C0.z);
    M.C1 = sgl_vec3(a.C1.x, a.C1.y, a.C1.z);
    M.C2 = sgl_vec3(a.C2.x, a.C2.y, a.C2.z);
    return M;
}

SGL_Mat4x4 sgl_mat4x4_transpose(SGL_Mat4x4 a)
{
    SGL_Mat4x4 M;
    M.R0 = sgl_vec4(a.R0.x, a.R1.x, a.R2.x, a.R3.x); 
    M.R1 = sgl_vec4(a.R0.y, a.R1.y, a.R2.y, a.R3.y);
    M.R2 = sgl_vec4(a.R0.z, a.R1.z, a.R2.z, a.R3.z);
    M.R3 = sgl_vec4(a.R0.w, a.R1.w, a.R2.w, a.R3.w);
    M.C0 = sgl_vec4(a.C0.x, a.C0.y, a.C0.z, a.C0.w);
    M.C1 = sgl_vec4(a.C1.x, a.C1.y, a.C1.z, a.C1.w);
    M.C2 = sgl_vec4(a.C2.x, a.C2.y, a.C2.z, a.C2.w);
    M.C3 = sgl_vec4(a.C3.x, a.C3.y, a.C3.z, a.C3.w);
    return M;
}


float sgl_mat2x2_determinant(SGL_Mat2x2 a)
{
    return a.R0.x * a.R1.y - a.R0.y * a.R1.x;
}

float sgl_mat3x3_determinant(SGL_Mat3x3 a)
{
    SGL_Mat2x2 A = {a.R1.y, a.R1.z, a.R2.y, a.R2.z};
    SGL_Mat2x2 B = {a.R1.x, a.R1.z, a.R2.x, a.R2.z};
    SGL_Mat2x2 C = {a.R1.x, a.R1.y, a.R2.x, a.R2.y};

    return a.R0.x * sgl_mat2x2_determinant(A) - a.R0.y * sgl_mat2x2_determinant(B) + a.R0.z * sgl_mat2x2_determinant(C);
}

float sgl_mat4x4_determinant(SGL_Mat4x4 a)
{
    SGL_Mat3x3 A = {a.R1.y, a.R1.z, a.R1.w, a.R2.y, a.R2.z, a.R2.w, a.R3.y, a.R3.z, a.R3.w};
    SGL_Mat3x3 B = {a.R1.x, a.R1.z, a.R1.w, a.R2.x, a.R2.z, a.R2.w, a.R3.x, a.R3.z, a.R3.w};
    SGL_Mat3x3 C = {a.R1.x, a.R1.y, a.R1.w, a.R2.x, a.R2.y, a.R2.w, a.R3.x, a.R3.y, a.R3.w};
    SGL_Mat3x3 D = {a.R1.x, a.R1.y, a.R1.z, a.R2.x, a.R2.y, a.R2.z, a.R3.x, a.R3.y, a.R3.z};

    return a.R0.x * sgl_mat3x3_determinant(A) - a.R0.y * sgl_mat3x3_determinant(B) + a.R0.z * sgl_mat3x3_determinant(C) - a.R0.w * sgl_mat3x3_determinant(D);
}
