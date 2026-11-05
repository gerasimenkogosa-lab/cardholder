#ifndef BASEBANKINGCARD_H
#define BASEBANKINGCARD_H

#include "BasePlasticCard.h"
#include <string>

class BaseBankingCard : public BasePlasticCard
{
private:
    std::string ownerName;
    std::string pinCode;
    double deposit;

public:
    BaseBankingCard(const std::string& name,
                    const std::string& pin,
                    double initialDeposit);

    std::string GetOwnerName() const;
    std::string GetPinCode() const;
    double GetDeposit() const;

    void SetDeposit(double amount);
};

#endif
