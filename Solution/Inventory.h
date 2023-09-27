#pragma once
#include "Item.h"
#include "InputKey.h"

#include <iostream>

class Inventory
{
private :
	int size;
	int lineX;
	int selectIndex;

	Item * items;

public :
	Inventory(int x = 5, int y = 3);

	void ShowItem();
	void AddItem();
	void Renderer();
	void SelectNumber(InputKey inputKey);
};

