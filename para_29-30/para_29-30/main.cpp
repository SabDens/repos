#include <iostream>
#include <climits>
#include <cstring>
struct book {
	char title;
	char author;
	char publisher;
	char genre;
	int size = 4;
};
struct arr_book {
	char arr[10][4];
	int size1 = 10;
	int size2 = 4;
};
void matrix(arr_book& Books, book book) {
	for (int i = 0; i < Books.size1; i++)
	{

		Books.arr[i][0] = book.title;
		Books.arr[i][1] = book.author;
		Books.arr[i][2] = book.publisher;
		Books.arr[i][3] = book.genre;
	}
}

void editing_1(arr_book& Books, book book) {

}
void editing_all(arr_book& Books, book book) {
	
}
void print(arr_book& Books, book book) {
	for (int i = 0; i < Books.size1; i++)
	{
		std::cout << "title" << Books.arr[i][0] << "\n" << "author" << Books.arr[i][1] << "\n" << "publisher" << Books.arr[i][2] << "\n" << "genre" << Books.arr[i][1] << "\n";
	}
}

int main() {
	arr_book books;
	book book;
	matrix(books, book);
	std::cout << "Edit the book;==> 1\nOther books;==> 2\nSearch the book for the author;==> 3\nSearch for the book's title;==> 4\nSorting the massif by book title;==> 5\nSorting the massif by the author;==> 6\nSorting the massif by sight.==> 7\n";
	int key;
	std::cin >> key;
	switch (key)
		    {
		    case '1':
				print(books, book);
		        break;
		    case '2':
		        
		        break;
		    case '3':
		        
		        break;
			case '4':

				break;
			case '5':

				break;
			case '6':

				break;
			case '7':

				break;
		    default:
				break;
		    }
}
//struct MyStruct
//{
//	int a;
//	double b;
//
//};
//union MyUnion
//{
//	int a;
//	double b;
//	char c;
//	MyStruct d;
//};
//void convert(int n)
//{
//	if (n > 0)
//	{
//		convert(n / 2);
//		std::cout << (n % 2);
//	}
//}
//
//
//enum Direction
//{
//    UP, DOWN, RIGHT, LEFT
//};
//
//int main()
//{
//
//    int key;
//    std::cin >> key;
//
//
//
//    switch (key)
//    {
//    case UP:
//        std::cout << "UP\n";
//        break;
//    case DOWN:
//        std::cout << "DOWN\n";
//        break;
//    case RIGHT:
//        std::cout << "RIGHT\n";
//        break;
//    case LEFT:
//        std::cout << "LEFT\n";
//        break;
//    default:
//        break;
//    }
//
//
//
//    //// [][][[]][][][][][]
//    //MyStruct ex;
//
//    //ex.a = 10;
//    //ex.b = 3.14;
//
//    //// [56][0][2][0] [][][] []
//    //// 0000 0000 0000 0000 0000 0001 0100
//    //MyUnion uni1;
//
//    //convert(56);
//
//    //std::cout << std::endl;
//
//    //std::cout << ex.a << " " << ex.b << " size " << sizeof(MyStruct) << std::endl;
//
//    //uni1.a = 20;
//    //uni1.c = '0';
//
//    //std::cout << uni1.a << " " << uni1.c << " size " << sizeof(MyUnion) << std::endl;
//
//
//
//    return 0;
//}
