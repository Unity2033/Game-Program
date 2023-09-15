#pragma once
#include "Mechanic.h"

class SigueTank : public Mechanic
{
public:
	SigueTank();

	void Attack() override;

	~SigueTank();

};

