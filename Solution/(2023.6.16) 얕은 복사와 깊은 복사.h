#pragma once
#include <iostream>
#include "DataFile.h"

using namespace std;

#pragma region 깊은 복사
// 객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를 새로
// 복사하여 서로 다른 메모리를 생성하는 복사입니다.

class GameObject
{
public:
	int size;
	int* data;
	static int deathCount;

	GameObject(int m_size)
	{
		size = m_size;
		data = new int[size];
	}

	GameObject(const GameObject& clone)
	{
		size = clone.size;
		data = new int[size];
	}

	~GameObject()
	{
		delete[] data;
		deathCount++;
		cout << "게임 오브젝트가 파괴된 횟수 : " << deathCount << endl;
	}
};

int GameObject::deathCount = 0;

#pragma endregion

// 외부 변수
int globalValue = 100;

int main()
{
#pragma region 얕은 복사
	// 객체를 복사할 때 주솟값을 복사하여 같은 메모리를 
	// 가리키는 복사입니다.

	// int * ptr1 = new int;
	// 
	// int * ptr2 = ptr1;
	// 
	// *ptr1 = 100;
	// *ptr2 = 999;
	// 
	// cout << "ptr1이 가리키는 값 : " << *ptr1 << endl; 
	// cout << "ptr2가 가리키는 값 : " << *ptr2 << endl;
	// 
	// // 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	// // 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
	// // 서로 참조된 객체도 함께 영향을 받습니다.
	// delete ptr1;
	// delete ptr2;

#pragma endregion

#pragma region 깊은 복사
	// GameObject obj1(3);
	// obj1.data[0] = 111;
	// 
	// GameObject obj2 = obj1;
	// obj2.data[0] = 222;
	// 
	// cout << "obj1.data[0] : " << obj1.data[0] << endl;
	// cout << "obj2.data[0] : " << obj2.data[0] << endl;
#pragma endregion

	GameObject::deathCount;

	//GameObject monster1(1);
	//GameObject monster2(1);
	//GameObject monster3(1);



	return 0;
}

