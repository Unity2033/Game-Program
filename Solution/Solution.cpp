#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
#include <windows.h>

using namespace std;

#pragma region 선형 컨테이너
   // 데이터를 선형으로 저장하며, 특별한 제약이나
   // 규칙이 없는 일반적인 컨테이너입니다.

#pragma endregion


int createCount;

int main()
{
#pragma region Vector 컨테이너
	//std::vector<int> vector;

	//// push_back() : 뒤 쪽에 데이터를 저장하는 함수
	////  0	 1	  2
	//// [10]	[20] [30]
	//vector.push_back(10);
	//vector.push_back(20);
	//vector.push_back(30);

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;
 //
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}

	//vector.push_back(40);
	//vector.push_back(50);

	////  0	 1	  2	   3
 //   // [10]	[20] [30] [40]
	//vector.pop_back();

	//cout << "vector.size : " << vector.size() << endl;
	//cout << "capacity : " << vector.capacity() << endl;

	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}
#pragma endregion

#pragma region 리듬 게임
	srand(time(NULL));

	std::vector<const char*> note;
	createCount = 5;

	for (int i = 0; i < createCount; i++)
	{
		int random = rand() % 4;

		switch (random)
		{
			case 0: note.push_back("↑");
				break; 
			case 1: note.push_back("←");
				break;
			case 2: note.push_back("→");
				break;
			case 3: note.push_back("↓");
				break;
		}
	}

	for (int i = 0; i < note.size(); i++)
	{
		cout << note[i] << " ";
	}

#pragma endregion



	return 0;
}