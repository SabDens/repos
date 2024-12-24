#include <iostream>
#include "Swordman.h"

enum Color 
{
    Red,
    Green,
    Blue,
    Black
};

class Animal {
protected:
    std::string name;
public:
    Animal()
    {
        std::cout << "A::Ctor\n";
    }

    void Show()
    {
        std::cout << "Animal: " << name << std::endl;
    }
};

class Mammal : public Animal
{
protected:
    bool milk = false;
public:
    Mammal()
    {
        std::cout << "B::Ctor\n";
    }

public:
    void Show()
    {
        Animal::Show();
        std::cout << "Milk: " << (milk ? '+' : '-') << std::endl;
    }
};


class Cat : public Mammal
{
protected:
    Color color = Black;
public:
    Cat()
    {
        std::cout << "C::Ctor\n";
    }

    void Show()
    {
        Mammal::Show();
        std::cout << "Cat color: " << color << std::endl;
    }
};

class Dog : public Mammal
{
protected:

public:
    Dog()
    {
        std::cout << "Dog::Ctor\n";
    }

    void Show()
    {
        Mammal::Show();
        std::cout << "Dog: " << std::endl;
    }
};
void Show(Animal* mammal)
{
    mammal->Show();
}

int main() {
    Dog dog;
    Cat cat;

    Show(&dog);
    Show(&cat);

}