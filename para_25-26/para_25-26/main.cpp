#include<iostream>
#include <cstdlib>
#include <ctime>
//void allocateMemory(int** ptrptr, const int size);
//void deleteMemory(int** ptrptr);
//
//int main() {
//    int* ptr = nullptr;
//    const int size = 5;
//    allocateMemory(&ptr, size);
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << ptr[i] << " ";
//    }
//    deleteMemory(&ptr);
//}
//
//void allocateMemory(int** ptrptr, const int size) {
//    if (*ptrptr == nullptr)
//        *ptrptr = new int[size] {};
//}
//
//void deleteMemory(int** ptrptr) {
//    delete[] *ptrptr;
//    *ptrptr = nullptr;
//}



//int main() {
//	int rows = 5, cols = 5;
//	int** matrix = new int* [rows];
//
//    for (int i{}; i < cols; ++i) {
//        matrix[i] = new int[cols] {};
//    }
//
//    for (int i{}; i < rows; ++i) {
//        for (int j{}; j < cols - i; ++j) {
//            std::cout << matrix[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    for (int i{}; i < cols; ++i) {
//        delete[] matrix[i];
//    }
//
//    delete[] matrix;
//
//}
void init(int** matrix, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = std::rand() % 100;
		}
	}
}
void print(int** matrix, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void matrixx(int** matrix, int cols, int &rows,int **matrix1, int cols1, int rows1) {

	for (int i = rows - rows1, i1 = 0; i < rows; i++, i1++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i+1][j] = matrix1[i1][j];
		}
	}
}

void new_cols(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols] {};
	}
}
int main() {
	std::srand(std::time(0));
	int rows = 5, cols = 5;
	int rows1 = 1, cols1 = 5;
	int** matrix = new int* [rows+ rows1];
	int** matrix1 = new int* [rows1];
	new_cols(matrix, rows, cols);
	new_cols(matrix1, rows1, cols1);
	init(matrix, rows, rows);
	init(matrix1, rows1, rows1);

	//matrixx(matrix, cols, rows, matrix1, cols1, rows1);
	//print(matrix, cols, rows+ rows1);
	print(matrix1, cols,rows1);
	return 0;
}