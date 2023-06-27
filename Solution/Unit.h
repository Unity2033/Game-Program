#pragma once
#include <iostream>

class Unit
{
private :
	int hp;
	// int attack;

public:
	// 순수 가상 함수
	// 하위 클래스에서 재정의할 것으로 기대하는 멤버 함수입니다.
	virtual void Skill() = 0;	

	virtual void SetHP(int hp) = 0;
	virtual int GetHP() = 0;
};

