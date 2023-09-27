#include "Inventory.h"


Inventory::Inventory(int x, int y)
{
	lineX = x;
	selectIndex = 0;

	size = x * y;
	items = new Item[size];

	for (int i = 0; i < size; i++)
	{
		items[i].SetCheck(false);
	}
}

void Inventory::ShowItem()
{
	if (items[selectIndex].GetCheck() != false)
	{
		items[selectIndex].Information();
	}
	else
	{
		std::cout << "Item이 존재하지 않습니다." << std::endl;
	}
}

void Inventory::AddItem()
{
	for (int i = 0; i < size; i++)
	{
		if (items[i].GetCheck() == false)
		{
			items[i].SetItem(100, "Potion");
			items[i].SetCheck(true);
			break;
		}

		if (i == size - 1)
		{
			if (items[size - 1].GetCheck() == true)
			{
				std::cout << "인벤토리가 가득 찼습니다~" << std::endl;
			}
		}
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
			std::cout << "□";
		}
		else if (items[i].GetCheck() == true)
		{
			std::cout << "■";
		}
	}
}

void Inventory::SelectNumber(InputKey inputKey)
{
	// inputKey.GetX() (2) / 2

	// [0] [1]
	int resultX = inputKey.GetX() / 2;

	// inputKey.GetY() (2) * 5
	int resultY = inputKey.GetY() * lineX;

	// resultX + resultY
	// [0 ] [1 ] [2 ] [3 ] [4 ]
	// [5 ] [6 ] [7 ] [8 ] [9 ]
	// [10] [11] [12] [13] [14]

	selectIndex = resultX + resultY;
}			   
