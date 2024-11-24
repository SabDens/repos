#include <iostream>
#include "Matrix.h"

#define MATRIX Matrix

Matrix Create(size_t rows, size_t cols) {
    Matrix result;
    result.data = new int* [rows];
    for (size_t i = 0; i < rows; i++)
    {
        result.data[i] = new int[cols];
    }
    result.rows = rows;
    result.cols = cols;
    return result;
}

void Delete(Matrix& matrix) {
    if (matrix.data != nullptr)
    {
        for (size_t i = 0; i < matrix.rows; i++) {
            delete[] matrix.data[i];
        }
        matrix.data = nullptr;
    }
}

void Init(Matrix& matrix) {
    for (size_t i = 0; i < matrix.rows; i++) {
        for (size_t j = 0; j < matrix.cols; j++) {
            matrix.data[i][j] = rand() % 11;
        }
    }
}

void Print(Matrix& matrix) {
    for (size_t i = 0; i < matrix.rows; i++)
    {
        for (size_t j = 0; j < matrix.cols; j++)
        {
            std::cout << matrix.data[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}

Matrix Plus(const Matrix m1, const Matrix m2) {
    Matrix result = Create(m1.rows, m1.cols);
    for (size_t i = 0; i < m1.rows; i++) {
        for (size_t j = 0; j < m1.cols; j++) {
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    return result;
}