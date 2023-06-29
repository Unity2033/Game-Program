#pragma once
#include "Carnivore.h"
#include "Lion.h"

class Tiger	final : public Carnivore
{
public :
	// Carnivore 클래스에서 Final로 선언된 함수는
	// 더 이상 하위 클래스에서 재정의할 수 없습니다.
	// void Action();

	void FriendFunction(Lion lion)
	{
		lion.age = 5;
		lion.name = "FAKER";

		std::cout << "lion.age : " << lion.age << std::endl;
		std::cout << "lion.name : " << lion.name << std::endl;
	}
};

