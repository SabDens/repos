#include <iostream>

int main()
{
	//srand(time(0));
	//const int size = 40;
	///*int arr[size] = { 64,25,11,22,12 };*/
	////int arr[size] = { 64,25,22,12,11 };
	//int arr[size] = { 1,2,3,4,5,6,7,8,9,10};
	//const int bigSize = 100000;
	//int bigArr[bigSize];

	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = rand()%20;
	//	std::cout << arr[i] << ' ';

	//}
	//std::cout << std::endl;
	/*for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';

	}
	std::cout << std::endl;*/

	/*int pos = -1;
	int count = 0;
	int key;*/

	/*std::cout << "Enter key";
	std::cin >> key;*/

	//літійний пошук
	/*for (int i = 0; i < size; i++)
	{
		count++;
		if (arr[i]==key)
		{
			pos = i;
			break;
		}
	}
	std::cout << std::endl;*/

	//Бынарний пошук
	/*int left = 0;
	int right = bigSize - 1;
	int mid;
	while (left <= right)
	{
		count++;
		mid = (left + right) / 2;
		if (key == bigArr[mid])
		{
			pos = mid;
			break;
			
		}
		else if (key > bigArr[mid])
		{
			left = mid + 1;
		}
		else if (key < bigArr[mid])
		{
			right = mid - 1;
		}
	}*/
	//O(log2n)-дінійня складність

	/*if (pos ==-1)
	{
		std::cout << "k not f\n";
	}
	else
	{
		std::cout << "k I:" << pos << " \n";
	}*/

	/*std::cout << "count = " << count << '\n';
	count = 0;*/
	const int row = 10;
	const int col = 2000;

	int double_arr[row][col];
	int count = 0;
	
	while (true)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				double_arr[i][j] = count++ ;
				/*std::cout << double_arr[i][j] << ' ';*/
				std::cout << double_arr[i][j] << " ";
			}
			/*std::cout << std::endl;*/
		}
	}
	


	return 0;
}