#pragma once
#include "Unit.h"

class Ghost	: public Unit
{
private:
	int hp;

public:
	Ghost();

	int GetHP() override;
	void SetHP(int hp) override;
	void Skill() override;
};

