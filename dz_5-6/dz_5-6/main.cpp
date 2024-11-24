#include <iostream>


int main()
{
	char symbol;

	int number1, number2;
	std::cout << "Enter the number\n";
	std::cin >> number1;
	std::cout << "Enter the number\n";
	std::cin >> number2;
	std::cout << "Enter the number\n";
	std::cin >> symbol;



	switch (symbol)
	{
	case '*':
		std::cout << number1 * number2;
		break;
	case '/':
		std::cout << number1 / number2;
		break;
	case '+':
		std::cout << number1 + number2;
		break;
	case '-':
		std::cout << number1 - number2;
		break;
	case '%':
		std::cout << number1 % number2;
		break;
	default:
		std::cout << "error";
		break;
	}

	//dz zadanie_1
	float zarplata_manager1, zarplata_manager2, zarplata_manager3;
	float manager1, manager2, manager3;
	std::cout << "manager1\n";
	std::cin >> manager1;
	std::cout << "manager2\n";
	std::cin >> manager2;
	std::cout << "manager3\n";
	std::cin >> manager3;

	if (manager1 <= 500)
	{
		zarplata_manager1 = manager1 * 0.03 + 200;
	}
	else if (500 < manager1 <= 1000)
	{
		zarplata_manager1 = manager1 * 0.05 + 200;
	}
	else if (1000 < manager1)
	{
		zarplata_manager1 = manager1 * 0.08 + 200;
	}


	if (manager2 <= 500)
	{
		zarplata_manager2 = manager2 * 0.03 + 200;
	}
	else if (500 < manager2 <= 1000)
	{
		zarplata_manager2 = manager2 * 0.05 + 200;
	}
	else if (1000 < manager2)
	{
		zarplata_manager2 = manager2 * 0.08 + 200;
	}


	if (manager3 <= 500)
	{
		zarplata_manager3 = manager3 * 0.03 + 200;
	}
	else if (500 < manager3 <= 1000)
	{
		zarplata_manager3 = manager3 * 0.05 + 200;
	}
	else if (1000 < manager3)
	{
		zarplata_manager3 = manager3 * 0.08 + 200;
	}

	if (zarplata_manager1 < zarplata_manager3 && zarplata_manager2 < zarplata_manager3)
	{
		zarplata_manager3 += 200;
		std::cout << "manager_1 " << zarplata_manager1 << "\n" << "manager_2 " << zarplata_manager2 << "\n" << "manager_3 " << zarplata_manager3 << "the 3 manager has a bonus\n";
	}
	else if (zarplata_manager1 < zarplata_manager2 && zarplata_manager3 < zarplata_manager2)
	{
		zarplata_manager2 += 200;
		std::cout << "manager_1 " << zarplata_manager1 << "\n" << "manager_2 " << zarplata_manager2 << "the 2 manager has a bonus\n" << "manager_3 " << zarplata_manager3;
	}
	else
	{
		zarplata_manager1 += 200;
		std::cout << "manager_1 " << zarplata_manager1 << "the 1 manager has a bonus\n" << "manager_2 " << zarplata_manager2 << "\n" << "manager_3 " << zarplata_manager3;
	}
	return 0;

	//задание номер два не смог придумать как выполнить
}