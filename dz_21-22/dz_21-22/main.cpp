	#include <iostream>
	#include <ctime>

	int* neu_massiv(int size) {
		int* ptr = new int[size];
		return ptr;
	}
	void init(int* ptr, int size) {
		for (int i = 0; i < size; i++) {
			ptr[i] = std::rand() % 100;
		}
	}
	void print(int* ptr, int size) {
		for (int i = 0; i < size; i++) {
			std::cout << ptr[i] << " ";
		}
		std::cout << std::endl;
	}
	void delete_massiv(int* ptr)
	{
		delete[] ptr;
	}
	int* neu_element_massiv(int* ptr, int &size,int n_el) {
		size++;
		int* ptr1 = new int[size];
		for (int i = 0; i < size; i++)
		{
			ptr1[i] = ptr[i];

		}
		ptr1[size-1] = n_el;
		delete[] ptr;
		print(ptr1, size);
		return ptr1;
	
	}
	void element_replacement(int* ptr, int size, int index, int n_element) {
		if (size > index)
		{
			ptr[index] = n_element;
			print(ptr, size);
		}
		else
		{
			std::cout << "this index does not exist";
		}
	}
	int* element_delete(int* ptr, int &size, int index) {
	
		if (size > index)
		{
			int* ptr1 = new int[size - 1];
			for (int i = 0; i < index; i++) 
			{
				ptr1[i] = ptr[i];
			}
			for (int i = index + 1; i < size; i++) 
			{
				ptr1[i - 1] = ptr[i];
			}
			size--;
			delete_massiv(ptr);
			return ptr1;
		}
		else
		{
			std::cout << "this index does not exist";
		}
	}
	bool prime_number_examination(int number) {
		if (number < 2) {
			return false;
		}
		for (int i = 2; i <= number / 2; i++) {
			if (number % i == 0) {
				return false;
			}
		}
		return true;
	}

	void prime_number(int*& ptr,int &size) {
		for (int i = 0; i < size; i++)
		{
			if (prime_number_examination(ptr[i]) == true)
			{
				ptr = element_delete(ptr, size, i);
				i--;
			}
		}
		//print(ptr, size);
	}
	/*void copy(int* arr, int* ptr, int size) {
		for (int i = 0; i < size; i++) {
			arr[i] = ptr[i];
		}
	}*/

	int main()
	{
		std::srand(std::time(0));
		//Задание 1



		//
		//int size = 5;
		//std::cout << "1:" <<std::endl ;
		//int* ptr = neu_massiv(size);
		//std::cout << "2:" << std::endl;
		//init(ptr, size);
		//std::cout << "3:" << std::endl;
		//print(ptr, size);
		//std::cout << "4:" << std::endl;
		////delete_massiv(ptr);
		//int n_element;
		//std::cout << "5:" << std::endl <<"new number";
		//std::cin >> n_element;
		//ptr = neu_element_massiv(ptr,size, n_element);
		// print(ptr, size);
		//std::cout << "6:" << std::endl << "index and number";
		//int index;
		//std::cin >> index;
		//std::cin >> n_element;
		// print(ptr, size);
		//element_replacement(ptr, size, index, n_element);
		//std::cout << "7:" << std::endl << "index";
		//std::cin >> index;
		//element_delete(ptr, size, index);
		// print(ptr, size);
		//delete_massiv(ptr);


		// Задание 2


		/*int size = 15;
		int* ptr = neu_massiv(size);
		init(ptr, size);
		print(ptr, size);
		prime_number(ptr, size);
		print(ptr, size);*/


		//Задание 3


	}

	