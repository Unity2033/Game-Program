#include "Inventory.h"

Inventory::Inventory(int x, int y)
{
	size = x * y;
	items = new Item[size];

	for (int i = 0; i < size; i++)
	{
		items[i].SetCheck(false);
	}
}

void Inventory::Renderer()
{
	for (int i = 0; i < size; i++)
	{
		if (i % 5 == 0 && i != 0)
		{
			std::cout << std::endl;
		}

		if (items[i].GetCheck() == false)
		{
			std::cout << "бр";
		}
	}



}
