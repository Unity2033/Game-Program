#pragma once
#include <stdio.h>

void main()
{
	// 문자열
	/*
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.

	// 배열의 크기를 생략하고 데이터를 넣게 되면 컴파일러가 자동
	// 으로 배열의 크기를 계산합니다.

	// string [A] [B] [C] [D] [E] [\0]
	char string [ ] = "ABCDE";

	const char * charPoint = "ABCDE";

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
	// 할 수 있으며, 문자열 상수는 데이터 영역의 읽기 전용
	// 공간에 저장되기 때문에 문자열의 값을 변경할 수 없습니다.

	// charPoint[3] = 'G';
	// string = "ABCd";
	charPoint = "BBDDEEGG";

	// 문자열 생성할 때는 NULL문자가 포함됩니다.
	// NULL문자의 크기는 1 Byte입니다.
	//printf("string 배열의 크기 : %d\n", sizeof(string));

	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며
	// , 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.

	//char * charPtr = string;

	//printf("charPtr의 크기 : %d", sizeof(charPtr));

	//charPtr[1] = 'Z';
	//charPtr[3] = 'T';

	//* charPtr = 'O';
	//string[3] = '\0';

	//charPtr = &string[4];
	//* charPtr = 'M';

	// %s : 문자열을 한번에 출력하는 서식 지정자입니다.
	//printf("%s\n", string);

	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만,
	// 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만
	// 문자열을 출력합니다.
	//for (int i = 0; i < 5; i++)
	//{
		//printf("%c ", string[i]);
	//}
	*/

	// sizeof 연산자
	/*
	// 자료형의 크기를 반환하는 연산자입니다.
	printf("char 데이터의 크기 : %d\n", sizeof(char));
	printf("short 데이터의 크기 : %d\n", sizeof(short));

	int value = 10;
	long data = 10;

	// sizeof 연산자는 데이터를 Byte 단위로 표시합니다.
	printf("int 데이터의 크기 : %d\n", sizeof(value));
	printf("long 데이터의 크기 : %d\n", sizeof(data));


	// 접미사를 선언해서 리터럴 상수의 자료형 크기를 명시적
	// 선언합니다.
	printf("float 데이터의 크기 : %d\n", sizeof(3.14f));

	// 접미사
	// 실수를 선언할 때
	// 3.14f (float)
	// 3.65 (double)

	printf("double 데이터의 크기 : %d\n", sizeof(3.65));
	*/
}
