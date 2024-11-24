#include <iostream>

using std::cout;
using std::cin;
void print(char arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
void print(char arr[], const int size);
template<typename Type>
void print(Type arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
template<typename T>
void print(T arr[], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << '\t';
		}
		std::cout << std::endl;
	}
}
void init(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21;
	}
}
void init(double arr[], const int size)
{
	double count = 1;
	for (int i = 0; i < size; i++)
	{
		arr[i] = count += .5;
	}
}
void init(int arr[], const int size);
void init(double arr[], const int size);

template<typename T>
void init(T arr[], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 31;
		}
	}
}

int sum(int* ptr, int size) 
{
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += *(ptr + i); 
	}

	return sum;
}
void copy(int* ptr, int size,int* ptr1)
{
	for (int i = 0; i <= size; i++)
	{
		*(ptr1 + i) = *(ptr + i);
	}
}
void chislo(int* ptr ,int value1)
{
	int temp;
	for (int i = 0, j = value1 - 1; i < value1; i++, j--)
	{
		if (i == j)
		{
			break;
		}
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + j);
		*(ptr + j) = temp;
	}
}
void chislo1(int* ptr, int* ptr1, int value1)
{
	int temp;
	for (int i = 0, j = value1 - 1; i < value1; i++, j--)
	{
		*(ptr1 +j)= *(ptr + i);
	}


}
int main()
{
	
	srand(time(0));
	
	while (true)
	{
		int value1 = 0;
		int* ptr = new int[value1];
		int* ptr2 = new int[value1];
		std::cout << "\n" << ":";
		int exercise, n, n1, n2, n3;
		std::cin >> exercise;

		switch (exercise)
		{
		case 1:
			std::cout << ":";
			cin >> value1;
			init(ptr, value1);
			//print(ptr, value1);
			cout << sum(ptr, value1);
				
			break;
		case 2:
			std::cout << ":";
			cin >> value1;
			init(ptr, value1);
			print(ptr, value1);
			copy(ptr, value1, ptr2);
			print(ptr2, value1);
			

			break;
		case 3:
			std::cout << ":";
			cin >> value1;
			init(ptr, value1);
			print(ptr, value1);
			chislo(ptr, value1);
			print(ptr, value1);
			break;
		case 4:
			std::cout << ":";
			cin >> value1;
			init(ptr, value1);
			print(ptr, value1);
			chislo1(ptr, ptr2, value1);
			print(ptr2, value1);
			break;
				default:
					std::cout << "error";
					break;
		}

	}

	return 0;
}
