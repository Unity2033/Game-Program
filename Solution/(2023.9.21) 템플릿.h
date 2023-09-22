#pragma once
#include <iostream>
#include "LinkedList.h"

using namespace std;

#pragma region 템플릿
// 데이터 형식에 의존하지 않고, 하나의 값이
// 여러 다른 데이터 타입들을 가질 수 있는
// 기술에 중점을 두어 재사용성을 높일 수 있는 기능입니다.

// int	     변수이름
// typename	 변수이름

template <typename T>
void Add(T value1, T value2)
{
	cout << value1 + value2 << endl;
}

template <>
void Add(char value1, char value2)
{
	cout << value1 << " : " << value2 << endl;
}

template<typename T1, typename T2>
void Add(T1 value1, T2 value2)
{
	cout << value1 + value2 << endl;
}
#pragma endregion


int main()
{
#pragma region  템플릿
	/*
	Add( 'A', 2 );

	Add( 10, 15.75);
	Add( 5.75f, 4.85f );
	*/

	LinkedList<int> linkedList();


	// linkedList.Push(10);

#pragma endregion



	return 0;
}