#pragma once

#include <iostream>



//#elif DOUBLE не работал и я спросил GPT ели что !!!!!
//все остальное сам
// 
// 
// 
// 
//#define INTEGER
#define DOUBLE
#define CHAR



#ifdef INTEGER
struct Arr
{
	int* arr;
	size_t size;
};

void New_arr_int(Arr& obj);
void Init_rand_arr_int(Arr& obj);
void Print_int(const Arr& obj);
void BoobleSort_int(Arr& obj);
int Min_int(Arr& obj);
int Max_int(Arr& obj);
void ArrEdit_int(Arr& obj, size_t index);
void ArrEdit_int(Arr& obj, size_t index, size_t value);
#define New_arr New_arr_int
#define Init_rand_arr Init_rand_arr_int
#define Print Print_int
#define BoobleSort BoobleSort_int
#define Min Min_int
#define Max Max_int
#define ArrEdit ArrEdit_int


#elif defined(DOUBLE)

struct Arr
{
	double* arr;
	size_t size;
};
void New_arr_double(Arr& obj);
void Init_rand_arr_double(Arr& obj);
void Print_double(const Arr& obj);
void BoobleSort_double(Arr& obj);
double Min_double(Arr& obj);
double Max_double(Arr& obj);
void ArrEdit_double(Arr& obj, size_t index);
void ArrEdit_double(Arr& obj, size_t index, double value);
#define New_arr New_arr_double
#define Init_rand_arr Init_rand_arr_double
#define Print Print_double
#define BoobleSort BoobleSort_double
#define Min Min_double
#define Max Max_double
#define ArrEdit ArrEdit_double


#elif defined(CHAR)
struct Arr
{
	char* arr;
	size_t size;
};

void New_arr_char(Arr& obj);
void Init_rand_arr_char(Arr& obj);
void Print_char(const Arr& obj);
void BoobleSort_char(Arr& obj);
char Min_char(Arr& obj);
char Max_char(Arr& obj);
void ArrEdit_char(Arr& obj, size_t index);
void ArrEdit_char(Arr& obj, size_t index, char value);
#define New_arr New_arr_char
#define Init_rand_arr Init_rand_arr_char
#define Print Print_char
#define BoobleSort BoobleSort_char
#define Min Min_char
#define Max Max_char
#define ArrEdit ArrEdit_char
#endif // CHAR



		
