#ifndef BASEPLASTICCARD_H
#define BASEPLASTICCARD_H

#include <string>

class BasePlasticCard
{
private:
    std::string cardNumber;
    std::string cvc;

public:
    BasePlasticCard();

    std::string GetCardNumber() const;
    std::string GetCVC() const;
};

#endif
