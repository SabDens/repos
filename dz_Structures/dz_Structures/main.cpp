#include <iostream>
//1
struct Drob
{
	int whole;
	int numerator;
	int denominator;
};
Drob improper_fraction(Drob etwas1, Drob etwas2) {
	Drob drob;
	drob.denominator = etwas1.denominator;
	int da1 = etwas1.numerator + etwas1.numerator;
	drob.whole = da1 / etwas1.denominator;
	drob.numerator = da1 % etwas1.denominator;
	return drob;
}
void translation(Drob& etwas1, Drob& etwas2) {
	if (etwas1.denominator != etwas2.denominator)
	{
		etwas1.denominator *= etwas2.denominator;
		etwas2.denominator = etwas1.denominator;
		etwas1.numerator *= etwas2.denominator;
		etwas2.numerator *= etwas1.denominator;
	}
}
void Numerator(Drob& etwas1, Drob& etwas2) {
	if (etwas1.whole != 0)
	{
		etwas1.numerator = etwas1.whole * etwas1.denominator + etwas1.numerator;
		etwas1.whole = 0;
	}
	if (etwas2.whole != 0)
	{
		etwas2.numerator = etwas2.whole * etwas2.denominator + etwas2.numerator;
		etwas2.whole = 0;
	}
}
Drob sum(Drob etwas1, Drob etwas2 ) {
	translation(etwas1, etwas2);
	Numerator(etwas1, etwas2);
	return improper_fraction(etwas1,etwas2);
	//std::cout << da2;

}
Drob difference(Drob etwas1, Drob etwas2) {
	translation(etwas1, etwas2);
	Numerator(etwas1, etwas2);
	return improper_fraction(etwas1, etwas2);
}
Drob multiplication(Drob etwas1, Drob etwas2) {
	Numerator(etwas1, etwas2);
	Drob drob;
	drob.numerator = etwas1.numerator * etwas2.numerator;
	drob.denominator = etwas1.denominator * etwas2.denominator;
	drob.whole = drob.numerator / drob.denominator;
	drob.numerator= drob.numerator & drob.denominator;
	return drob;
}
Drob division(Drob etwas1, Drob etwas2) {
	Numerator(etwas1, etwas2);
	Drob drob;
	drob.numerator = etwas1.numerator * etwas2.denominator;
	drob.denominator = etwas1.denominator * etwas2.numerator;
	drob.whole = drob.numerator / drob.denominator;
	drob.numerator = drob.numerator & drob.denominator;
	return drob;
}
void init(Drob& etwas) {
	std::cout << "chislo:";
	std::cin >> etwas.whole;
	std::cout << "chislitel:";
	std::cin >> etwas.numerator;
	std::cout << "znaminatel:";
	bool prowerka = false;
	do {
		if (prowerka)
		{
			std::cout << "bolshe nyla:";
		}
		std::cin >> etwas.denominator;
		prowerka = true;
	} while (etwas.denominator <= 0);
}
void print (Drob etwas) {
	std::cout << "chislo:" << etwas.whole << "\nchislitel:" << etwas.numerator << "\nznaminatel:" << etwas.denominator;

}
//2


struct Car {
	int length;
	int clearance;
	int engine_capacity;
	int engine_tension;
	int wheel_diameter;
	char color[100];
	char gearbox_type[100];
};

void Car_init(Car& car) {
	std::cout << "dlinu avtomobilya:";
	std::cin >> car.length;
	std::cout << "clearance:";
	std::cin >> car.clearance;
	std::cout << "obyem dvigatelya:";
	std::cin >> car.engine_capacity;
	std::cout << "moschnost dvigatelya:";
	std::cin >> car.engine_tension;
	std::cout << "diametr kolesa:";
	std::cin >> car.wheel_diameter;
	std::cout << "color:";
	std::cin>>car.color;
	std::cout << "korobkà peredach:";
	std::cin>>car.gearbox_type;
}

void Car_print(const Car& car) {
	std::cout << "dlina: " << car.length << " m\n";
	std::cout << "clearance: " << car.clearance << " sm\n";
	std::cout << "obyem dvigatelya: " << car.engine_capacity << " l\n";
	std::cout << "moschnost dvigatelya: " << car.engine_tension << " l.s.\n";
	std::cout << "diametr koles: " << car.wheel_diameter << " dyuymy\n";
	std::cout << "color: " << car.color << "\n";
	std::cout << "korobkf peredach: " << car.gearbox_type << "\n";
}
int main() {
	//1

	/*Drob drob;
	Drob drob1;
	init(drob);
	init(drob1);
	drob = sum(drob, drob1);
	drob = difference(drob, drob1);
	drob = multiplication(drob, drob1);
	drob = division(drob, drob1);
	print(drob);*/
	//2

	Car car;
	Car_init(car);
	Car_print(car);
}