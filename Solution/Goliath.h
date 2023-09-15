#pragma once
#include "Mechanic.h"

class Goliath : public Mechanic
{
public:
	Goliath();

	void Attack() override;

	~Goliath();
};

