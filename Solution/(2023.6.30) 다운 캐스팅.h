#pragma once
#pragma once
#include <iostream>
#include "Sword.h"

using namespace std;

#pragma region 가변 길이 템플릿
template <typename T>
void TemplatePrintf(T arg)
{
	cout << arg << ",";
}

template <typename T, typename... Types>
void TemplatePrintf(T arg, Types... args)
{
	cout << arg << ",";
	TemplatePrintf(args...);
	std::cout << std::endl;
}

#pragma endregion


int main()
{
#pragma region 다운 캐스팅
	// Weapon * weapon = new Sword;
	// weapon->Attack();
	// weapon->Stat();
	// 
	// // 다운 캐스팅
	// Sword * sptr = (Sword*)weapon;
	// sptr->Attack();
	// sptr->Stat();
#pragma endregion

#pragma region 멤버 이니셜라이저
	//Weapon weaponItem(10, 3.65f, 1500);

#pragma endregion

#pragma region 가변 길이 템플릿
	// TemplatePrintf(10, 20, 30);
	// TemplatePrintf(1, 'A', "String", 10.575f, 5, 6, 7);
#pragma endregion

	return 0;
}
