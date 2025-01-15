#include <iostream>
class Employer {
private:

public:
    virtual void Print() const = 0;
};

class President : public  Employer {
public:
    void Print() const override {
        std::cout << "President\n";
    }
};

class Manager : public  Employer {
public:
    void Print() const override {
        std::cout << "Manager\n";
    }
};

class Worker : public Employer {
public:
    void Print() const override {
        std::cout << "Worker\n";
    }
};

class Square
{
public:
    virtual void square() const = 0;
};

class Rectangle : public Square
{
private:
    int width =5;
    int height=10;
public:
    void square()const override {
        std::cout << width * height << "\n";
    }

};
class Circle : public Square {
private:
    double radius =10;
    double pi = 3.14159265359;
public:
    void square()const override {
        std::cout << pi * (radius* radius) << "\n";
    }
};
class straight_cutter : public Square {
private:
    int width = 5;
    int height = 10;
public:
    void square()const override {
        std::cout << (width * height)/2<<"\n";
    }
};
class trapezoid : public Square {
private:
    int vertex = 5;
    int warp = 10;
    int height = 10;
public:
    void square()const override {
        std::cout << ((warp + vertex) / 2) * height << "\n";
    }
};


int main() {
    /*Employer* objP = new President();
    objP->Print();
    Employer* objM = new Manager();
    objM->Print();
    Employer* objW = new Worker();
    objW->Print();*/
    Square* objR = new Rectangle();
    objR->square();
    Square* objC = new Circle();
    objC->square();
    Square* objS = new straight_cutter();
    objS->square();
    Square* objT = new trapezoid();
    objT->square();

}