#pragma once
#include <iostream>
using namespace std;

class Animal
{
private:
	char blood;	  // 1 byte

	int age;      // 4 byte	  
	float height; // 4 byte	  

public:
	Animal( int m_age, float m_height ) : age( m_age ), height( m_height )
	{
		cout << "age : " << age << endl;
		cout << "height : " << height << endl;
	}

#pragma region this 포인터
	// 객체 자기 자신을 가리키는 포인터입니다.

   //           'A'	    5		   3.25f
	Animal( char blood, int age, float height )
	{
		this->blood = blood;
		this->age = age;
		this->height = height;

		cout << "객체의 주소 : " << this << endl;
	}

#pragma endregion


};

int* Value()
{
	int data = 10;
	return &data;
}

int main()
{
	// Animal animal('A', 3, 3.25f);

	int* ptr = Value();

	cout << *ptr << endl;

	*ptr = 300;

	cout << *ptr << endl;

	return 0;
}
