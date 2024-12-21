#include <iostream>

struct Matrix
{
	int** matrix;
	int rows = 5;
	int cols = 6;

};
void New_Matrix(Matrix& matrix) {
	matrix.matrix = new int*[matrix.rows];
	for (size_t i = 0; i < matrix.rows; i++)
	{
		matrix.matrix[i] = new int[matrix.cols] {};
	}
}

void print(Matrix& matrix) {
	for (size_t i = 0; i < matrix.rows; i++)
	{
		for (size_t j = 0; j < matrix.cols; j++)
		{
			std::cout << matrix.matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
void init(Matrix& matrix) {
	for (size_t i = 0; i < matrix.rows; i++)
	{
		for (size_t j = 0; j < matrix.cols; j++)
		{
			matrix.matrix[i][j] = rand() % 100;
		}
	}
}
Matrix Transposition(Matrix& matrix) {
	Matrix temp_matrix;
	temp_matrix.cols = matrix.rows;
	temp_matrix.rows = matrix.cols;
	New_Matrix(temp_matrix);
	for (size_t i = 0; i < matrix.rows; i++)
	{
		for (size_t j = 0; j < matrix.cols; j++)
		{
			temp_matrix.matrix[j][i] = matrix.matrix[i][j];
		}
	}
	return temp_matrix;
}
struct Contact
{
	char name[100];
	char phone[100];
	int size;
};
void Init_Contact(Contact* contacts) {
	for (size_t i = 0; i < contacts[0].size; i++)
	{
		std::cout << "name:";
		std::cin >> contacts[i].name;
		std::cout << "phone number:";
		std::cin >> contacts[i].phone;
	}
	std::cout << std::endl << std::endl;
}
void Print_Contact(Contact* contacts) {
	for (size_t i = 0; i < contacts[0].size; i++)
	{
		std::cout << "name: ";
		std::cout << contacts[i].name <<"\n";
		std::cout << "phone number: ";
		std::cout << contacts[i].phone << "\n";
	}
}
//void Search_Contact(Contact* contacts) {
//	char Search_Contact[100];
//	std::cin >> Search_Contact;
//	for (size_t i = 0; i < contacts[0].size; i++)
//	{
// //я не помню название функции для сравнения
//		if (Search_Contact == contacts[i].name || Search_Contact == contacts[i].phone)
//		{
//			std::cout <<":" << i+1;
//		}
//	}
//
//}

void Redacted_Contact(Contact* contacts) {
	int size;
	char name[100];
	char phone[100];

	std::cin >> size ;
	std::cin >> name;
	std::cin >> phone;
	for (size_t i = 0; i < 100; i++)
	{
		contacts[size-1].name[i] = name[i];
		contacts[size-1].phone[i] = phone[i];
	}


}
int main() {
	srand(time(0));
	//1
	/*Matrix mat;
	New_Matrix(mat);


	init(mat);
	print(mat);
	mat = Transposition(mat);
	print(mat);*/
	//2
	std::cout << "size:";
	int size;
	do
	{
		std::cin >> size;
	} while (size < 1);

	Contact* contacts = new Contact[size];
	contacts->size = size;
	Init_Contact(contacts);
	Print_Contact(contacts);
	//Search_Contact(contacts);
	Redacted_Contact(contacts);
	Print_Contact(contacts);

	return 0;
}