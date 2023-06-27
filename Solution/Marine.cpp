#include "Marine.h"

Marine::Marine()
{
	hp = 100;
}

int Marine::GetHP()
{
	return hp;
}

void Marine::SetHP(int hp)
{
	this->hp = hp;
}

void Marine::Skill()
{
	std::cout << "Stimpack" << std::endl;
}
