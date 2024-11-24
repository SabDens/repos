#include <iostream>
#include <ctime>

struct etwas
{
	int arr[5][5]{};
	int cols = 5;
	int rows = 5;
};
struct phone_book
{
	char arr[1][2]{};
	const int cols = 2;
	int rows = 1;
};
void new_cols(etwas& eins,int**& arr)
{
	arr = new int* [eins.rows];
	for (int i = 0; i < eins.rows; i++)
	{
		arr[i] = new int[eins.cols] {};
	}
}
void init(etwas& eins) {
	for (int i = 0; i < eins.rows; i++) {
		for (int j = 0; j < eins.cols; j++) {
			eins.arr[i][j] = std::rand() % 100;
		}
	}
}
void print(etwas eins)
{
	for (int i = 0; i < eins.rows; i++)
	{
		for (int j = 0;  j < eins.cols;  j++)
		{
			std::cout << eins.arr[i][j]<<"\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}
void print(etwas eins , int** arr)
{
	for (int i = 0; i < eins.rows; i++)
	{
		for (int j = 0; j < eins.cols; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}
void shapeshifter(etwas eins) {
	init(eins);
	print(eins);
	int** arr;
	new_cols( eins, arr);
	for (int i = 0; i < eins.rows; i++)
	{
		for (int j = 0; j < eins.cols; j++)
		{
			arr[j][i] = eins.arr[i][j];
		}
	}
	print(eins, arr);
}
void phone_book_nedit(phone_book& zwei) {

}
void new_cols(etwas& eins, int**& arr)
{
	arr = new int* [eins.rows];
	for (int i = 0; i < eins.rows; i++)
	{
		arr[i] = new int[eins.cols] {};
	}
}
void phone_book_new_contact(phone_book& zwei) {
	zwei.rows++;
	char* arr = new char[zwei.rows]
}
void phone_book_(phone_book zwei) {
	std::cout << "new contact => 1\nedit contact => 2\n";
	int exercise;
	std::cin >> exercise;
	while ((exercise < 1) || (exercise > 2))
	{
		std::cin >> exercise;
	}
	switch (exercise)
	{
	case 1:
		phone_book_new_contact( zwei);
		break;
	case 2:
		std::cout << "enter name or number";
		phone_book_nedit( zwei);

		break;
	default:
		std::cout << "error";
		break;
	}
}
int main() {
	std::srand(std::time(0));
	etwas eins;
	phone_book zwei;
	//shapeshifter(eins);
	phone_book_(zwei);
}