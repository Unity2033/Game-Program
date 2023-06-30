#include "Sword.h"

Sword::~Sword()
{
	std::cout << "Sword() 소멸" << std::endl;
}

void Sword::Stat()
{
	std::cout << "검 공격력 : " << m_attack << std::endl;
	std::cout << "치명타 확률 : " << m_criticalHit << std::endl;
}

void Sword::Attack()									
{
	std::cout << "베기" << std::endl;
}
