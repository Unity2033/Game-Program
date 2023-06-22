#pragma once
#include <iostream>
#include "Vector3.h"

using namespace std;

#pragma region 다형성
// 여러 개의 서로 다른 객체가 동일한 기능을
// 서로 다른 방법으로 처리할 수 있는 기능입니다.
#pragma endregion

#pragma region 함수의 오버로딩
   // 같은 이름의 함수를 매개 변수의 자료형과 매개변수의
   // 수로 구분하여 여러 개를 선언할 수 있는 기능입니다.
void Add(int x, int y)
{
	std::cout << x + y << std::endl;
}

// 함수의 오버로딩의 경우 함수의 매개변수에 전달하는
// 인수의 형태를 보고 호출하므로, 반환형으로 함수의
// 오버로딩을 생성할 수 없습니다.
// ex) int Add(int x, int y)
// {
// 	 return x + y;
// }

void Add(float x, float y)
{
	std::cout << x + y << std::endl;
}

#pragma endregion

int main()
{
#pragma region 함수의 오버로딩
	// Add(10, 20); 
	// Add(10.5f, 9.85f);	
#pragma endregion

#pragma region 연산자 오버로딩
	// Vector3 v1(2, 2, 2);
	// v1.Print();
	// 
	// Vector3 v2(3, 3, 3);
	// v2.Print();
	// 
	// Vector3 v3 = v1 + v2;
	// v3.Print();

	// 단항 연산자
	// ++, -- 

	Vector3 v4(1, 1, 1);

	++(++v4);

	v4.Print();


#pragma endregion


	return 0;
}
