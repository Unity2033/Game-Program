#include <stdio.h>
#include <math.h>

struct Data
{
	char grade;
	int health;
	double experience;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Data data = {'B', 50, 75.625};
	// 
	// printf("data의 grade : %c\n", data.grade);
	// printf("data의 health : %d\n", data.health);
	// printf("data의 experience : %lf\n\n", data.experience);
	// 
	// // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화됩니다.
	// // 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 대응됩니다.
	// 
	// data.grade = 'A';
	// data.health = 100;
	// data.experience = 135.75;
	// 
	// printf("data의 grade : %c\n", data.grade);
	// printf("data의 health : %d\n", data.health);
	// printf("data의 experience : %lf\n", data.experience);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	printf("%lf \n",sqrt(25));

	printf("%lf \n",pow(5,2));


#pragma endregion


	return 0;
}
