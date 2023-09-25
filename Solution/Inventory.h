#pragma once
#include "Item.h"
#include <iostream>

class Inventory
{
private :
	int size;
	Item * items;

public :
	Inventory(int x = 5, int y = 3);
	void Renderer();
};

