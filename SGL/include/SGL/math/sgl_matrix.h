// #pragma once

// #ifndef SGL_MATRIX_H
// #define SGL_MATRIX_H

// #include "sgl_vec.h"

// typedef struct SGL_Mat2x2 {
//     SGL_Vec2 R0, R1;
//     SGL_Vec2 C0, C1;
// } SGL_Mat2;

// typedef struct SGL_Mat3x3 {
//     SGL_Vec3 R0, R1, R2;
//     SGL_Vec3 C0, C1, C2;
// } SGL_Mat3;

// typedef struct SGL_Mat4x4 {
//     SGL_Vec4 R0, R1, R2, R3;
//     SGL_Vec4 C0, C1, C2, C3;
// } SGL_Mat4;

// SGL_Mat2x2 sgl_mat2x2(SGL_Vec2 m1, SGL_Vec2 m2);
// SGL_Mat3x3 sgl_mat3x3(SGL_Vec3 m1, SGL_Vec3 m2, SGL_Vec3 m3);
// SGL_Mat4x4 sgl_mat4x4(SGL_Vec4 m1, SGL_Vec4 m2, SGL_Vec4 m3, SGL_Vec4 m4);

// SGL_Mat2x2 sgl_mat2x2_identity();
// SGL_Mat3x3 sgl_mat3x3_identity();
// SGL_Mat4x4 sgl_mat4x4_identity();

// #define SGL_MAT2X2_IDENTITY sgl_mat2x2_identity()
// #define SGL_MAT3X3_IDENTITY sgl_mat3x3_identity()
// #define SGL_MAT4X4_IDENTITY sgl_mat4x4_identity()

// SGL_Mat2x2 sgl_mat2x2_add(SGL_Mat2x2 a, SGL_Mat2x2 b);
// SGL_Mat3x3 sgl_mat3x3_add(SGL_Mat3x3 a, SGL_Mat3x3 b);
// SGL_Mat4x4 sgl_mat4x4_add(SGL_Mat4x4 a, SGL_Mat4x4 b);

// SGL_Mat2x2 sgl_mat2x2_sub(SGL_Mat2x2 a, SGL_Mat2x2 b);
// SGL_Mat3x3 sgl_mat3x3_sub(SGL_Mat3x3 a, SGL_Mat3x3 b);
// SGL_Mat4x4 sgl_mat4x4_sub(SGL_Mat4x4 a, SGL_Mat4x4 b);

// SGL_Mat2x2 sgl_mat2x2_scale(SGL_Mat2x2 a, float scalar);
// SGL_Mat3x3 sgl_mat3x3_scale(SGL_Mat3x3 a, float scalar);
// SGL_Mat4x4 sgl_mat4x4_scale(SGL_Mat4x4 a, float scalar);

// SGL_Mat2x2 sgl_mat2x2_mul(SGL_Mat2x2 a, SGL_Mat2x2 b);
// SGL_Mat3x3 sgl_mat3x3_mul(SGL_Mat3x3 a, SGL_Mat3x3 b);
// SGL_Mat4x4 sgl_mat4x4_mul(SGL_Mat4x4 a, SGL_Mat4x4 b);

// SGL_Mat2x2 sgl_mat2x2_transpose(SGL_Mat2x2 a);
// SGL_Mat3x3 sgl_mat3x3_transpose(SGL_Mat3x3 a);
// SGL_Mat4x4 sgl_mat4x4_transpose(SGL_Mat4x4 a);

// float sgl_mat2x2_determinant(SGL_Mat2x2 a);
// float sgl_mat3x3_determinant(SGL_Mat3x3 a);
// float sgl_mat4x4_determinant(SGL_Mat4x4 a);

// #endif // SGL_MATRIX_H
