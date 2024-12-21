#include <iostream>

//class A {
//protected:
//	int valueA;
//public:
//	A(int value):valueA(value){}
//	void Show()
//	{
//		std::cout << "B::Show " << valueA<<std::endl;
//	}
//};
//
//class B : public A {
//protected:
//	double valueB;
//public:
//	B(double value) :valueB(value),A(0) {}
//	B(double B,int A) :A(A), valueB(B) {}
//	void Show()
//	{
//		A::Show();
//		std::cout << "B::Show " << valueB << std::endl;
//	}
//};
//
//class C : public B {
//protected:
//	char valueC;
//public:
//	C(char value) :valueC(value), B(0) {}
//	C(char C,double B, int A) :B(B,A), valueC(C) {}
//	void Show()
//	{
//		B::Show();
//		std::cout << "C::Show " << (char)valueC << std::endl;
//	}
//};
class Figure {
protected:
	char color;
public:
	Figure() :color('N') {}
	Figure(char colors) :color(colors){}
	void Show() {
		std::cout << color<<std::endl;
	}
};

class Square : virtual Figure {
protected:
	int side;
public:
	Square(int value) :side(value) {}
	Square(int value,char color) :side(value) , Figure(color){}
	void Show() {
		Figure::Show();
		std::cout << "Circle" << side << std::endl;
	}
};
class Circle : virtual Figure {
protected:
	int radius;
public:
	Circle(int value) :radius(value) {}
	Circle(int value, char color) :radius(value), Figure(color) {}
	void Show() {
		Figure::Show();
		std::cout <<"Circle "<< radius << std::endl;
	}
};

class Composition : public Circle, public Square {
public:
	Composition(int radius, int side, char color) :Circle(radius), Square(side), Figure::Figure(color) {}
	void Show() {
		Circle::Show();
		Square::Show();

	}
};

int main() {
	///*B obj1(2.5);
	//obj1.Show();*/
	//C obj1('C', 2.5, 5);
	//obj1.Show();
	Composition obj(15, 20, 'b');
	obj.Show();
	return 0;
}