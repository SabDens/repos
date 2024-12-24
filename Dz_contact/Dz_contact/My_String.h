#pragma once
#include <iostream>
class My_String
{
private:
	char* _string;
	size_t _length;
public:
	void clear();

	My_String();
	My_String(size_t length);
	My_String(char* etwas);
	My_String(const My_String& other);
	~My_String();
	void Print() const;
	void Init(); 
	void Init(const char* new_string);
};

 