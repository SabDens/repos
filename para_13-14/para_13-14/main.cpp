#include <iostream>
#include <Windows.h>
int sum(int a, int b)
{
	return a + b;
}

void init(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21;
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

// O (n^2)   O (n^2)    O(n)
void boobleSort(int arr[],const int size)
{
	int temp;
	bool isSwaped;
	int end = size - 1;
	for (int i = 0; i < size; i++)
	{
		isSwaped = false;
		for (int j = 0; j < end; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				isSwaped = true;
			}
		}
		if (isSwaped == false)
		{
			return;
		}
		end--;
	}
}

int linerSearch(int arr[], int size, int key)
{
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
}
int binarySearch(int arr[], int size, int key)
{
	int left = 0;
	int right = size - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (key == arr[mid])
		{
			return mid;
		}
		else if (key > arr[mid])
		{
			left = mid + 1;
		}
		else if (key < arr[mid])
		{
			right = mid - 1;
		}
	}
	return -1;
}

void exemple1(int value)
{
	//value =value+ 10;
	value += 10;
}

void Rechteck(int K, int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			std::cout << "0";
		}
		std::cout << std::endl;
	}
}
int mehr_Zahlen(int a, int b)
{
	if (a<b)
	{
		return b;
	}
	else if (a>b)
	{
		return a;
	}
	else
	{
		std::cout << "ny da : 0"<< std::endl;
		return a;
	}
}
bool Wahrheit(int a)
{
	if (a>0)
	{
		return 1;
	}
	else if (a<0)
	{
		return 0;
	}
}
int main()
{
	//setlocale(LC_ALL,"ukr");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int num = 0;
	std::cout << ":";
	std::cin >> num;
	std::cout << std::endl;
	if (num ==1)
	{
		int n, k;
		std::cout << ":";
		std::cin >> n;
		std::cout << ":";
		std::cin >> k;
		Rechteck(n, k);
	}
	else if (num == 2)
	{
		int n, k;
		std::cout << ":";
		std::cin >> n;
		std::cout << ":";
		std::cin >> k;
		std::cout << mehr_Zahlen(n, k);
	}
	else if(num==3)
	{
		int k;
		std::cout << ":";
		std::cin >> k;
		if (Wahrheit(k)>0)
		{
			std::cout << "true";
		}
		else
		{
			std::cout << "flase";
		}
	}
}


//int main()
//{
//	int number = 20;
//	exemple1(number);
//	std::cout << "number = " << number;
//
//	return 0;
//}

//int main()
//{
//	/*double a, b;
//	std::cin >> a >> b;
//
//	int result = sum(a, b);
//	std::cout << "sum = " << result;*/
//
//	srand(time(0));
//	const int size1 = 10;
//	int arr1[size1]{};
//	const int size2 = 15;
//	int arr2[size2]{};
//
//	init(arr1, size1);
//	print(arr1, size1);
//	init(arr2, size2);
//	print(arr2, size2);
//
//	return 0;
//}

//int main()
//{
//	srand(time(0));
//	const int size = 20;
//	int arr[size] = { 65, 25, 12, 22, 11 };
//	////int arr[size] = { 11, 12, 22, 25, 65 };
//	//int arr[size];
//	const int bigSize = 10'000;
//	int bigArr[bigSize];
//
//	init(bigArr, bigSize);
//
//	init(arr, size);
//	print(arr,size);
//
//	
//
//
//	//const int size = 3;
//	//int arr[size][size]{};
//	//int count1 = 1;
//	//const int row = 3;
//
//	//// Заповнення масиву
//	//for (int i = 0; i < size; i++)
//	//{
//	//	for (int j = 0; j < size; j++)
//	//	{
//	//		arr[i][j] = count1++;
//	//	}
//	//}
//
//	//for (int i = 0; i < row; i++) {
//	//	for (int space = 0; space < i; space++) {
//	//		std::cout << ' ';
//	//	}
//	//	std::cout << arr[i][i] << std::endl;
//	//}
//
//	// Бульбашкове сортування
//	// 
//	//      j = 3;
//	//		arr[j] > arr[j + 1]
//	//         swap(arr[j], arr[j + 1])
//	// 
//	//      1. [65][25][12][22][11] 2. [25][65][12][22][11] 3. [25][12][65][22][11] 3. [25][12][22][11][65]
//	//      1. [25][12][22][11] 2. [25][12][22][11] 3. [11][12][22][25] 3. [25][12][22][11]
//	//      1. [25][12][22] 2. [25][12][22] 3. [11][12][22] 3. [25][12][22]
//	//      1. [25][12] 2. [25][12] 3. [11][12] 3. [25][12]
//	//       j++;
//	//
//
//	boobleSort(arr, size);
//	
//
//
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << arr[i] << ' ';
//	}
//	std::cout << std::endl;
//
//
//	int pos = -1;
//	int key;
//
//	std::cout << "Enter key: ";
//	std::cin >> key;
//
//	// Лінійний пошук
//	// time
//	linerSearch(arr, size, key);
//	//std::cout << "count = " << count << '\n';
//	//count = 0;
//	// O(n) - лінійна складність
//	//Бінарний пошук
//	binarySearch(arr, size, key);
//
//
//	//// O(log2n) - лінійна складність
//
//	//if (pos == -1)
//	//{
//	//	std::cout << "key not found!\n";
//	//}
//	//else {
//	//	std::cout << "key index: " << pos << '\n';
//	//}
//
//	//std::cout << "count = " << count << '\n';
//
//	return 0;
//}