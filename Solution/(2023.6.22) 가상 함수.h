#pragma once
// #include <iostream>
#include "Sword.h"

using namespace std;

#pragma region 함수의 오버라이드
// 상위 클래스에 있는 함수를 하위 클래스에서
// 재정의하여 사용하는 기능입니다.

#pragma endregion


int main()
{
#pragma region 함수의 오버라이드
	// 함수의 오버라이드는 상속 관계에서만 이루어지며,
	// 하위 클래스에서 함수를 재정의할 때 상위 클래스의
	// 함수 형태와 일치해야 합니다.
	//Weapon weapon;
	//weapon.Attack();
	//
	//Sword sword;
	//sword.Attack();
	//
	//// 바인딩
	//// 프로그램의 어떤 기본 단위가 가질 수 있는 구성 요소의
	//// 구체적인 값을 결정하는 것입니다.
	//weapon = sword;
	//weapon.Attack();
#pragma endregion

#pragma region 가상 함수
	 // 상속하는 클래스 내에서 같은 형태의 함수로
	 // 재정의될 수 있는 함수입니다.

	Weapon* ptr = new Sword;
	ptr->Attack();

	// 가상 함수의 경우 가상 함수 테이블을 사용하여
	// 호출되는 함수를 실행 시간에 결정하며, 정적으로
	// 선언된 함수는 가상 함수로 선언할 수 있습니다.
	ptr->Stat();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있으며,
	// 접근 지정자는 공개로 설정해야 합니다.
#pragma endregion

	return 0;
}
