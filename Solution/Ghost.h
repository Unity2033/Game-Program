#pragma once
#include "Unit.h"

class Ghost : public Unit
{
public :
    Ghost();

    int GetHP() override;
    void Skill() override;
    void RecoveryHP() override;
    void SetHP(int value) override;
};

