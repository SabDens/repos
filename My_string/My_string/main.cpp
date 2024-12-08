#include "iostream"
#include "My_String.h"
#include "Array.h"
#include "Stack.h"


int main() {
	srand(time(0));
	/*My_String obj; 
	obj.Init();
	obj.Print();
	obj.Init("qwerty");
	obj.Print();*/
	Array arr;
	/*arr.ElementX(20,13, 3);
	arr.RandArray(12);
	arr.Print();
	arr.~Array();*/
	arr.RandArray(10);
	arr.Print();
	arr.BoobleSort();
	arr.Print();
	arr.MinAndMax();
	arr.Print();

	/*Stack obj_steck;
	obj_steck.Print();
	obj_steck.Push(12);
	obj_steck.Print();*/
	//std::cout<<obj_steck.Top();

	/*Array Array_Obj(22);
	Array_Obj.Print();
	Array_Obj.ElementX(15,21,22);
	Array_Obj.Print();
	Array_Obj.Element(12, 34);
	Array_Obj.Print();*/
	return 0;
}