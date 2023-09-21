#pragma once
#include <iostream>

template <typename T> 
class LinkedList
{

private :
	T data;

public :
	LinkedList() = default;

	LinkedList(int x)
	{

	}

	void Push(T data )
	{
		this->data = data;
		std::cout << "push가 되어진 data의 값 : " << this->data << std::endl;
	}
};

