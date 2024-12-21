#include "Unit.h"
#include <iostream>


void Unit::Attack(Unit& enemy) {
	std::cout << "Unit " << name << " Attack" << enemy.name << std::endl;
}
void Unit::Defense() {

}
void Unit::Print() {
	std::cout << "unit " << name << std::endl;
}