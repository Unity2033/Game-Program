#include "Sword.h"

void Sword::Stat()
{
	attack = 999;
	std::cout << "검 공격력 : " << attack << std::endl;
}

void Sword::Attack()
{
	std::cout << "베기" << std::endl;
}
