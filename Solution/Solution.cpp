#include <iostream>
#include "Camera.h"

using namespace std;

#pragma region 상속
     // 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
     // 설정해주는 기능입니다.

class Vehicle
{
protected :
    float speed;
    static int KillCount;
public :
    Vehicle()
    {
        cout << "Vehicle 오브젝트 생성" << endl;
    }

    void Movement()
    {
        cout << "이동" << endl;
    }

    int GetCount()
    {
        return KillCount;
    }

    ~Vehicle()
    {
        cout << "Vehicle 오브젝트 해제" << endl;
    }
};


int Vehicle::KillCount = 0;


class Car : public Vehicle
{
private:
    int carID;

public :
    Car()
    {
        carID = 1;
        speed = 100;
        cout << "Car 오브젝트 생성" << endl;
    }

    ~Car()
    {
        cout << "Car 오브젝트 해제" << endl;
        cout << "KillCount : " << ++KillCount << endl;
    }
};

// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
// 메모리를 포함한 상태로 메모리의 크기가 결정됩니다.
#pragma endregion

int main()
{
#pragma region 상속
     
   /*   
      Vehicle vehicle;
   
      Car car1;
      Car car2;
      Car car3;
   
      cout << "vehicle의 크기 : " << sizeof(vehicle) << endl;
      cout << "car의 크기 : " << sizeof(Car) << endl;
   */
     
#pragma endregion

#pragma region 클래스 분할과 구현
   /* 
      Camera camera;

      camera.Information();
   */
#pragma endregion

	return 0;
}

