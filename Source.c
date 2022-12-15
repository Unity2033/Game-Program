#include <stdio.h>
#include <stdlib.h> // 동적으로 할당할 수 있는 malloc 함수 라이브러리

int main()	
{
	// 시작 프로그램으로 설정된 프로젝트의 이름은
	// 시작 프로그램으로 설정되지 않은 프로젝트의
	// 이름보다 조금 더 굵은 글씨로 표시됩니다.
	printf("Lecture 프로젝트의 파일\n");

	// 동적 할당이란?
	// 프로그램을 실행 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.
	char * pointer = malloc(sizeof(char));

	// char     
	// [] -----> [] / [][][] / [][][][] 
		
	//동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경시킬 수 있으며,
	// 동적으로 메모리의 크기를 할당할 때 바이트 단위로 지정합니다.
	//*pointer = NULL;

	*pointer = 10;
	printf("동적 할당한 메모리의 변경 전 주소 : %p\n", pointer);
	printf("동적 할당한 메모리의 값 : %d\n", *pointer);

	pointer = pointer + 10;
	*pointer = 128;

	printf("동적 할당한 메모리의 변경 후 주소 : %p\n", pointer);
	printf("동적 할당한 메모리의 값 : %d\n", *pointer);


	return 0;
} 
