
#include "function.h"

int main() {
	srand(time(0));

	Arr arr;
	arr.size = 5;
	New_arr(arr);
	Init_rand_arr(arr);
	Print(arr);
	BoobleSort(arr);
	Print(arr);
	std::cout << Min(arr)<<"\n";
	std::cout << Max(arr) << "\n";
	//ArrEdit(arr, 3);
	ArrEdit(arr, 4,5);
	Print(arr);
	return 0;
}