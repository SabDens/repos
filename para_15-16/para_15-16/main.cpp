#include <iostream>

int power(int value, int p);
double power(double value, int p);
void init(int arr[], const int size);
void init(double arr[], const int size);

//void print(int arr[], const int size);
//void print(double arr[], const int size);
//void print(char arr[], const int size);

template<typename Type>
void print(Type arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
template<typename Type>
Type power(Type value, Type p)
{
    if (p == 0)
    {
        return 1;
    }
    return value * power(value, p - 1);
}

int main()
{
    const int size1 = 10;
    const int size2 = 10;
    int arr1[size1];
    double arr2[size2];
    char arr3[12] = "Hello world";

    init(arr1, size1);
    init(arr2, size2);

    print(arr1, size1);
    print(arr2, size2);
    print(arr3, 12);

    //std::cout << power(2.5, 3) << std::endl;
    //std::cout << power(2, 3) << std::endl;

    return 0;

}