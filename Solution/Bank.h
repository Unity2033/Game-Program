#pragma once
#include "Player.h"

class Bank
{
private:
	int bankMoney = 0;

public:
	void Withdrawal(Player & player, int money);

	void ShowInfo();
};

