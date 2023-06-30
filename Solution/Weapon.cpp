#include "Weapon.h"

Weapon::~Weapon()
{
	std::cout << "Weapon() 소멸" << std::endl;
}

void Weapon::Stat()
{
	std::cout << "무기 공격력 : " << m_attack << std::endl;
}

void Weapon::Attack()
{
	std::cout << "공격" << std::endl;
}

