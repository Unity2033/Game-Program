#pragma once
#include <iostream>
#include "Divice.h"

class Mouse	: public virtual Divice
{
private :
	int sensor;

public:
	int price;

	Mouse();
	void OnDrag();
};

