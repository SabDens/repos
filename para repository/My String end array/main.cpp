#include <iostream>
#include "Array.h"
//#include "Fifo.h"
//#include "Lifo.h"
//#include "My_String.h"
//#include "list.h"
//#include "Stack.h"
//#include "doubly_list.h"


int main() { 
	srand(time(0));
	/*Doubly_List<int> dList;
	dList.AddToHead(20);
	dList.AddToHead(30);
	dList.AddToTail(12);
	dList.Show();
	dList.DeleteFromHead();
	dList.Show();
	dList.DeleteFromTail();
	dList.Show();
	dList.DeleteAll();
	dList.Show();*/

	Array<int> arr;
	arr.RandArray(10); 
	arr.Print();
	arr.Save("array.txt");

	arr.Load("array.txt");
	arr.Print();
	return 0;
}