#pragma once
#pragma once
// #include <iostream>
#include "Marine.h"
#include "Ghost.h"

using namespace std;

void Recovery(Unit* unit)
{
	unit->SetHP(200);
}

int main()
{
	// 업 캐스팅	
	Marine marine; // 체력 100
	Ghost ghost;   // 체력 50

	//Unit * uptr = &marine;
	//uptr->Skill();

	//uptr = &ghost;
	//uptr->Skill();

	Recovery(&marine); // 200
	std::cout << "마린의 체력 : " << marine.GetHP() << std::endl;

	Recovery(&ghost);  // 200 
	std::cout << "고스트의 체력 : " << ghost.GetHP() << std::endl;

	return 0;
}
