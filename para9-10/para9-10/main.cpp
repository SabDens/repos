#include <iostream>


int main()
{
	/*int var;
	var = 10;

	int int1;
	int int2;
	int int3;
	int int4;

	int array[4]{1,2,3,4};
	std::cout << array[0] << "\n";

	for (int i = 0; i < 4; i++)
	{
		std::cout << array[i] << ' ';
	}*/

	//неправильная запись

	/*const int constant;

	constant = 2;*/

	//правильная запись

	/*const int constant = 20;*/


	//1


	/*const int size = 6;
	int sum_profit = 0;
	int profit_for_the_month[size]{};
	for (int i = 0; i < size; i++)
	{
		std::cout << "month :";
		std::cin >> profit_for_the_month[i];
		sum_profit += profit_for_the_month[i];
	}
	std::cout << sum_profit;*/

	//2

	/*int array[6]{1,2,3,4,5,6};
	for (int i = 5; i >= 0; i--)
	{
		std::cout << array[i]<< ' ';
	}*/


	//3
	/*int sum = 0;
	const int size = 5;
	int array[size]{};
	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
		sum += array[i];
	}
	std::cout << sum;*/


	//4
	/*const int size = 12;
	int profit_for_the_month[size]{};
	int month_min, month_max;
	for (int i = 0; i < size; i++)
	{
		std::cout << "month: ";
		std::cin >> profit_for_the_month[i];
	}
	month_min = profit_for_the_month[0], month_max = profit_for_the_month[0];
	for (int i = 0; i < size; i++) {
		if (profit_for_the_month[i] <= month_min)
		{
			month_min = profit_for_the_month[i];
		}
		if (profit_for_the_month[i] >= month_max)
		{
			month_max = profit_for_the_month[i];
		}
		
	}
	std::cout << "month_min:" << month_min << "\n" << "month_max:" << month_max;*/


	//1

	/*const int size = 5;
	int array[size]{};
	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
		if (array[i] == 0)
		{
			array[i] = -1;
		}
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << ' ';
	}*/


	//2
	const int size_1 = 5, size_2 = 10;
	int array[size_2]{};
	int array_2[size_1]{ 1,-2,3,-9,5 }, array_1[size_1]{ 6,7,8,1,-7 };
	int array_1_1[size_1]{};
	int bufer = 0;
	int bufer2 = 0;
	for (int i = 0; i < size_1; i++)
	{
		if (array_2[i] < 0)
		{
			array_1_1[bufer] = array_2[i];
			array_2[i] = 0;
			bufer++;
		}
		if (array_1[i] < 0)
		{
			array_1_1[bufer] = array_1[i];
			bufer++;
			array_2[i] = 0;
		}
	}
	for (int i = 0; i < size_1; i++)
	{
		if (!(array_2[i] == 0))
		{
			array[bufer2] = array_2[i];
			bufer2++;
		}
		
	}
	for (int i = 0; i < size_1; i++)
	{
		if (!(array_1[i] == 0))
		{
			array[bufer2] = array_1[i];
			bufer2++;
		}
	}

	for (int i = 0; i < size_1; i++)
	{
		if (!(array_1_1[i] == 0))
		{
			array[bufer2] = array_1_1[i];
			bufer2++;
		}
	}
	for (int i = 0; i < size_2; i++)
	{
		std::cout << array[i] << " ";
	}




	return 10;

}