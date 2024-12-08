#include "Array.h"
#include <iostream>

Array::Array()
	:_data(nullptr),_size()
{
	
}

Array::Array(size_t size) {
	_size = size;
	_data = new int[_size];
}

Array::~Array() {
	delete[] _data;
	_size = 0;
}

void Array::RandArray(size_t size) {
	_size = size;
	
	NewArr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i]= rand() % 100;
	}
}

void Array::Copy(const Array& other) {
	_size = other._size;
	delete[] _data;
	_data = new int[_size];
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = other._data[i];
	}
}

void Array::ElementX(size_t min, size_t max, int elX)
{
	if (min > max)
	{
		size_t qwe = min;
		min = max;
		max = qwe;
	}
	if ((min < 0)||(min> _size)||(max<0)||(max> _size))
	{
		return;
	}
	for (size_t i = min; i < max; i++)
	{
		_data[i] = elX;
	}
}
 
void Array::Print() {
	for (size_t i = 0; i < _size; i++)
	{
		std::cout << _data[i]<< " ";
	}
	std::cout << "\n";
}
int Array::Size() {
	return _size;
}
int Array::ArrIndex(size_t index){
	return _data[index];
}
void Array::Element(size_t index, size_t value) {
	_data[index] = value;
}
void Array::Clear(){
	delete[] _data;
	_data = nullptr;
	_size = 0;

}
bool Array::CheckNullptr() {
	if (_data == nullptr)
	{
		return true;
	}
	return false;
}
void Array::NewArr(size_t size) {
	_size = size;
	delete[] _data;
	_data = new int[_size] {};
}
void Array::Rand_to_index(size_t index) {
	if ((0 < index) || (index < _size))
	{
		_data[index] = rand() % 100;
	}
	else
	{
		std::cout << "Rand_to_index: index not correct";
	}
}
void Array::ArrSizePlus(size_t size) {
	if (size<1)
	{
		std::cout << "ArrSizePlus: mix size ist 1";
		return;
	}
	if (size == _size)
	{
		std::cout << "ArrSizePlus: size == _size";
		return;
	}
	int* temp_arr = new int[size];
	if (size> _size)
	{
		for (size_t i = 0; i < _size; i++)
		{
			temp_arr[i] = _data[i];
		}
		
	}
	if (size < _size)
	{
		for (size_t i = 0; i < size; i++)
		{
			temp_arr[i] = _data[i];
		}
	}
	_size = size;
	NewArr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = temp_arr[i];
	}

}

void boobleSort(int* arr, const size_t size)
{
	int temp;
	bool isSwaped;
	int end = size - 1;
	for (int i = 0; i < size; i++)
	{
		isSwaped = false;
		for (int j = 0; j < end; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				isSwaped = true;
			}
		}
		if (isSwaped == false)
		{
			return;
		}
		end--;
	}
}
void Array::BoobleSort() {
	boobleSort(_data, _size);
}
void Array::MinAndMax() {
	int* temp_arr = new int[_size];
	for (size_t i = 0; i < _size; i++)
	{
		temp_arr[i] = _data[i];
	}
	boobleSort(temp_arr, _size);
	std::cout << "min"<<temp_arr[0] <<"\nmax"<< temp_arr[_size - 1]<<"\n";
	delete[] temp_arr;
}