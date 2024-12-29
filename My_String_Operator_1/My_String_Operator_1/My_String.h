#pragma once
#include <iostream>

class My_String
{
private:
	char* _string;
	size_t _length;


	void clear();
public:
	
	My_String();
	My_String(size_t length);
	My_String(const char* etwas);
	My_String(const My_String& other);
	~My_String();
	void Print() const;
	void Init();
	void Init(const char* new_string);
	My_String& operator=(const My_String& other);
	My_String operator+(const My_String& other);
	My_String& operator+=(const My_String& other);
	char operator[](size_t index);
	friend std::ostream& operator<<(std::ostream& os,const My_String etwas);
	bool operator==(const My_String& other);
	bool operator!=(const My_String& other);
	bool operator>(const My_String& other);
	bool operator<(const My_String& other);
};

 