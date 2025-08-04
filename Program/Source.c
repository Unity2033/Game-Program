#include <stdio.h>

int main()
{
#pragma region 메모리 영역

#pragma region Code 영역
	// 프로그램을 실행하기 위해 필요한 코드가 저장되는 영역으로
	// 함수의 주소와 상수가 저장되는 메모리 영역입니다.

#pragma endregion

#pragma region Data 영역
	// 프로그램의 시작과 함께 메모리에 저장되며, 프로그램이
	// 종료될 때 메모리가 해제되는 영역입니다.
#pragma endregion

#pragma region BSS 영역
	// 프로그램이 실행될 때 초기화가 이루어지지 않은 전역 변수와
	// 정적 변수가 저장되는 메모리 영역입니다.

#pragma endregion

#pragma region Stack 영역
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로
	// 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장
	// 되는 메모리 영역입니다.

#pragma endregion

#pragma region Heap 영역
	// 사용자가 직접 메모리 공간을 할당해주는 메모리 영역
	// 이며, 사용하지 않는 경우 사용자가 직접 메모리를
	// 해제해야 되는 메모리 영역입니다.

#pragma endregion

#pragma endregion



	return 0;
}
