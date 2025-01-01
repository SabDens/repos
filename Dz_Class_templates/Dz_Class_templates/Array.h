#pragma once
template <typename T>
class Array
{
private:
	T* _data;
	size_t _size;
	size_t _temp_size=0;
	size_t _capacity;

public:
	void NewArr(size_t size);
	void Clear();
	void Examination_incr();
	void Examination();
	void NewArrCopy();

	Array();
	Array(size_t size);
	~Array();
	void RandArray(size_t size);
	void Copy(const Array& arr);
	void ElementX(size_t min, size_t max, T elX);
	void Print() const;
	int Size();
	int Capacity();
	int ArrIndex(size_t index);
	void Element(size_t index, T value);
	bool CheckNullptr();
	void Rand_to_index(size_t index);
	void ArrSizePlus(size_t size);
	void BoobleSort();
	void MinAndMax();
	void Append(T value);
	void Errase(size_t index);
	void Reserve(size_t size);
	void Shrink();
};

#include "Array.h"
#include <iostream>

template <typename T>
void Array<T>::NewArr(size_t size) {
	_size = size;
	delete[] _data;
	_data = new T[_capacity];
}

template <typename T>
void Array<T>::Clear() {
	delete[] _data;
	_data = nullptr;
	_size = 0;

}

template <typename T>
void Array<T>::NewArrCopy()
{
	T* temp_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		temp_data[i] = _data[i];
	}
	_capacity = _size + 10;
	NewArr(_temp_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = temp_data[i];
	}
}

template <typename T>
void Array<T>::Examination_incr() {
	if (_size >= _capacity)
	{
		NewArrCopy();
	}
	else
	{
		_size++;
	}
}

template <typename T>
void Array<T>::Examination() {
	if (_size >= _capacity)
	{
		NewArrCopy(_size);
	}
}

template <typename T>
Array<T>::Array()
	:_size(), _capacity(10)
{
	_data = new T[_capacity];
}

template <typename T>
Array<T>::Array(size_t size) {
	_size = size;
	_capacity = size + 10;
	_data = new T[_capacity];
}

template <typename T>
Array<T>::~Array() {
	delete[] _data;
	_size = 0;
}

template <typename T>
void Array<T>::RandArray(size_t size) {
	_size = size;

	NewArr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = rand() % 100;
	}
}

template <typename T>
void Array<T>::Copy(const Array& other) {
	_size = other._size;
	NewArr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = other._data[i];
	}
}

template <typename T>
void Array<T>::ElementX(size_t min, size_t max, T elX)
{
	if (min > max)
	{
		size_t qwe = min;
		min = max;
		max = qwe;
	}
	if ((min < 0) || (min > _size) || (max < 0) || (max > _size))
	{
		return;
	}
	for (size_t i = min; i < max; i++)
	{
		_data[i] = elX;
	}
}

template <typename T>
void Array<T>::Print() const {
	for (size_t i = 0; i < _size; i++)
	{
		std::cout << _data[i] << " ";
	}
	std::cout << "\n";
}

template <typename T>
int Array<T>::Size() {
	return _size;
}
template <typename T>
int Array<T>::Capacity() {
	return _capacity;
}

template <typename T>
int Array<T>::ArrIndex(size_t index) {
	return _data[index];
}

template <typename T>
void Array<T>::Element(size_t index, T value) {
	_data[index] = value;
}

template <typename T>
bool Array<T>::CheckNullptr() {
	if (_data == nullptr)
	{
		return true;
	}
	return false;
}

template <typename T>
void Array<T>::Rand_to_index(size_t index) {
	if ((0 < index) || (index < _size))
	{
		_data[index] = rand() % 100;
	}
	else
	{
		std::cout << "Rand_to_index: index not correct";
	}
}
template <typename T>
void Array<T>::ArrSizePlus(size_t size) {
	if (size < 1)
	{
		std::cout << "ArrSizePlus: mix size ist 1";
		return;
	}
	if (size == _size)
	{
		std::cout << "ArrSizePlus: size == _size";
		return;
	}
	T* temp_arr = new T[size];
	if (size > _size)
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
	Examination();
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = temp_arr[i];
	}

}
template <typename T>
void boobleSort(T* arr, const size_t size)
{
	T temp;
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

template <typename T>
void Array<T>::BoobleSort() {
	boobleSort(_data, _size);
}

template <typename T>
void Array<T>::MinAndMax() {
	int* temp_arr = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		temp_arr[i] = _data[i];
	}
	boobleSort(temp_arr, _size);
	std::cout << "min" << temp_arr[0] << "\nmax" << temp_arr[_size - 1] << "\n";
	delete[] temp_arr;
}

template <typename T>
void Array<T>::Append(T value) {
	Examination_incr();
	_data[_size] = value;
}
template <typename T>
void Array<T>::Errase(size_t index) {
	for (size_t i = index; i < _size--; i++)
	{
		_data[i] = _data[i + 1];
	}
	_size--;
}
template<typename T>
void Array<T>::Reserve(size_t size){
	if (size< _size )
	{
		return;
	}
	T* temp_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		temp_data[i] = _data[i];
	}
	_capacity = size + 10;
	NewArr(size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = temp_data[i];
	}

}
template<typename T>
void Array<T>::Shrink() {
	T* temp_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		temp_data[i] = _data[i];
	}
	NewArr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = temp_data[i];
	}
}