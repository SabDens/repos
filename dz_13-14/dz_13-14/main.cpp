#include <iostream>

int cube1(int n)
{
    return n * n * n;
}
double step(int n,int step1)
{
    int n0 = n;
    if (step1 == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i < step1; i++)
        {
            n0 = n0 * n;
        }
    }
    return n0;
}
double factorial(int n)
{
    double factorial1=1;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        for (int i = 1; i <= n * -1; i++)
        {
            factorial1 *= i;
        }
        return factorial1 * -1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial1 *= i;
        }
        return factorial1;
    }
}

int Primzahl(int n1)
{
    if (n1 == 2 || n1 ==3)
    {
        std::cout << "prostoe";
        return n1;
    }
    if (n1 % 2 == 0 || n1 % 3 == 0)
    {
        std::cout << "ne prostoe";
        return n1;
    }
    else
    {
        std::cout << "prostoe";
        return n1;
    }
    
}
int Bereichssumme(int n, int n1)
{
    int sum = 0;
    for (int i = n; i <= n1; i++)
    {
        sum += i;
    }
    return sum;
}
void Spielkarte(int a)
{   
    switch (a)
    {
    case 1:
        std::cout << "ace";
        break;
    case 2:
        std::cout << "two";
        break;
    case 3:
        std::cout << "three";
        break;
    case 4:
        std::cout << "four";
        break;
    case 5:
        std::cout << "five";
        break;
    case 6:
        std::cout << "six";
        break;
    case 7:
        std::cout << "seven";
        break;
    case 8:
        std::cout << "eight";
        break;
    case 9:
        std::cout << "nine";
        break;
    case 10:
        std::cout << "ten";
        break;
    case 11:
        std::cout << "jack";
        break;
    case 12:
        std::cout << "queen";
        break;
    case 13:
        std::cout << "king";
        break;
    default:
        std::cout << "error";
        break;
    }
}

void Lucky(int a)
{
    int n1, n2, n3, n4, n5, n6, n7, n8;
    std::cout << "Enter the number\n";
    std::cin >> a;
    n1 = a / 100000;
    n2 = a % 100000 / 10000;
    n3 = a % 10000 / 1000;
    n4 = a % 1000 / 100;
    n5 = a % 100 / 10;
    n6 = a % 10;
    n7 = n1 + n2 + n3;
    n8 = n4 + n5 + n6;
    if (n7 == n8)
    {
        std::cout << "Lucky \n";
    }
    else
    {
        std::cout << "unlucky \n";
    }
}
void idn(int n)
{
    std::cout << "I don't know how to do this";

}
    
int main()
{

    while (true)
    {
        std::cout <<"\n" << ":";
        int exercise, n, n1, n2, n3;
        std::cin >> exercise;

        switch (exercise)
        {
        case 1:
            std::cout << ":";
            std::cin >> n;
            std::cout << cube1(n);
            break;
        case 2:
            int step1;
            std::cout << ":";
            std::cin >> n;
            std::cout << ":";
            std::cin >> step1;
            std::cout << step(n, step1);
            break;
        case 3:
            std::cout << ":";
            std::cin >> n;
            std::cout << factorial(n);
            break;
        case 4:
            std::cout << ":";
            std::cin >> n;
            std::cout << Primzahl(n);
            break;
        case 5:
            std::cout << ":";
            std::cin >> n;
            std::cout << ":";
            std::cin >> n1;
            std::cout << Bereichssumme(n, n1);
            break;
        case 6:
            std::cout << ":";
            std::cin >> n;
            idn(n);
            break;
        case 7:
            std::cout << ":";
            std::cin >> n;
            Spielkarte(n);
            break;
        case 8:
            std::cout << ":";
            std::cin >> n;
            Lucky(n);
            break;
        default:
            std::cout << "error";
            break;
        }
    }
    
}