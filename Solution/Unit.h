#pragma once
#include <iostream>

class Unit
{
protected :
	int health;
	int defense;
	int maxHP;

public :	
	virtual int GetHP() = 0;
	virtual void Skill() = 0;
	virtual void RecoveryHP() = 0;
	virtual void SetHP(int value) = 0;
};					    

