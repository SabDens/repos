#include "Contact.h"

void Contact::Init_Auto() 
{
	number = 380730007377;
	city.Init("Odessa");
	country.Init("Ukraine");
}
void Contact::Init() {
	std::cout << "number: ";
	std::cin >> number;
	//была проблема с перископом через строку и я нашёл решение через интернет
	std::cin.ignore();

	std::cout << "city: ";
	city.Init();

	std::cout << "country: ";
	country.Init();
}

void Contact::Show() {
	std::cout << "number: " << number << std::endl;
	std::cout << "city: "; 
	city.Print();
	std::cout << "country: "; 
	country.Print();
}
Contact::~Contact() {
	number = 0;
	city.~My_String();
	country.~My_String();
}
void Contact::clear() {
	number = 0;
	city.clear();
	country.clear();
}