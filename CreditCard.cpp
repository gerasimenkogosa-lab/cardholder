#include "CreditCard.h"

CreditCard::CreditCard(const std::string& name,
                       const std::string& pin)
    : BaseBankingCard(name, pin, 100000)
{
}

void CreditCard::Service(double percent)
{
    if (percent < 0 || percent > 100)
    {
        return;
    }

    double fee = GetDeposit() * percent / 100.0;

    SetDeposit(GetDeposit() - fee);
}
