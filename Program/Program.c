#include <stdio.h>

#define SIZE 10

int main()
{
#pragma region GetAsyncKeyState
	// Windows API에서 제공하는 입력 처리 함수로, 지정된 키의 상태를
	// 비동적으로 확인할 때 사용되는 함수입니다.

	// Key State
	
	// 0x0000 : 이전에 누른 적이 없고, 호출 시점에도 눌려있지 않은 상태
	
	// 0x0001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른 적이 없고, 호출 시점에는 눌려있는 상태

	// 0x8001 : 이전에 누른 적이 있고, 호출 시점에도 눌려있는 상태

	const char * dialog[SIZE];

	dialog[0] = "안녕하세요...?";
	dialog[1] = "누구신가요...?";
	dialog[2] = "탐정입니다.";
	dialog[3] = "저는 의뢰인입니다.";
	dialog[4] = "수상한 사건이 있다고 해서 왔습니다.";
	dialog[5] = "네 맞습니다.";
	dialog[6] = "이 사건에 대해 아시는 게 있나요.?";
	dialog[7] = "조금 알고 있습니다.";
	dialog[8] = "말씀해주세요.";
	dialog[9] = "사실은... ☏";

#pragma endregion


	return 0;
}