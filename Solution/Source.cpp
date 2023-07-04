#pragma once
#include <iostream>

// STL <string 라이브러리>
#include <string>

using namespace std;

int main()
{
#pragma region 문자열 클래스 (std::string)
	std::string string("문자열");
	std::string name;

	// std::cout << "string 변수의 값 : " << string << std::endl;
	// 
	// string = "클래스";
	// 
	// std::cout << "string 변수의 값 : " << string << std::endl;

	std::cout << "string 변수의 값을 입력해주세요.";
	std::cin >> string;

	std::cout << "name 변수의 값을 입력해주세요.";
	std::cin >> name;
	std::cout << std::endl;

	std::cout << "string 변수의 값 : " << string << std::endl;
	std::cout << "name 변수의 값 : " << name << std::endl;

	// 1. 띄어쓰기를 했을 때 출력이 이상하게 되는 부분 (이해하기)
	// 2. 이 문제점에 대해서 해결 방안 (찾아보기)
#pragma endregion

	return 0;
}
