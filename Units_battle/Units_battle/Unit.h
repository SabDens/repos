#pragma once
#include "Weapon.h"



class Unit
{
private:
	unsigned int HP;
protected:
	Weapon weapon;
	
	unsigned int speed;
	std::string name;
	bool IsInDefense;
public:
	void Attack(Unit& enemy);
	void Defense();
	void Print();
};

