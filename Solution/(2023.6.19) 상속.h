#pragma once
#include <iostream>
#include "IPhone.h"

using namespace std;

#pragma region 상속
// 상위 클래스의 속성을 하위 클래스가 사용할
// 수 있도록 설정해주는 기능입니다.

class Parent
{
public:
    Parent()
    {
        cout << "Parent() 클래스 생성" << endl;
    }

    ~Parent()
    {
        cout << "Parent() 클래스 소멸" << endl;
    }

    void Speak(int a)
    {
        // this 포인터
        // 자기 자신을 가리키는 포인터입니다.
        this->a = a;

        // this 포인터는 호출된 객체를 가리키는 상수 포인터입니다.

        // 상수 포인터 자료형이므로 포인터 자체가 다른 것을 
        // 가리키도록 할 수 없습니다.
        cout << this << endl;
        cout << "Speak( )" << endl;
    }

    int a;
protected:
    int b;
private:
    int c;
};

class Child : public Parent
{
public:
    Child()
    {
        // public 상속
        /*
         a = 100; (o)
         b = 200; (o)
         c = 300; (x)
        */

        // protected 상속
        /*
         a = 100; (o)
         b = 200; (o)
         c = 300; (x)
        */

        // private 상속
        /*
            a = 100; (o)
            b = 200; (o)
            c = 300; (x)
        */

        cout << "Child() 클래스 생성" << endl;
    }

    ~Child()
    {
        cout << "Child() 클래스 소멸" << endl;
    }

    int d;
};

#pragma endregion

int main()
{
#pragma region 상속
    // Child child;

    // public 상속 시
    // child.a = 999;
    // protected로 상속 시 접근할 수 있는 멤버 변수가 존재하지 않습니다.
    // private로 상속 시 접근할 수 있는 멤버 변수가 존재하지 않습니다.
#pragma endregion

#pragma region this 포인터
    // Parent parent1;
    // parent1.Speak(10);
    // 
    // Parent parent2;
    // parent2.Speak(20);
    // 
    // Parent parent3;
    // parent3.Speak(30);
#pragma endregion

#pragma region 클래스의 메모리 크기
    // Parent p1; // int (a), (b), (c) 
    // Child c1;  // int (d)

    // cout << "Parent 사이즈의 크기 : " << sizeof(p1) << endl;
    // cout << "Child 사이즈의 크기 : " << sizeof(c1) << endl;
#pragma endregion

    IPhone iPhone14;

    iPhone14.SetControlSound(5);

    cout << iPhone14.GetVolume() << endl;

    return 0;
}

