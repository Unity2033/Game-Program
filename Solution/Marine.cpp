#include "Marine.h"

int Marine::GetHP()
{
	return health;
}

void Marine::Skill()
{
	std::cout << "스팀팩" << std::endl;
}

void Marine::SetHP(int value)
{
	if (value >= 0 && value <= 100)
	{
		health = value;
	}
	else
	{
		std::cout << "잘못된 값이 들어왔습니다." << std::endl;
	}
}
