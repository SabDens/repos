#include <iostream>


int main()
{

	//1
	/*const int size_1 = 10;
	const int size_2 = 5;
	int array[size_1]{ 1,2,3,4,5,6,7,8,9,10};
	int array1[size_2]{}, array2[size_2]{};
	
	for (int i = 0; i < size_1; i)
	{
		for (int j = 0; j < size_2; j++)
		{
			array1[j] = array[i];
			i++;
			array2[j] = array[i];
			i++;
		}
	}
	
	for (int i = 0; i < size_2; i++)
	{
		std::cout << array1[i] <<" ";
	}
	std::cout << "\n";
	for (int i = 0; i < size_2; i++)
	{
		std::cout << array2[i]<<" ";
	}*/


	//2
	/*const int size = 10;
	int array[size]{ 1,2,3,4,5,6,7,8,9,10 },array1[size]{ 1,2,3,4,5,6,7,8,9,10 }, array2[size]{};
	for (int i = 0; i < size; i++)
	{
		array2[i] = array[i] + array1[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << array2[i] << " ";
	}*/


	//3
	/*const int size = 10;
	int array[size] = {0,2,3,0,5,6,7,8,0,10 },num = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] != 0) {
			array[num] = array[i];
			num++;
		}
	}
	for (int i = num; i < size; i++) {
		array[i] = -1;
	}
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}*/


	//4

	return 0;
}