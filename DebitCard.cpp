#include "DebitCard.h"

DebitCard::DebitCard(const std::string& name,
                     const std::string& pin)
    : BaseBankingCard(name, pin, 10000)
{
}
