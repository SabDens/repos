#pragma once
#include <string>
enum Grade
{
	common,
	Rare,
	Epic,
	Legendary,
	Mifhic
};

class Weapon
{
private:
	Grade grade;
	std::string name;
	unsigned int damage;
public:
	unsigned int GetDamege();
	void UpGrage();
	Grade GetGrade();

};

