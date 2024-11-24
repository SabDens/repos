#include <iostream>
// тип_який_повертає_функція імя_функції(тип_аргумента імя_аргумента...)
// {
//   тіло_функції ...
// }
using std::cout;

int sum(int a, int b)
{
	return a + b;
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

void print(char arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
}

void init(int arr[], const int size);
void init(double arr[], const int size);

//void print(int arr[], const int size);
//void print(double arr[], const int size);
//void print(char arr[], const int size);

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
// O (n^2)   O (n^2)   O(n)
void boobleSort(int arr[], const int size)
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

// Лінійний пошук
// O(n) - лінійна складність
int linearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

//Бінарний пошук
// O(log2n) - лінійна складність
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

void example1(int value)
{
	value += 10;
}

template<typename T>
T power(T value, int p = 2)
{
	if (p == 0)
	{
		return 1;
	}
	if (p == 1)
	{
		return value;
	}

	return value * power(value, p - 1);
}


template<typename T>
T factorial(T value)
{
	if (value == 0 || value == 1)
	{
		return 1;
	}

	return value * factorial(value - 1);
}

int min(int arr[], int begin, int end)
{
	if (begin == end) {
		return arr[begin];
	}	
	int res = min(arr, begin + 1, end);
	if (arr[begin] < res) {
		return arr[begin];
	}
	else {
		return res;
	}
}

// arr = {24, 5, 8, 2}

const int GLOBAL_col = 3;


void func1()
{
	int value;
	std::cin >> value;
	int* ptr = new int[value];
	std::cout << ptr << std::endl;
	delete[] ptr;
}
// Завдання 1
// Дано два масиви : A[M] і B[N] (M і N вводяться з клавіатури).
// Необхідно створити третій масив мінімально можливого розміру,
// у якому потрібно зібрати елементи обох масивів.

void Task1() 
{
	int M;
	int N;
	std::cout << ";";
	std::cin >> M;
	std::cout << ";";
	std::cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	int* C = new int[M + N];


	init(A, M);
	init(B, N);
	print(A, M);
	print(B, N);


	// [1][2][3]    [4][5][6][7]
	// [1][2][3][ ][ ][ ][ ]

	for (int i = 0; i < M; i++)
	{
		C[i] = A[i];
	}
	for (int i = 0; i < N; i++)
	{
		C[M + i] = B[i];
	}

	print(C, M + N);


	delete[] A;
	delete[] B;
	delete[] C;
}
void Task2()
{
	int M;
	int N;
	std::cout << ";";
	std::cin >> M;
	std::cout << ";";
	std::cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	int* C = new int[M + N];


	init(A, M);
	init(B, N);
	print(A, M);
	print(B, N);

	// [1][2][3]    [4][5][6][7]
	// [1][2][3][ ][ ][ ][ ]

	int count = 0;
	


	for (int i = 0; i < M; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			if (A[i] == B[j]) 
			{

				C[count++] = A[i];

			}
		}
	}
	
	print(C, count);


	delete[] A;
	delete[] B;
	delete[] C;
}


int return10()
{
	int value = 10;
	return value;
}
void fprint(int* arr, const int size, int& sum, int& m) {
	sum = 0;
	m = 0;
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
void fprint1(int* arr, const int size, int& sum, int& m) {
	sum = 0;
	m = 1;
	for (int i = 0; i < size; i++) {
		sum += *(arr + i);

		m *= *(arr + i);
	}
	std::cout << std::endl;
}
void fprint2(int* arr, const int size, int& p, int& m, int& n) {
	p = 0;
	m = 0;
	n = 0;

	for (int i = 0; i < size; i++) 
	{

		if (*(arr + i) > 0) 
		{

			p++;
		}
		else if (*(arr + i) < 0) 
		{
			m++;
		}
		else if (*(arr + i) == 0) 
		{
			n++;

		}

	}
}

void fprint2(int* arr1, int size1, int* arr2 ,int size2,int& o1) {
	int p = 1;
	o1 = 0;
	for (int i = 0; i < size1-size2; i++)
	{
		p=1;
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i + j] != arr2[j]) {
				p=0;
				break;
			}
		}
		if (p > 0 )
		{
			o1 = arr1[i];
		}
	}

}
//Написати функцію, яка отримує покажчик на динамічний масив і його розмір.
// Функція повинна видалити з масиву всі від'ємні числа і повернути покажчик на новий динамічний масив.
void fprint2(int* arr1, int size1) {
	for (int i = 0; i < size1; i++)
	{

	}


}
int main()
{




	srand(time(0));
	// Task1();

	int xx = 52; // xx - это Lvalue, а 52 - это Rvalue


	char str[] = "Hello";
	int x = 20;

	int* ptr = &x;
	int& ref = x;

	ref += 10;
	ptr += 10;


	int&& Rref = return10();

	cout << (int&&)return10();
	const int& cnstRef = 20;


	// &  - посилання на Lvalue - викорестовується для передачі у функцію
	// && - посилання на Rvalue - викорестовується для роботи з тимчасовими сутностями
	// Rvalue - это временные сущности, которые не имеют имени,
	// и адрес которых невозможно получить обычным способом.
	int arr[10]{ 1, 2, 3, 4, -1, 6, 7, 8, 9, 0 };
	//int* ptr = new int[10] = {1, 2, 3, 4, -1, 6, 7, 8, 9, 0};
	int arr1[3]{ 2, 3, 4 };
	int sum;
	int m;

	fprint1(arr, 10, sum, m);
	cout << sum << " " << m << "\n";

	int p;
	int n;
	int o;
	fprint2(arr, 10, p, n, o);
	cout << p << " " << n << " " << o << "\n";

	int o1;
	fprint2(arr, 10, arr1, 3, o1);
	cout << o1 << "\n";


	// int value1 = 20; ------> [] <--
	//     | 
	// int* ptr1 = &value1; ----
	//     |
	// int* value = ptr1; --------

	// & — амперсант (отримання адреси)
	// * — оператор розіменування (отримання значення по адресі)
	// & — амперсант
	//int value1 = 10;
	//int value2 = 10;
	//char value3 = '0';

	// & – амперсант (отримання адреси)
	// * – оператор розіменування (отримання значення по адресі)


	/*Task2();


	int value1 = 10;
	char value2 = 20;

	int arr[10];

	const int value3 = 30;*/

	// new тип
	// new тип[розмір]

	// delete    delete[]


	/*int* ptr = new int(10);
	delete ptr;*/

	/*while (true)
	{
		func1();
		system("pause");
	}*/


	/*std::cin >> value1;
	int* ptr = new int[value1];

	init(ptr, value1);
	print(ptr, value1);*/

	
	// усі змінні та масиви за замовчки створюються у статичній пам'яті (Стеку)
	// Стек – це область оперативної пам'яті ... її розмір обмежений.
	
	
	
	//int* ptr1 = &value1;
	//char* ptr2 = &value3;

	//*ptr1 += 40;

	//std::cout << &value1 << "\n" << ptr1 << std::endl;


	/*int a = 10;
	int b = 20;

	int* ptrA = &a;
	int* ptrB = &b;

	std::cout << ((*ptrA > *ptrB) ? *ptrA : *ptrB)<< std::endl;*/

	/*int c;
	std::cin >> c;
	int* ptrC = &c;
	if (ptrC <0)
	{
		std::cout << "-";
	}
	else if (ptrC > 0)
	{
		std::cout << "+";
	}
	else if (ptrC == 0)
	{
		std::cout << "0";
	}*/

	/*int a = 10;
	int b = 20;
	int c ;
	int* ptrA = &a;
	int* ptrB = &b;
	int* ptrC = &c;

	ptrC = ptrA;
	ptrA = ptrB;
	ptrB = ptrC;
	std::cout <<"a = "<< *ptrA <<"\n" << "b = "<< *ptrB;*/

	/*int a, b;
	char symbol;
	std::cin >> a >> symbol >> b;
	int* ptrA = &a;
	int* ptrB = &b;
	char* ptrSymbol = &symbol;
	switch (*ptrSymbol)
		{
		case '*':
			std::cout << *ptrA * *ptrB;
			break;
		case '/':
			std::cout << *ptrA / *ptrB;
			break;
		case '+':
			std::cout << *ptrA + *ptrB;
			break;
		case '-':
			std::cout << *ptrA - *ptrB;
			break;
		case '%':
			std::cout << *ptrA % *ptrB;
			break;
		default:
			std::cout << "error";
			break;
		}*/

	/*const int size = 4;
	int arr1[size]{};
	char arr2[] = { "Hello" };

	init(arr1, size);
	print(arr1, size);*/

	//
	//  arr1 ===== [][][][]
	//              ^   ^
	//              |   |
	//              0   2
	//
	//  arr2 ===== H e l l o
	//              ^ ^ ^ ^ ^
	//              | | | | |
	//              0 1 2 3 4
	//

	/*std::cout << arr2 << std::endl;
	std::cout << *(arr2 + 0) << std::endl;

	void* voidPtr = arr2;

	std::cout << (int*)voidPtr << std::endl;*/



	/*const int size0 = 5; 
	int arr[size0];
	for (int i = 0; i < size0; i++)
	{
		arr[i] += i+1;
	}
	int* ptr = arr;
	int sum = 0; 

	for (int i = 0; i < size0; i++) {
		sum += *ptr;
		ptr++;
	}

	std::cout << "Sum: " << sum << std::endl;*/

	/*srand(time(0));
	const int row = 5, col = 5;
	int arr[row][col]{};
	init(arr, row, col);
	print(arr, row, col);

	std::cout << std::endl;
	for (int i = 0; i < row * col; i++)
	{
		std::cout << arr + i << std::endl;
	}*/

	//const int size = 10;
	//int arr1[size] {};
	//init(arr1, size);
	//print(arr1, size);
	//std::cout << min(arr1, 0, size - 1);

	//double arr2[size2];
	//char arr3[12] = "Hello world";

	//init(arr1, size1);
	//init(arr2, size2);

	//print(arr1, size1);
	//print(arr2, size2);
	//print(arr3, 12);
	//std::cout << factorial<unsigned long long>(10) << std::endl;

	return 0;
}



//int main()
//{
//	srand(time(0));
//	const int size = 20;
//	int arr[size] = {65, 25, 12, 22, 11};
//	////int arr[size] = { 11, 12, 22, 25, 65 };
//	//int arr[size];
//	const int bigSize = 10'000;
//	int bigArr[bigSize];
//
//	init(bigArr, bigSize);
//
//	init(arr, size);
//	print(arr, size);
//
//	int value = 10;
//	example1(value);
//
//	if (true)
//	{
//		int c = size;
//	}
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
//	print(arr, size);
//
//	int pos = -1;
//	int key;
//
//	std::cout << "Enter key: ";
//	std::cin >> key;
//
//	//pos = linearSearch(arr, size, key);
//	
//	pos = binarySearch(arr, size, key);
//
//	if (pos == -1)
//	{
//		std::cout << "key not found!\n";
//	}
//	else {
//		std::cout << "key index: " << pos << '\n';
//	}
//
//	return 0;
//}