#include <iostream>
//#include "Array.h"
//#include "Fifo.h"
//#include "Lifo.h"
//#include "My_String.h"
//#include "list.h"
//#include "Stack.h"
#include "doubly_list.h"


int main() { 
	srand(time(0));
	Doubly_List<int> dList;
	dList.AddToHead(73);
	dList.AddToTail(14);
	dList.AddToTail(17);
	dList.AddToTail(37);
	dList.AddToTail(70);
	dList.AddToHead(73);
	dList.AddToHead(73);

	dList.Show();
	dList.Replace(73,1);
	dList.Show();

	//dList.InsertPos(25, 2);
	//dList.DeletePos(5);
	//dList.Show();
	//dList.Reverse();
	//dList.Show();
	//std::cout << dList.Find(70);
	return 0;
}