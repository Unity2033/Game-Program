#include "Ghost.h"

Ghost::Ghost()
{
    health = 45;
    maxHP = health;
}

int Ghost::GetHP()
{
    return health;
}

void Ghost::Skill()
{
}

void Ghost::RecoveryHP()
{
    health = maxHP;
}

void Ghost::SetHP(int value)
{
	if (value >= 0 && value <= maxHP)
	{
		health = value;
	}
	else
	{
		std::cout << "잘못된 값이 들어왔습니다." << std::endl;
	}
}
