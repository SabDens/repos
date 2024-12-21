#include "Weapon.h"
#include <iostream>


unsigned int Weapon::GetDamege() {
	return grade;
}
void Weapon::UpGrage() {
	std::cout << "UpGrade: " << name <<std::endl;

}
Grade Weapon::GetGrade() {
	return grade;
}