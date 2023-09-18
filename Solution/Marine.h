#pragma once
#include "Unit.h"

class Marine : public Unit
{
public :
    int GetHP() override;
    void Skill() override;
    void SetHP(int value) override;
};

