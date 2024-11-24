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
template<typename T>
void init(T arr[], int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 31;
		}
	}
}
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
void Aufgabe_eins(int* arr,int* arr1,int size,int*& ptr, int& count_size)
{
	int o = 0, j1 = 0, s = 0;
	for (int i = 0; i < size; i++) 
	{
		
		for (int j = 0; j < size; j++,j1)  
		{
			if (arr[i] == arr1[j])  
			{
				break;
			}
		}
		if (j1 == size) 
		{
			for (int s = 0; s < o; s++) 
			{
				if (ptr[s] == arr[i])
				{
					break;  
				}
			}
			if (s == o)
			{
				ptr[o] = arr[i]; 
				o++;
				count_size++; 
			}
		}
		//for (int j = 0; j < size - 1; j++)
		//{
		//	for (int f = 0; f < count_size; f++)
		//	{
		//		if ((*(arr + i) != *(arr1 + j))&& (ptr[f] != *(arr1 + j)))
		//		{
		//			count_size++;
		//		}
		//		if ((*(arr + i) != *(arr1 + j)) && (ptr[f] != *(arr1 + j)))
		//		{

		//			ptr[o] = *(arr + i);
		//			o++;
		//			i++;
		//		}
		//	}
		//}
	}
	if (count_size > 1)
	{
		count_size--;
	}
	
}
void Aufgabe_zwei(int* arr,int* arr1,int size,int*& ptr,int& count_size)
{
	int o = 0; 
	for (int i = 0; i < size; i++)
	{
		int j;
		for (j = 0; j < size; j++)
		{
			if (arr[i] == arr1[j]) 
			{
				break;
			}
		}
		if (j == size)
		{
			int s;
			for (s = 0; s < o; s++)
			{
				if (ptr[s] == arr[i])
				{
					break; 
				}
			}

			if (s == o)  
			{
				ptr[o] = arr[i];
				o++;
				count_size++;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		int j1 =0;
		for (int j = 0; j < size; j++,j1)
		{
			if (arr1[i] == arr[j])
			{
				break;
			}
		}

		if (j1 == size)
		{
			int s;
			for (s = 0; s < o; s++)
			{
				if (ptr[s] == arr1[i])
				{
					break; 
				}
			}
			if (s == o) 
			{
				ptr[o] = arr1[i];
				o++;
				count_size++; 
			}
		}
	}
	if (count_size > 1)
	{
		count_size--;
	}
}


		

int main()
{
	const int size = 5;
	int arr[size];
	int arr1[size];
	int count_size = 1;
	int* ptr = new int[count_size];
	cout << "arr1:";
	for (int i = 0; i < size; i++){cin >> arr[i];}
	cout << "arr2:";
	for (int i = 0; i < size; i++){cin >> arr1[i];}
	cout << "exercise:";
	int exercise;
	std::cin >> exercise;
	switch (exercise)
	{

	case 1:
		Aufgabe_eins(arr, arr1, size, ptr, count_size);
		print(ptr, count_size);
		break;
	case 2:
		Aufgabe_zwei(arr, arr1, size, ptr, count_size);
		print(ptr, count_size);
		break;
	default:
		std::cout << "error ==>>.-.-  ..- ... - .- .-..  ..  .--. --- ...- .- .-.. ..- .--- ... - .-  -. .  .--. . .-. . .-- --- -.. .. - .  ..-.. - ---  <<==";
		break;
	}
}