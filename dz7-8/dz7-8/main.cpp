#include <iostream>


int main()
{
	int o = 0;
	//1

	
	/*for (int i = 100; i < 999; i++)
	{
		if (i / 100 == i / 10 % 10 || i / 100 == i % 10 || i / 10 % 10 == i % 10)
		{
			o++;
		}
		
	}
	std::cout << o;*/


	//2


	/*int n1 = 0, n2 = 0, n3 = 0;
	for (int i = 100; i < 999; i++)
	{
		n1 = i / 100;
		n2 = (i / 10) % 10;
		n3 = i % 10;
		if (n1 != n2 && n1 != n3 && n2 != n3)
		{
			o++;
		}
	}
	std::cout << o;*/


	//3


	/*int number, number1 =0;
	std::cin >> number;
	while (number > 0)
	{
		if (number % 10 != 3 && number % 10 != 6)
		{
			number1 *= 10;
			number1 += number % 10;
		}
		number /= 10;
	}
	while (number1 > 0)
	{
		std::cout << number1 % 10;
		number1 /= 10;
	}*/
	

	//6

	/*int a;
	std::cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			std::cout << i << " ";
		}
	}*/


	//4

	while (true)
	{
		int a;
		std::cin >> a;

		for (int j = 1; j * j <= a; j++) {
			if (a % (j * j) == 0 && a % (j * j * j) != 0) {
				std::cout << j << " ";
			}
		}

	}
	


	//7


	/*int a, b;
	std::cin >> a;
	std::cin >> b;
	std::cout << "\n";
	for (int i = 1; i <= a; i++) {
		if ((a % i == 0) && (b % i == 0)) {

			std::cout << i << " ";

		}
	}*/

}