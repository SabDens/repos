#include <iostream>
#include <ios>
#include <ostream> // output stream <<
#include <istream> // input stream >>
#include <iostream>
#include <fstream>
// #include <sstream>

#pragma once
template <typename T>
class Array
{
private:
	T* _data;
	size_t _size;
	size_t _capacity;

public:
	///c����� ����� ������ ������
	void NewArr(size_t size);
	///������� ��������� ������
	void Clear();
	///���������� � ������� +1 
	void Examination_incr();
	///��������� � ����������� ��������� ����� �������
	void Examination();
	///����������� ������ �������
	void NewArrCopy();
	///����������� ������ �������
	void NewArrCopy(size_t size);
	//������������ � �����������
	Array();
	Array(size_t size);
	Array(int* data, size_t size);
	~Array();
	///������ ������ ����������� ���������� ����������
	void RandArray(size_t size);
	///�������� �����������
	void Copy(const Array& arr);
	///��������� ����� ������� ������
	void ElementX(size_t min, size_t max, T elX);
	/// �������� ������
	void Print() const;
	///������ ������ ��������� �������
	size_t Size();
	///�������� ������
	void Size(size_t size);
	///������� ������������ ������ �������
	size_t Capacity();
	///������� ������ �� �������
	T ArrIndex(size_t index);
	///�������� �������� �� �������
	void Element(size_t index, T value);
	///��������� ������ �� ������
	bool CheckNullptr();
	///�������� �� c�������� ������� �� �������
	void Rand_to_index(size_t index);
	///����������� ������ �������
	void ArrSizePlus(size_t size);
	///���������� �������
	void BoobleSort();
	///������� ����������� � ������������ ����� � �������
	void MinAndMax();
	///��������� ������� � �����
	void Append(T value);
	/// ������� ������� �� �������� ������� 
	void Errase(size_t index);
	///������ ������ �� ��������� ��������
	void Reserve(size_t size);
	///������ ������ �� �������� ��������� ������
	void Shrink();
	//���������
	Array& operator=(const Array& other);
	Array& operator=(const T* other);
	Array operator+(const Array& other);
	Array& operator+=(const Array& other);
	T operator[](size_t index);
	template <typename U>
	friend std::ostream& operator<<(std::ostream& os, const Array<U>& etwas);
	bool operator==(const Array& other);
	bool operator!=(const Array& other);
	bool operator>(const Array& other);
	bool operator<(const Array& other);
	Array operator*(const Array& other);
	///��������� ������� � ������
	void Fifo_Push(T value);
	///������� ������� �� �������
	void Fifo_Pop();
	void Lifo_Pop();
	void Save(const char* filename) const;
	void Load(const char* filename);

};

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
	NewArr(_capacity);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = temp_data[i];
	}
}

template <typename T>
void Array<T>::NewArrCopy(size_t size)
{
	T* temp_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		temp_data[i] = _data[i];
	}
	_capacity = size + 10;
	NewArr(_capacity);
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
		_size++;
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

		NewArrCopy();
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
Array<T>::Array(int* data, size_t size)
	:_size(size)
{
	_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = data[i];
	}

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
size_t Array<T>::Size() {
	return _size;
}

template <typename T>
void Array<T>::Size(size_t size) {
	if (size > _size)
	{
		NewArrCopy(size);
	}
	_size = size;
}

template <typename T>
size_t Array<T>::Capacity() {
	return _capacity;
}

template <typename T>
T Array<T>::ArrIndex(size_t index) {
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
	if ((0 > index) || (index < _size))
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
	T* temp_arr = new T[_size];
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
	for (size_t i = index; i < _size -1; i++)
	{
		_data[i] = _data[i + 1];
	}
	_size--;
}
template<typename T>
void Array<T>::Reserve(size_t size) {
	if (size < _size)
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

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	Copy(other);
	return *this;
}

template <typename T>
Array<T>& Array<T>::operator=(const T* other) {
	void Clear();
	_size = sizeof(other) / sizeof(other[0]);
	NewArr(_size);
	for (size_t i = 0; i < _size; i++)
	{
		_data[i] = other[i];
	}
	return *this;
}

template <typename T>
Array<T> Array<T>::operator+(const Array& other) {
	size_t temp_size = _size;
	size_t temp_size_min = other._size;

	if (_size < other._size) {
		temp_size = other._size;
		temp_size_min = _size;
	}
	T* temp_data = new T[temp_size] {};

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

template <typename T>
Array<T>& Array<T>::operator+=(const Array& other) {
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

template <typename T>
T Array<T>::operator[](size_t index)
{
	return _data[index];
}

template <typename U>
std::ostream& operator<<(std::ostream& os, const Array<U>& etwas) {
	for (size_t i = 0; i < etwas._size; i++) {
		os << etwas._data[i] << " ";
	}
	os << "\n";
	return os;
}


template <typename T>
bool Array<T>::operator==(const Array& other)
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

template <typename T>
bool Array<T>::operator!=(const Array& other)
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

template <typename T>
bool Array<T>::operator>(const Array& other)
{
	if (_size > other._size)
	{
		return true;
	}
	return false;
}

template <typename T>
bool Array<T>::operator<(const Array& other)
{
	if (_size > other._size)
	{
		return false;
	}
	return true;
}

template <typename T>
Array<T> Array<T>::operator*(const Array& other) {
	size_t temp_max_size = _size;
	if (_size < other._size)
	{
		temp_max_size = other._size;
	}

	T* temp_data = new T[_size];
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

template <typename T>
void Array<T>::Fifo_Push(T value) {
	Examination_incr();
	for (size_t i = _size-1; i > 0; i--)
	{
		_data[i] = _data[i - 1];
	}
	_data[0] = value;
}

template <typename T>
void Array<T>::Fifo_Pop() {
	for (size_t i = 0; i < _size-1; i++)
	{
		_data[i] = _data[i + 1];
	}
	_size--;
}

template <typename T>
void Array<T>::Lifo_Pop() {
	_size--;
}



template <typename T>
void Array<T>::Save(const char* filename) const {
	std::fstream fileStream(filename, std::ios::out | std::ios::trunc | std::ios::binary);
	if (fileStream.is_open()) {
		fileStream.write(reinterpret_cast<const char*>(&_size), sizeof(size_t));
		fileStream.write(reinterpret_cast<const char*>(_data), sizeof(T) * _size);
		fileStream.close();
	}
}


// std::fstream fileStream();
// A obj;
// obj.Show();

// std::fstream fileStream("test.txt", std::ios::out | std::ios::trunc | std::ios::binary);


//std::fstream fileStream("test.txt", std::ios::in | std::ios::binary);
//if (fileStream.is_open()) {
//	char* buffer = new char[sizeof(A)];
//	fileStream.read(reinterpret_cast<char*>(buffer), sizeof(A));
//	A* ptr = reinterpret_cast<A*>(buffer);
//	ptr->Show();
//}




template <typename T>
void Array<T>::Load(const char* filename) {
	std::fstream fileStream(filename, std::ios::in | std::ios::binary);
	if (fileStream.is_open()) {
		size_t size = 0;
		fileStream.read(reinterpret_cast<char*>(&size), sizeof(size_t));
		NewArr(size);
		fileStream.read(reinterpret_cast<char*>(_data), sizeof(T) * size);
		_size = size;
		fileStream.close();
	}
}