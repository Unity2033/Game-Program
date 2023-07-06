#pragma once
#include <iostream>

// STL <list 라이브러리>
#include <list>

// STL <map 라이브러리>
#include <map>

// STL <set 라이브러리>
#include <set>

using namespace std;

int main()
{
#pragma region 연관 컨테이너
	// Key와 Value처럼 관련있는 데이터를 하나의 쌍으로
	// 저장하는 컨테이너입니다.

	// std::list
    /*
	// std::list<int> list;
	// 
	// list.push_front(100);
	// list.push_back(45);
	// list.push_back(33);
	// list.push_back(11);
	// list.push_back(7);
	// 
	// // iterator
	// std::list<int>::iterator iter;
	// 
	// for (iter = list.begin(); iter != list.end(); iter++)
	// {
	// 	  std::cout << "List의 값 : " << *iter << std::endl;
	// }
	// 
	// list.pop_front(); // 45, 33, 11, 7
	// list.pop_back(); // 45, 33, 11
	// 
	// iter = list.begin();
	// 
	// iter++;
	// 
	// list.insert(iter, 99); // 45, 99, 33, 11
	// list.erase(iter); // 45, 99, 11
	// 
	// std::cout << std::endl;
	// 
	// for (iter = list.begin(); iter != list.end(); iter++)
	// {
	// 	  std::cout << "List의 값 : " << *iter << std::endl;
	// }
	*/

	// std::map
	/*
	std::map<const char*, int> map;

	                              // Item(이름) (가격)               
	map.insert(pair<const char*, int>("Sword", 1000));
	map.insert(pair<const char*, int>("Shoes", 500));


	std::map<const char*, int>::iterator mapIterator;

	for (mapIterator = map.begin(); mapIterator != map.end(); mapIterator++)
	{
		// mapIterator->first (KEY)
		// mapIterator->second (VALUE)
		std::cout << "KEY : " << mapIterator->first << " VALUE : " << mapIterator->second << std::endl;
	}

	// map.find( ) : KEY를 검색하는 함수입니다.
	if (map.find("Gloves") != map.end())
	{
		std::cout << "KEY가 존재합니다. " << std::endl;
	}
	else
	{
		std::cout << "KEY가 존재하지 않습니다. " << std::endl;
	}
	*/

	// std::set
	/*
	std::set<int> set;

	set.insert(45);
	set.insert(96);
	set.insert(7);
	set.insert(12);

	// clear() : 모든 원소를 삭제하는 함수입니다.
	set.clear();

	// set은 자동으로 정렬이 일어납니다.
	for (auto& element : set)
	{
		std::cout << element << std::endl;
	}
	*/
#pragma endregion


	return 0;
}
