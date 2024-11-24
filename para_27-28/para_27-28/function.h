#pragma once
struct Arr {
    int* arr;
    size_t size;
};
void init_arr(Arr& arr);
void print(Arr arr);