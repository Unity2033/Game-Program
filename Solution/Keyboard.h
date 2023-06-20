#pragma once
#include <iostream>
#include "Divice.h"

class Keyboard : public virtual Divice
{
private:
	char character;

public :
	int price;

	Keyboard();
	void Input(char);
};

