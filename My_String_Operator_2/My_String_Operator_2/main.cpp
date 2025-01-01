#include "iostream"
#include "My_String.h"
#include "Array.h"


int main() {
	srand(time(0));
	//My_String obj("Boo ");
	//My_String obj1("Denys");
	//My_String obj2("Denys");
	//obj.Print();
	//obj1.Print();
	///*obj = obj1;
	//obj.Print();
	//obj1.Print();*/
	////obj += obj1;

	////obj.Print();
	//bool a = obj1 == obj;
	//std::cout << a;
	Array arr(5);
	arr.RandArray();
	arr.Element(2, 2);
	arr.Print();
	Array arr2(6);
	arr2.RandArray();
	arr2.Element(2, 2);
	arr2.Print();
	//Array arr1 = arr + arr2;
	arr =arr * arr2;
	arr.Print();
	//std::cout << arr;
	return 0;
}