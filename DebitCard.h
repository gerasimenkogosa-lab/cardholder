#ifndef DEBITCARD_H
#define DEBITCARD_H

#include "BaseBankingCard.h"

class DebitCard : public BaseBankingCard
{
public:
    DebitCard(const std::string& name,
              const std::string& pin);
};

#endif
