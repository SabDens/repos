#pragma once
class My_String
{
private:
	char* _data;
	size_t _length;



public:
	My_String();
	My_String(size_t length);
	My_String(const char* etwas);
	My_String(const My_String& other);
	~My_String();
	void Print() const;
	void Init();
	;
};

 