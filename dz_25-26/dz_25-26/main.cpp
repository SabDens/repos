#include <iostream>
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
			std::cout << matrix[i][j] << " " << "\t";
		}
		std::cout << std::endl;
	}
}
template <typename T>
void new_cols(T** matrix, T rows, T cols)
{
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols] {};
	}
}
template <typename T>
void delete_(T** matrix, T rows, T cols) {
	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}
template <typename T>
T** new_column_end(T** matrix,T &rows,T &cols) {
	cols += 1;
	T** new_matrix = new T* [rows];
	new_cols(new_matrix, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols - 1; j++)
		{
			new_matrix[i][j] = matrix[i][j];
		}
	}
	delete_(matrix, rows, cols - 1);
	return new_matrix;
}
template <typename T>
T** new_column_start(T** matrix, T& rows, T& cols) {
	cols += 1;
	T** new_matrix = new T * [rows];
	new_cols(new_matrix, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 1; j < cols; j++)
		{
			new_matrix[i][j] = matrix[i][j-1];
		}
	}
	delete_(matrix, rows, cols - 1);
	return new_matrix;
}
template <typename T>
T** new_column_in(T** matrix, T& rows, T& cols,T col) {
	cols += 1;
	T** new_matrix = new T * [rows];
	new_cols(new_matrix, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (j < col) {
				new_matrix[i][j] = matrix[i][j];
			}
			else if (j == col) {
				new_matrix[i][j] = 0; 
			}
			else {
				new_matrix[i][j] = matrix[i][j-1];
			}
		}

	}
	
	delete_(matrix, rows, cols - 1);
	return new_matrix;
}
template <typename T>
T** delete_column_in(T** matrix, T& rows, T& cols, T col) {
	cols -= 1;
	T** new_matrix = new T * [rows];
	new_cols(new_matrix, rows, cols);
	int a = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols+1; j++)
		{
			if (j <= col) {
				new_matrix[i][j] = matrix[i][j];
			}

			else {
				new_matrix[i][j-1] = matrix[i][j];
			}
		}
	}

	delete_(matrix, rows, cols - 1);
	return new_matrix;
}
int main() {
	std::srand(std::time(0));
	int rows = 5, cols = 5;
	int** matrix = new int* [rows] {};
	new_cols(matrix, rows, cols);
	init(matrix, rows, cols);
	print(matrix, rows, cols);
	std::cout << "\n";
	//matrix = new_column_end(matrix, rows, cols);
	//matrix = new_column_start(matrix, rows, cols);
	int col;
	std::cout << "ot 0 do " << cols;
	std::cin >> col;
	while (col < 0 || col > rows)
	{
		std::cin >> col;
	}
	//matrix = new_column_in(matrix, rows, cols, col);
	matrix = delete_column_in(matrix, rows, cols, col);
	print(matrix, rows, cols);
	return 0;
}