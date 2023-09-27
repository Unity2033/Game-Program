#pragma once
#include <iostream>

class Item
{
private :
	int price;
	const char* name;
	bool check;

public :
	Item(int price = 0, const char * name = "");

	void Information();
	void SetItem(int price, const char * name);
	void SetCheck(bool check);
	bool GetCheck();
};

