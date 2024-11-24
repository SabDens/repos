#include <iostream>
#include <climits>

int main()
{
	//первое задание 2
	/*int grn, kop, qwerty;

	std::cin >> grn;
	std::cin >> kop;
	qwerty = 0;
	qwerty += kop % 100;
	grn += kop / 100;
	std::cout << grn <<"grn" << qwerty << "kop";*/

	//второе задание 2
	/*float summa ,kop;
	int  grn;
	std::cin >> summa;
	grn = summa;
	kop = (summa - grn)*100;
	
	std::cout << grn << "grn" << kop << "kop";*/

	//задание 3

	double time, speed, distance;
	std::cin >> time;
	std::cin >> distance;
	std::cout << "t" << time << "\n";
	std::cout << "s" << distance << "\n";
	time /= 60;
	distance /= 1000;
	speed = distance / time;
	std::cout  << speed <<"k/h";


	//задание 4

	/*int dn, ned;
	std::cin >> dn;
	ned = dn / 7;
	dn = dn % 7;
	std::cout << ned << "w" << dn << "d";*/
	return 0 ;
}