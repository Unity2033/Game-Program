#include <iostream>

#include "Vulture.h"
using namespace std;

#pragma region 다형성
   // 여러 개의 서로 다른 객체가 동일한 기능을
   // 서로 다른 방법으로 처리할 수 있는 작업입니다.

   // 다형성은 컴파일 시점에 함수와 속성이 결정되는
   // 정적 바인딩을 하지 않고, 실행 시간에 함수와
   // 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다.
#pragma endregion


int main()
{
#pragma region 오버라이드
	/*
	Mechanic mechanic;
	mechanic.Move();

	Vulture vulture;
	vulture.Move();
	*/
#pragma endregion

#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로 재정의
	// 될 수 있는 함수입니다.

	Mechanic * mechanic1 = new Vulture;

	cout << "Mechanic의 크기 : " << sizeof(Mechanic) << endl;
	cout << "Vulture의 크기 : " << sizeof(Vulture) << endl;

	mechanic1->Move();
	mechanic1->Attack();

	// 가상 함수 실행 시간에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있으며,
	// 접근 지정자는 공개로 설정해야 합니다.
#pragma endregion


	return 0;
}

