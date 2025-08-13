#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = list[seed];

		list[seed] = list[i];

		list[i] = temporary;
	}
}

void update_health(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("♥");
	}

	printf("\n");
}

int main()
{
#pragma region rand Function
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1일 0시 0분 초부터 경과된
	// 시간을 초(sec)로 반환하는 함수입니다.

	// srand(time(NULL));
	// 
	// int random = rand() % 10 + 1;
	// 
	// printf("random : %d\n", random);

#pragma endregion

#pragma region Shuffle Function
	//	srand(time(NULL));
	//	
	//	int list[ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//	
	//	int size = sizeof(list) / sizeof(list[0]);
	//	
	//	shuffle(list, size);
	//	
	//	for (int i = 0; i < size; i++)
	//	{
	//		printf("list[%d] = %d\n", i, list[i]);
	//	}
#pragma endregion

#pragma region Game

	srand(time(NULL));

	int computer = rand() % 50 + 1;

	int answer = 0;

	int life = 5;

	while (life > 0)
	{
		update_health(life);

		printf("COMPUTER : ");

		scanf_s("%d", &answer);

		printf("\n");

		if (answer == computer)
		{
			break;
		}
		else if (answer > computer)
		{
			life--;

			printf("answer > computer\n");
		}
		else if (answer < computer)
		{
			life--;

			printf("answer < computer\n");
		}

		printf("\n");
	}

	if (life <= 0)
	{
		printf("D E F E A T");
	}
	else
	{
		printf("V I C T O R Y");
	}
#pragma endregion

	return 0;
}