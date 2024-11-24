#pragma once

struct Matrix {
    int** data;
    size_t rows;
    size_t cols;
};

Matrix Create(size_t rows, size_t cols);
void Init(Matrix& matrix);
Matrix Plus(const Matrix m1, const Matrix m2);
void Print(Matrix& matrix);
void Delete(Matrix& matrix);