#pragma once
#include<iostream>

class Weapon
{
protected :
	int m_attack;
	const int m_price;
	float m_criticalHit;

public :
	Weapon(int attack, float criticalHit, int price) : 
		m_attack(attack), 
		m_criticalHit(criticalHit),
		m_price(price)
	{ };
	virtual ~Weapon();

	virtual void Stat();
	void Attack();
};

