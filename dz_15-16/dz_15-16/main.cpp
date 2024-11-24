#include <iostream>


void recursion_of_stars(int a)
{
    if (a <=0)
    {
        return ;
    }
    else
    {
        std::cout << "*" << " ";
        recursion_of_stars(a - 1);
    }
}
int sum(int n, int n1 ,int sum0)
{
    
    if (n > n1)
    {
        return sum0;
    }
    else
    {
        sum0 += n;
        return sum(n + 1, n1, sum0);
    }
}


// Завдання 3
// Написати перевантажені функції(int, double, char) для виконання таких завдань :
// -Ініціалізація квадратної матриці;
// -Виведення матриці на екран;
// -Визначення максимального і мінімального елемента на головній діагоналі матриці;
// -Сортування елементів за зростанням окремо для кожного рядка матриці.


//4

int Schuldner(int a, int b) {
    if (b == 0) {
        return a;
    }
    else
    {
        return Schuldner(b, a % b);
    }
}

int main()
{
    int sum0 = 0;
    while (true)
    {
        std::cout << "\n" << ":";
        int exercise, n, n1, n2, n3;
        std::cin >> exercise;

        switch (exercise)
        {
        case 1:
            std::cout << ":";
            std::cin >> n;
            recursion_of_stars(n);
            break;
        case 2:
            std::cout << ":";
            std::cin >> n;
            std::cout << ":";
            std::cin >> n1;
            std::cout<< sum(n, n1, sum0);
            break;
        case 3:

            std::cout << "I couldn't think of anything";
            break;
        case 4:
            std::cout << ":";
            std::cin >> n;
            std::cout << ":";
            std::cin >> n1;
            std::cout << Schuldner(n, n1);
            break;
        case 5:

            std::cout << "I couldn't think of anything";
            break;
        default:
            std::cout << "error";
            break;
        }
    }
}