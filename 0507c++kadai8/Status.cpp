#include "Status.h"

bool Status::SetLv(int i)
{
    if (i > 0)
    {
        if (i >= 100)
        {
            lv = 99;
        }
        else {
            lv = i;
        }
  
        return true;
    }
    else {
        return false;
    }

}

void Status::Calc()
{
    hp = lv * lv + 50;
    atk = lv * 10;
    def = lv * 9;
}

int Status::GetHp()
{
    return hp;
}

int Status::GetAtk()
{
    return atk;
}

int Status::GetDef()
{
    return def;
}

int Status::GetLv()
{
    return lv;
}
