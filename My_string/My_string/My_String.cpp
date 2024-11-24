#include "My_String.h"
#include "iostream"


My_String::My_String() {
	_length = 80;
	_data = new char[_length];
}
My_String::My_String(size_t length)
	:_length(length)
{
	_data = new char[_length];
}
My_String::My_String(const char* etwas)
{
	_length = strlen(etwas);
	_data = new char[_length];
	for (size_t i = 0; i < _length; i++)
	{
		_data[i] = etwas[i];
	}
}
My_String::My_String(const My_String& other)
	: _length(other._length)
{
	_data = new char[_length + 1];
	for (size_t i = 0; i < _length; i++)
	{
		_data[i] = other._data[i];
	}
}



My_String::~My_String()
{
	delete[] _data;
}
void My_String::Print() const
{
	std::cout << _data << "\n";
}
void My_String::Init() {
	std::cin.getline(_data, _length );
}