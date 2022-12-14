#include <stdio.h>

// 바이트 패딩
/*
// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
// 컴파일러가 레스지스터의 블록에 맞추어서 바이트를 패딩해주는 최적화 작업입니다.

// 레지스터란?
// 프로세서에 위치한 고속 메모리로 극히 소량의 데이터나 처리 중인 중간 결과와도 같은 
// 프로세서가 바로 사용할 수 있는 데이터를 담고 있는 영역

struct Champion
{
	// 구조체의 크기는 구조체를 구성하는 멤버 변수 중에서 가장 큰 멤버 변수의 자료형에
	// 배수가 되도록 정렬합니다.

	char grade;	// 1 byte
	double position; // 8 byte
	int health;	// 4 byte
};
*/

 // 자기 참조 구조체
struct Node
{
	int data; // 4 byte
	struct Node * next; // 8 byte
};

int main()	
{
	// 바이트 패딩
    /*
	struct Champion champion;

	printf("Champion의 크기 : %d", sizeof(champion));
	*/

	// 자기 참조 구조체
	struct Node node1 = {10, NULL};
	struct Node node2 = {20, NULL};
	struct Node node3 = {30, NULL};

	node1.next = &node2;
	node2.next = &node3;

	printf("Node1의 data의 값 : %d\n", node1.data);
	printf("Node2의 data의 값 : %d\n", node1.next->data);
	printf("Node3의 data의 값 : %d\n", node1.next->next->data);
	return 0;
} 
