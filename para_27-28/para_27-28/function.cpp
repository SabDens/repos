#include <iostream>
#include "function.h"

void init_arr(Arr& arr) {
	for (int i = 0; i < arr.size; i++)
	{
		arr.arr[i] = rand() % 11;
	}
}
void print(Arr arr) {
	for ( int i = 0; i < arr.size; i++)
	{
		std::cout << arr.arr[i];
	}
}
int Min_size(Arr arr) {
	int min_size = 0;
	for (int i = 0; i < arr.size; i++)
	{
		if (min_size > arr.arr[i])
		{
			min_size = arr.arr[i];
		}
	}
	return min_size;
}
int Max_size(Arr arr) {
	int max_size = 0;
	for (int i = 0; i < arr.size; i++)
	{
		if (max_size < arr.arr[i])
		{
			max_size = arr.arr[i];
		}
	}
	return max_size;
}
void sorting(Arr& arr) {
	for (int i = 0; i < arr.size; i++)
	{

	}
}