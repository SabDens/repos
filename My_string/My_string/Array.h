#pragma once

class Array
{
private:
	int* _data;
	size_t _size;
public:
	Array();
	Array(size_t size);
	~Array();
	void RandArray(size_t size);
	
	void Copy(const Array& arr);
	void ElementX(size_t min, size_t max, int elX);
	void Print();
	int Size();
	int ArrIndex(size_t index);
	void Element(size_t index, size_t value);
	void Clear();
	bool CheckNullptr();
	void NewArr(size_t size);
	void Rand_to_index(size_t index);
	void ArrSizePlus(size_t size);
	void BoobleSort();
	void MinAndMax();
};

