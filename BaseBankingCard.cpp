#include "BaseBankingCard.h"

BaseBankingCard::BaseBankingCard(const std::string& name,
                                 const std::string& pin,
                                 double initialDeposit)
    : ownerName(name), pinCode(pin), deposit(0)
{
    SetDeposit(initialDeposit);
}

std::string BaseBankingCard::GetOwnerName() const
{
    return ownerName;
}

std::string BaseBankingCard::GetPinCode() const
{
    return pinCode;
}

double BaseBankingCard::GetDeposit() const
{
    return deposit;
}

void BaseBankingCard::SetDeposit(double amount)
{
    if (amount >= 0)
    {
        deposit = amount;
    }
}
