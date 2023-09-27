#include "Item.h"

Item::Item(int price, const char* name)
{
	this->price = price;
	this->name = name;
}

void Item::Information()
{
	std::cout << "Item Name : " << name << std::endl;
	std::cout << "Item Price : " << price << std::endl;
}

void Item::SetItem(int price, const char * name)
{
	this->price = price;
	this->name = name;
}

void Item::SetCheck(bool check)
{
	this->check = check;
}

bool Item::GetCheck()
{
	return check;
}
