#pragma once
#include "Contact.h"

class College
{
private:
	Contact* contacts;
	size_t _size;
	My_String name;
public:
	void Init(size_t size);
	void Init_Auto(size_t size);
	void Init_arr(size_t size);
	void Show();
	void Show_fur_student();
	~College();
};

