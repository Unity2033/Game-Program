#pragma once
#include "Weapon.h"

class Sword	: public Weapon
{
public:
	Sword() : Weapon(10, 6.75f, 1500) { };
	~Sword();

	virtual void Stat();
	void Attack();
};

