#pragma once
template <typename T>
class Array
{
private:
	T* _data;
	size_t _size;
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
};

