#include <stdio.h>

void main()	
{
	// 입력 함수
    /*
    // 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞추어
    // 입력해주는 함수입니다.

    char alphabet = 'A';
    int value = 0;
    float data = 0.0;

    // 출력 <- [][][][][][] <- 입력
    // 버퍼 오버플로가 발생할 수 있습니다.
    scanf_s("%c", &alphabet);
    scanf_s("value = %d data = %f", &value, &data);

    printf("alphabet의 값 : %c\n", alphabet);
    printf("value의 값 : %d\n", value);
    printf("data의 값 : %f\n", data);
    */

    // 배열
    // 같은 자료형의 변수들로 이루어진 유한 집합입니다.

    // 정해진 배열의 크기를 벗어나서 데이터를 넣을 수 없습니다. 
    // 배열의 모든 인덱스 값으로 0으로 초기화하려면 {0,} 선언해주시면 됩니다.
    // 배열에 값을 넣지 않으면 0으로 채워지게 됩니다.
    int space[5] = { 5,};

    // 배열의 경우 첫 번째 원소는 0부터 시작합니다.
    for (int i = 0; i < 5; i++)
    {
        printf("space[%d]의 값 : %d\n", i, space[i]);
    }

    // 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
    // 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가지게 됩니다.
    // space[5] = 10;

    // 배열의 이름 배열의 시작 주소를 의미합니다.
    printf("space 배열의 주소 : %p\n", space);
    printf("space 배열의 0 번째 주소 : %p\n", &space[0]);
    printf("space 배열의 1 번째 주소 : %p\n", &space[1]);
    printf("space 배열의 2 번째 주소 : %p\n", &space[2]);
    printf("space 배열의 3 번째 주소 : %p\n", &space[3]);
    printf("space 배열의 4 번째 주소 : %p\n", &space[4]);


} 
