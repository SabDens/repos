#include <iostream>
#include <climits>

int main()
{
	std::cout << "Hello from maim!\n";

	// 4 бфйт = 32 біт = 2^32

	// Дусяткові типи
	long double	ld_var = 12345;					//		12 byte
	double		d_var  = 12345;					//		8 byte
	long float  lf_var = 12345;					//		8 byte
	float		f_var  = 12345;					//		4 byte

	//цілочислені типи

	long long	ll_var = 12345;					//		8 byte
	long		l_var = 12345;					//		4 byte
	int			varl = INT_MAX;					// 		4 byte		не < short і не > long
	short		s_vat = 12345;					//		2 byte
	
	//

	unsigned long long	u_ll_var	= 12345;	//		8 byte
	unsigned long		u_l_var = 12345;		//		4 byte
	unsigned int		u_varl = 12345;			//		4 byte		не < short і не > long
	unsigned short		u_s_vat = 12345;		//		2 byte


	//Символьні типи

	char c_var = 'a';							// 1 byte


	// Логычны типи

	bool b_var = true;							// 1 byte

	/*std::cout << sizeof(2 + 5ll - (+1.2) * 12u);*/
	/*std::cout << sizeof('2' + 5ll - (+1.2) * 12u);*/

	// Арефметичны оператори
	// Унарні
	// + - / * %
	// 
	// ++ інкремент
	// -- декремент
	// 
	// Бінарні
	// + - / * %
	// += -= /= *=  %=

	// Оператор порівняння
	//Ишнарні 
	// == != > < => <=
	//

	/*int a = 10;
	std::cout << a++ << std::endl;
	std::cout << a;*/

	int n1, n2 = 4, n3 ,n4 ;

	n1 = n2 = n3 = n4 = 22;
	
	std::cout << n1 <<"\n";

	// логічні оператори
	// !  - логічне ні
	// || - логічне або
	// && - логичне і

	/*std::cout << sizeof l_var ;
	std::cout << varl + 1;*/

	int var_;

	std::cin >> var_;

	std::cout << var_;


	return b_var;
}