#include <iostream>
#include "Inventory.h"
#include "InputKey.h"

using namespace std;

int main()
{
	Inventory inventory;
	InputKey inputKey;

	for (int i = 0; i < 3; i++)
	{
		inventory.AddItem();
	}

	inventory.Renderer();

	while (true)
	{
		inputKey.Move();
	}

	return 0;
}