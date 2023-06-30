#pragma once
#include <iostream>
#include "Tiger.h"
#include "Lion.h"

using namespace std;

int main()
{
#pragma region 예외 처리
	//	int a;
	//	int b;
	//	int result = 0;
	//	
	//	cin >> a >> b;
	//	
	//	try
	//	{
	//		if (b == 0)
	//		{
	//			throw invalid_argument("제수는 0이 될 수 없습니다.");
	//		}
	//	
	//		std::cout << "계산합니다." << std::endl;
	//		result = a / b;
	//	}
	//	catch (const std::exception & error)
	//	{
	//		std::cout << error.what() << std::endl;
	//	}
	//	catch (int errorID)
	//	{
	//		std::cout << errorID << std::endl;
	//	}
#pragma endregion

#pragma region final 
	// 클래스나 가상 함수를 하위 클래스에서 재정의할
	// 수 없도록 설정해주는 기능입니다.
	// Animal animal;
	// animal.Action();
	// 
	// Carnivore carnivore;
	// carnivore.Action();
	// 
	// Tiger tiger;
	// tiger.Action();
#pragma endregion

#pragma region friend
	 // 수평적인 관계의 클래스간의 멤버 변수를 
	 // 공유할 수 있도록 설정해주는 기능입니다.
	Lion lion;
	Tiger tiger1; {}

	tiger1.FriendFunction(lion);
#pragma endregion


	return 0;
}
