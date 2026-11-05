#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "BaseBankingCard.h"

class CreditCard : public BaseBankingCard
{
public:
    CreditCard(const std::string& name,
               const std::string& pin);

    void Service(double percent);
};

#endif
