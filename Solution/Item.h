#pragma once
class Item
{
private :
	int price;
	const char* name;
	bool check;

public :
	Item(int price = 0, const char * name = "");

	void SetCheck(bool check);
	bool GetCheck();
};

