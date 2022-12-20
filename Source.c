#include <stdio.h>
#include <time.h>

int main()	
{
	// rand( )
	/*
	// 0 ~ 32767 사이의 난수 값을 반환하는
	// 함수입니다. 

	// time.h 
    // 1970년 1월 1일 0시 0분 0초부터 경과되는.
	// 시간을 초(sec)로 반환하는 함수

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		// rand()함수는 프로그램이 생성될 때 정해진
		// 값이 출력되기 때문에 프로그램을 여러 번 실행시켜도
		// 계속 같은 값이 출력됩니다.   
		int value = rand() % 10 + 1;
		printf("value의 값 : %d\n", value);
	}
	*/

	// UP-DOWN 게임
	// 컴퓨터는 1 ~ 50 사이의 난수 값을 가지게 됩니다.
	srand(time(NULL));

	int answer = 0;
	int computer = rand() % 50 + 1;
	int life = 10;

	while(1) // <- 게임 업데이트
	{
		if (life <= 0)
		{
			printf("\n목숨을 다 소모하였습니다. (패배)\n");
			break;
		}

		printf("컴퓨터가 가지고 있는 값을 출력해주세요.\n");
		printf("현재 목숨 : %d", life);
		printf("\n내가 선택한 값 : ");

		// 서식 지정(정수) []
		// call by reference (* ???) 

		
		scanf_s("%s", &answer);

		if (answer < computer)
		{
			life--;
			printf("\ncomputer가 가지고 있는 값보다 작습니다.\n");
		}
		else if(answer > computer)
		{
			life--;
			printf("\ncomputer가 가지고 있는 값보다 큽니다.\n");
		}
		else if (answer == computer)
		{
			printf("\n컴퓨터가 가지고 있는 값을 찾았습니다. (승리)\n");
	
		}
	}
	  

	return 0;
} 
