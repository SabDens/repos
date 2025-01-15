#include <iostream>
#include "Array.h"
#include "Fifo.h"
#include "Lifo.h"
#include "My_String.h"
#include "list.h"
#include "Stack.h"



int main() {
	srand(time(0));
	Lifo<int> obj;
	obj.Push(12);
	obj.Push(13);
	obj.Push(14);
	obj.Push(15);
	obj.Push(16);
	obj.Print();
	std::cout << obj.Top()<<"\n";
	obj.Pop();
	obj.Pop();
	obj.Pop();
	obj.Print();


	return 0;
}