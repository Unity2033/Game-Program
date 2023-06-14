#pragma once
#include <iostream>	
using namespace std;

int data = 56;

#pragma region 이름 공간
// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

namespace A
{
	void Damage()
	{
		cout << "A 개발자 Damage( ) 함수" << endl;
	}
}

namespace B
{
	void Damage()
	{
		cout << "B 개발자 Damage( ) 함수" << endl;
	}
}
#pragma endregion


// auto는 매개 변수로 사용할 수 없습니다.
void Volume(int x) // 4 byte
{

}

int main()
{
#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자입니다.

	// (범위 연산자) ::

	// int data = 100;
	// 
	// // 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때
	// // 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이
	// // 존재하므로 전역 변수가 호출되지 않습니다.
	// std::cout << "Stack 영역에 있는 data의 값 : " << data << std::endl;
	// std::cout << "Data 영역에 있는 data의 값 : " << ::data << std::endl;
#pragma endregion

#pragma region 이름 공간
	// A::Damage();
	// B::Damage();
#pragma endregion

#pragma region auto	(자료형 추론)
	  // 선언된 변수의 초기화 식을 사용하여
	  // 해당 형식을 추론하도록 컴파일러에게 지시하는 기능입니다.

	  // auto decimal = 6.25;
	  // auto value = 100;
	  //
	  // // auto를 사용할 때 값을 반드시 넣어주어야 합니다.
	  // // ex) auto b;
	  //
	  // // for(초기값; 조건식; 증감식)
	  //
	  // // 범위 기반 for문 (foreach)
	  // int table[5] = { 1,2,3,4,5 };
	  //
	  // // 값에 의한 호출
	  // for (const auto & e : table)
	  // {
		//   std::cout << e << std::endl;
	  // }
	  //
	  // for (int i = 0; i < 5; i++)
	  // {
		//   std::cout << table[i] << std::endl;
	  // }
#pragma endregion

	return 0;
}

