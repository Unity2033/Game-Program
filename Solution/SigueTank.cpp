#include "SigueTank.h"

SigueTank::SigueTank()
{
	health = 150;
	attack = 30;
}

void SigueTank::Attack()
{
	cout << "시즈탱크 공격" << endl;
}

SigueTank::~SigueTank()
{
	cout << "시즈탱크 삭제" << endl;
}
