#pragma once
#include<iostream>

class Weapon
{
protected :
	int attack;

public :
	Weapon();
	virtual ~Weapon();

	virtual void Stat();
	void Attack();
};

