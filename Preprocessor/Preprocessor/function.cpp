#include "function.h"

#ifdef INTEGER
void New_arr_int(Arr& obj) {
	obj.arr = new int[obj.size];
}

void Init_rand_arr_int(Arr& obj) {
	for (size_t i = 0; i < obj.size; i++)
	{
		obj.arr[i] = rand() % 100;
	}
}

void Print_int(const Arr& obj) {
	for (size_t i = 0; i < obj.size; i++)
	{
		std::cout << obj.arr[i] << " ";
	}
	std::cout << "\n";
}


void BoobleSort_int(Arr& obj)
{
	int temp;
	bool isSwaped;
	size_t end = obj.size - 1;
	for (size_t i = 0; i < obj.size; i++)
	{
		isSwaped = false;
		for (size_t j = 0; j < end; j++)
		{
			if (obj.arr[j] > obj.arr[j + 1])
			{
				temp = obj.arr[j];
				obj.arr[j] = obj.arr[j + 1];
				obj.arr[j + 1] = temp;
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

int MinOrMax(Arr& obj, bool a) {
	Arr obj_temp;
	obj_temp.size = obj.size;
	New_arr(obj_temp);
	for (size_t i = 0; i < obj.size; i++)
	{
		obj_temp.arr[i] = obj.arr[i];
	}
	BoobleSort(obj_temp);
	int tr = obj_temp.arr[0];
	int fa = obj_temp.arr[obj_temp.size - 1];
	delete[] obj_temp.arr;
	if (a)
	{
		return tr;
	}
	else
	{
		return fa;
	}
}

int Min_int(Arr& obj) {
	return MinOrMax(obj, true);
}
int Max_int(Arr& obj) {
	return MinOrMax(obj, false);
}

void ArrEdit_int(Arr& obj, size_t index) {
	std::cin >> obj.arr[index];
}
void ArrEdit_int(Arr& obj, size_t index, size_t value) {
	obj.arr[index] = value;
}	





#elif defined(DOUBLE)

void New_arr_double(Arr& obj) {
	obj.arr = new double[obj.size];
}

void Init_rand_arr_double(Arr& obj) {
	for (size_t i = 0; i < obj.size; i++)
	{
		obj.arr[i] = rand() % 100;
	}
}

void Print_double(const Arr& obj) {
	for (size_t i = 0; i < obj.size; i++)
	{
		std::cout << obj.arr[i] << " ";
	}
	std::cout << "\n";
}


void BoobleSort_double(Arr& obj)
{
	double temp;
	bool isSwaped;
	size_t end = obj.size - 1;
	for (size_t i = 0; i < obj.size; i++)
	{
		isSwaped = false;
		for (size_t j = 0; j < end; j++)
		{
			if (obj.arr[j] > obj.arr[j + 1])
			{
				temp = obj.arr[j];
				obj.arr[j] = obj.arr[j + 1];
				obj.arr[j + 1] = temp;
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

double MinOrMax(Arr& obj, bool a) {
	Arr obj_temp;
	obj_temp.size = obj.size;
	New_arr(obj_temp);
	for (size_t i = 0; i < obj.size; i++)
	{
		obj_temp.arr[i] = obj.arr[i];
	}
	BoobleSort(obj_temp);
	double tr = obj_temp.arr[0];
	double fa = obj_temp.arr[obj_temp.size - 1];
	delete[] obj_temp.arr;
	if (a)
	{
		return tr;
	}
	else
	{
		return fa;
	}
}

double Min_double(Arr& obj) {
	return MinOrMax(obj, true);
}
double Max_double(Arr& obj) {
	return MinOrMax(obj, false);
}

void ArrEdit_double(Arr& obj, size_t index) {
	std::cin >> obj.arr[index];
}
void ArrEdit_double(Arr& obj, size_t index, double value) {
	obj.arr[index] = value;
}


#elif defined(CHAR)
void New_arr_char(Arr& obj) {
	obj.arr = new char[obj.size+1];
	obj.arr[obj.size] = '\n';
}

void Init_rand_arr_char(Arr& obj) {
	for (size_t i = 0; i < obj.size; i++)
	{
		obj.arr[i] = rand() % 100;
	}
	obj.arr[obj.size] = '\n';

}

void Print_char(const Arr& obj) {
	for (size_t i = 0; i < obj.size; i++)
	{
		std::cout << obj.arr[i] << " ";
	}
	std::cout << "\n";
}


void BoobleSort_char(Arr& obj)
{
	int temp;
	bool isSwaped;
	size_t end = obj.size - 1;
	for (size_t i = 0; i < obj.size; i++)
	{
		isSwaped = false;
		for (size_t j = 0; j < end; j++)
		{
			if (obj.arr[j] > obj.arr[j + 1])
			{
				temp = obj.arr[j];
				obj.arr[j] = obj.arr[j + 1];
				obj.arr[j + 1] = temp;
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

char MinOrMax(Arr& obj, bool a) {
	Arr obj_temp;
	obj_temp.size = obj.size;
	New_arr(obj_temp);
	for (size_t i = 0; i < obj.size; i++)
	{
		obj_temp.arr[i] = obj.arr[i];
	}
	BoobleSort(obj_temp);

	char tr = obj_temp.arr[0];
	char fa = obj_temp.arr[obj_temp.size - 1];
	delete[] obj_temp.arr;
	if (a)
	{
		return tr;
	}
	else
	{
		return fa;
	}
}

char Min_char(Arr& obj) {
	return MinOrMax(obj, true);
}
char Max_char(Arr& obj) {
	return MinOrMax(obj, false);
}

void ArrEdit_char(Arr& obj, size_t index) {
	std::cin >> obj.arr[index];
}
void ArrEdit_char(Arr& obj, size_t index, char value) {
	obj.arr[index] = value;
}
#endif // CHAR
