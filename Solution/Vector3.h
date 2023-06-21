#pragma once
#include <iostream>

class Vector3
{
private:
	int x, y, z;

public :
	Vector3(int x, int y, int z);
	void Print();

	Vector3 operator + (Vector3& clone);
    Vector3 & operator++();
};

