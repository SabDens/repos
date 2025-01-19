#include <iostream>
#include <string>

class A
{
public:
	virtual ~A() {

	}


};
class B :public A
{
public:
	int value = 10;

};
class C :public A
{
public:
	double value = 20;

};

class E :public A
{
public:

};
int main() {
	int a = 10;
	float b = a;

	return 0;
}