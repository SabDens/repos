#include "My_String.h"

void My_String::clear() {
	delete[] _string;
	_string = nullptr;
	_length = 0;	
}
My_String::My_String() {
	_length = 80;
	_string = new char[_length+1];
	_string[0] = '\0';
}

My_String::My_String(size_t length)
	:_length(length)
{
	_string = new char[_length];
}

My_String::My_String(char* etwas)
{
	_length = strlen(etwas);
	_string = new char[_length];
	for (size_t i = 0; i < _length; i++)
	{
		_string[i] = etwas[i];
	}
}

My_String::My_String(const My_String& other)
	: _length(other._length)
{
	_string = new char[_length + 1];
	for (size_t i = 0; i < _length; i++)
	{
		_string[i] = other._string[i];
	}
	_string[_length] = '\0';
}



My_String::~My_String()
{
	delete[] _string;
}
void My_String::Print() const
{
	std::cout << _string << "\n";
}
void My_String::Init() {
	std::cin.getline(_string, _length );
	_length = strlen(_string);
}
void My_String::Init(const char* new_string) {
	int  new_length = strlen(new_string);
	clear();
	_string = new char[new_length + 1];
	for (rsize_t i = 0; i < new_length; i++)
	{
		_string[i] = new_string[i];
	}
	_string[new_length] = '\0';
	_length = new_length;
}