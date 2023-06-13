#pragma once
#include <iostream>	 // i : input - o : output

// C 언어 ( 출력 : printf(), 입력 : scanf_s())
// C++ 언어 ( std::cout : 출력, std::cin : 입력 ) 

// 스트림이란?
// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

void Function(const int& x)
{
	std::cout << "x의 값 : " << x << std::endl;
}

int main()
{
#pragma region C++ 입출력
	// char a = 'A';
	// int b = 100;
	// float c = 9.81f;

	// // ( <<	: 삽입 연산자 )
	// // 자신이 참조한 값을 반환하는 연산자입니다.

	// // std::endl : 개행
	// std::cout << (int)a << std::endl;
	// std::cout << b << " / " << c << std::endl;

	// int data = 0;
	// int data1 = 0;

	// // ( >> : 추출 연산자 )
	// // 버퍼에 저장한 다음 NULL 문자까지만 버퍼 안의
	// // 내용을 전달하는 연산자입니다.
	// std::cin >> data >> data1;
	// std::cout << "data의 값 : " << data << std::endl;

#pragma endregion

#pragma region C++ 동적 할당

	// c 언어
	// malloc() 
	// free()

	// c++ 
	// new 메모리 할당
	// delete 메모리 해제

	//             ptr			    동적 할당한 메모리 4 byte
	// [ 4 byte 메모리의 시작 주소 ] -----> [][][][]
	//int * ptr = new int;

	// new 객체() 생성자를 호출합니다.
	// malloc() 생성자가 호출되지 않습니다. 

	// *ptr = 100;
	// delete ptr;

							 // 4 byte  4 byte   4 byte   
	// int * p = new int[3]; //  [  ]    [  ]     [  ]
	// 
	// p[0] = 100;
	// p[1] = 200;
	// p[2] = 300;
	// 
	// delete [] p;



#pragma endregion

#pragma region 참조자
	// 어떤 변수의 메모리 공간에 또 다른 이름입니다.

	// 10 MB
	// int value = 10;

	// // 참조자 선언
	// int & other = value;
	// int & other1 = value;
	// 
	// std::cout << "value의 값 : " << value << std::endl; // 10
	// std::cout << "other의 값 : " << other << std::endl; // 10

	// other = 300; 
	// other1 = 25;

	// Function(value);

	// std::cout << "value의 값 : " << value << std::endl; // 25
	// std::cout << "other의 값 : " << other << std::endl; // 25
#pragma endregion

	return 0;
}

