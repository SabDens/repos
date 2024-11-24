#pragma once
#include <iostream>

//
//template<typename T>
//T** Create(size_t rows, size_t cols) {
//    T** ptrPtr = new T * [rows];
//    for (size_t i = 0; i < rows; i++) {
//        ptrPtr[i] = new T[cols];
//    }
//    return ptrPtr;
//}

template<typename N>
void Delete(N*** arr, size_t rows, size_t cols) {
    N** tmp = *arr;
    for (size_t i = 0; i < rows; i++) {
        delete[] tmp[i];
    }
    delete[] tmp;
    *arr = nullptr;
}

// template<typename N>
// void Delete(N*** arr, size_t rows, size_t cols) {
//     for (size_t i = 0; i < rows; i++) {
//         N* tmp = (*arr)[i];
//         delete[] tmp;
//     }
// 
//     N** tmp = *arr;
//     delete[] tmp;
//     *arr = nullptr;
// }
template<typename T>
void Init(T** arr, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            arr[i][j] = rand() % 11;
        }
    }
}

template<typename T>
void Print(T** arr, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << std::endl;
    }
}


//int** DeleteNullRows(int** arr, size_t& rows, size_t cols) {
//    int count = 0;
//    for (size_t i = 0; i < rows; i++) {
//        for (size_t j = 0; j < cols; j++) {
//            if (arr[i][j] == 0) {
//                count++;
//                delete[] arr[i];
//                arr[i] = nullptr;
//                break;
//            }
//        }
//    }
//
//    int new_rows = rows - count;
//    int** new_arr = new int* [new_rows];
//    for (size_t i = 0, j = 0; i < rows; i++) {
//        if (arr[i] != nullptr) {
//            new_arr[j] = arr[i];
//            j++;
//        }
//    }
//
//    rows = new_rows;
//    return new_arr;
//    /*delete[] arr;
//    arr = new_arr;*/
//}
