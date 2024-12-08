#pragma once
#include "Array.h"


class Stack
{
private:
	Array _data;
	size_t _size;
public:
	Stack();
	void Clear();
	void Pop();
	int Top();
	void Push(size_t value);
	void Print();
};

