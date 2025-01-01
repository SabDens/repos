#include "Array.h"
#include <iostream>

void Array::Clear() {
	delete[] _data;
	_data = nullptr;
	_size = 0;
}

Array::Array()
	:_data(nullptr),_size()
{
	
}

Array::Array(size_t size) {
	_size = size;
	_data = new int[_size];
}
Array::Array(int* data, size_t size) 
	:_size(size)
{
	_data = new int[_size];
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = data[i];
	}

}

Array::~Array() {
	delete[] _data;
	_size = 0;
}
void Array::RandArray() {

	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = rand() % 100;
	}
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
Array& Array::operator=(const Array& other)
{
	Copy(other);
	return *this;
}
Array& Array::operator=(const int* other) {
	void Clear();
	_size = sizeof(other)/ sizeof(other[0]);
	NewArr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = other[i];
	}
	return *this;
}

Array Array::operator+(const Array& other) {
	size_t temp_size= _size;
	size_t temp_size_min = other._size;

	if (_size < other._size) {
		temp_size = other._size;
		temp_size_min = _size;
	}
	int* temp_data = new int[temp_size] {};

	for (size_t i = 0; i < temp_size_min; i++)
	{
		temp_data[i] = _data[i] + other._data[i];
	}
	if (_size > other._size)
	{
		for (size_t i = temp_size_min; i < temp_size; i++)
		{
			temp_data[i] = _data[i];
		}
	}
	else
	{
		for (size_t i = temp_size_min; i < temp_size; i++)
		{
			temp_data[i] = other._data[i];
		}
	}	
	Array a(temp_data, temp_size);
	delete[] temp_data;
	return a;
}

Array& Array::operator+=(const Array& other) {
	size_t temp_size = _size;
	size_t temp_size_min = other._size;

	if (_size < other._size) {
		temp_size = other._size;
		temp_size_min = _size;
	}
	int* temp_data = new int[temp_size] {};

	for (size_t i = 0; i < temp_size_min; i++)
	{
		temp_data[i] = _data[i] + other._data[i];
	}
	if (_size > other._size)
	{
		for (size_t i = temp_size_min; i < temp_size; i++)
		{
			temp_data[i] = _data[i];
		}
	}
	else
	{
		for (size_t i = temp_size_min; i < temp_size; i++)
		{
			temp_data[i] = other._data[i];
		}
	}
	delete[] _data;
	_data = temp_data;
	_size = temp_size;
	return *this;		
}
int Array::operator[](size_t index)
{
	return _data[index];
}
std::ostream& operator<<(std::ostream& os, const Array& etwas) {
	for (size_t i = 0; i < etwas._size; i++) {
		os << etwas._data[i] << " ";
	}
	os << "\n";
	return os;
}
bool Array::operator==(const Array& other)
{
	if (_size != other._size)
	{
		return false;
	}
	for (size_t i = 0; i < _size; i++)
	{
		if (_data[i] != other._data[i])
		{
			return false;
		}
	}
	return true;
}
bool Array::operator!=(const Array& other)
{
	if (_size != other._size)
	{
		return true;
	}
	for (size_t i = 0; i < _size; i++)
	{
		if (_data[i] != other._data[i])
		{
			return true;
		}
	}
	return false;
}
bool Array::operator>(const Array& other)
{
	if (_size > other._size)
	{
		return true;
	}
	return false;
}

bool Array::operator<(const Array& other)
{
	if (_size > other._size)
	{
		return false;
	}
	return true;
}
Array Array::operator*(const Array& other)  {
	size_t temp_max_size = _size;
	if (_size<other._size)
	{
		temp_max_size = other._size;
	}
	
	int* temp_data = new int[_size];
	size_t result_size = 0;

	for (size_t i = 0; i < _size; i++) {
		for (size_t j = 0; j < other._size; j++) {
			if (_data[i] == other._data[j]) {
				
				temp_data[result_size] = _data[i];
				result_size++;
				break;
			}
		}
	}

	Array a(temp_data, result_size);
	delete[] temp_data;

	return a;
}
