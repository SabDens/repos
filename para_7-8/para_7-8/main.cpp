#include <iostream>


int main()
{
	/*while (true)
	{
		while (true)
		{
			std::cout << "while 1\n";
		}
		std::cout << "while 1\n";
	}*/

	/*for (int i = 0; i < 10; i++) {
		std::cout << "for 1\n";
	}*/

	/*std::cout << "\n";

	{
		int i = 0;

		while (i < 10)
		{
			std::cout << i << "\n";
			i++;
		}
	}*/

	/*std::cout << "\n";
	int n,i = 0;
	do
	{
		std::cout << "Enter ";
		std::cin >> n;
	} 
	while (!(n > 99999 && n < 1000000)) ;*/

	
	//


	/*for (int  i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (j == 20)
			{
				break;
			}
			std::cout << j;
		}
		
		std::cout << 1 << " ";

	}*/


	//1


	/*int n;
	std::cout << "Number";
	std::cin >> n;
	for (int i = 0; i <= n; i++)
	{
		std::cout <<i <<" ";
	}*/


	//2


	/*int n_1, n_2, b;
	std::cout << "Number_1 :";
	std::cin >> n_1;
	std::cout << "Number_2 :";
	std::cin >> n_2;
	if (n_1 > n_2)
	{
		b = n_1;
		n_1 = n_2;
		n_2 = b;
	}
	//std::cout << n_1 << n_2;
	for (int i = n_1; i <= n_2; i++)
	{
		std::cout << i <<" ";
	}
	std::cout<< "\n";
	for (int i = n_1; i <= n_2; i++)
	{
		if (!(i % 2 == 0))
		{
			std::cout << i << " ";
		}
		
	}
	std::cout << "\n";
	for (int i = n_1; i <= n_2; i++)
	{
		if (i % 7 == 0)
		{
			std::cout << i << " ";
		}

	}*/

	
	//3


	/*int n_1, n_2, b;
	std::cout << "Number_1 :";
	std::cin >> n_1;
	std::cout << "Number_2 :";
	std::cin >> n_2;
	if (n_1 > n_2)
	{
		b = n_1;
		n_1 = n_2;
		n_2 = b;
	}
	b=0;
	for (int i = n_1; i <= n_2; i++)
	{
		
		b += i;
	}
	std::cout << b;*/


	//4

	
	//int n_1 = 0, s_1 = 0;
	//do
	//{
	//	std::cout << "Number_1 :";
	//	std::cin >> n_1;
	//	s_1 += n_1;
	//} while (!(n_1 == 0));
	//	
	//std::cout << s_1;

	//1


	/*int a=0 ,b=0;
	std::cout << "Number_1 :";
	std::cin >> a;
	for (int i = a; i <= 500; i++)
	{
		b += i;
	}
	std::cout << b;*/


	//2


	/*int a = 0, b = 0, d = 0;
	std::cout << "Number_1 :";
	std::cin >> a ;
	d = a;
	std::cout << "Number_1 :";
	std::cin >> b;
	for (int i = 0; i < b-1; i++)
	{
		a = a * d;
	}
	std::cout << a;*/


	//3
	

	/*int a = 0 , q;
	for (int i = 1; i <= 1000; i++)
	{
		a += i;
		q = i;
	}
	std::cout << a / q;*/


	//4
	

	/*long long a ,b =1 ;
	std::cout << ":";
	std::cin >> a;

	if (a < 1 || a > 20)
	{
		return 9;
	}
	for (int i = a; i <= 20; ++i)
	{
		b *= i;
	}
	std::cout << b;*/

	int qw;
	//5
	int n, a=INT_MAX; 
	std::cout << ":";
	std::cin >> n;
	for (int i = 2; i <= a; i++)
	{
		std::cout << n << " " << i << " = " << n * i << "\n";
	}




	return 0;
}
