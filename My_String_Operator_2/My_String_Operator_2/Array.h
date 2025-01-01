#pragma once
#include <iostream>

class Array
{
private:
	int* _data;
	size_t _size;
	void Clear();
public:
	Array();
	Array(size_t size);
	Array(int* data,size_t size);
	~Array();
	void RandArray();
	void RandArray(size_t size);
	
	void Copy(const Array& arr);
	void ElementX(size_t min, size_t max, int elX);
	void Print();
	int Size();
	int ArrIndex(size_t index);
	void Element(size_t index, size_t value);
	bool CheckNullptr();
	void NewArr(size_t size);
	void Rand_to_index(size_t index);
	void ArrSizePlus(size_t size);
	void BoobleSort();
	void MinAndMax();
	Array& operator=(const Array& other);
	Array& operator=(const int* other);
	Array operator+(const Array& other);
	Array& operator+=(const Array& other);
	int operator[](size_t index);
	friend std::ostream& operator<<(std::ostream& os,const Array& etwas);
	bool operator==(const Array& other);
	bool operator!=(const Array& other);
	bool operator>(const Array& other);
	bool operator<(const Array& other);
	Array operator*(const Array& other);
};

