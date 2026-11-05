#include "BasePlasticCard.h"
#include "CardGenerator.h"

BasePlasticCard::BasePlasticCard()
{
    cardNumber = CardGenerator::GenerateCardNumber();
    cvc = CardGenerator::GenerateCVC();
}

std::string BasePlasticCard::GetCardNumber() const
{
    return cardNumber;
}

std::string BasePlasticCard::GetCVC() const
{
    return cvc;
}
