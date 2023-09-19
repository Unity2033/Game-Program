#pragma once
#include "Unit.h"

class Firebat : public Unit
{
public:
    Firebat();

    int GetHP() override;
    void Skill() override;
    void RecoveryHP() override;
    void SetHP(int value) override;
};

