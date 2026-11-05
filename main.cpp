#include <iostream>
#include "BasePlasticCard.h"

int main()
{
    BasePlasticCard card;

    std::cout << "Card number: "
              << card.GetCardNumber() << std::endl;

    std::cout << "CVC: "
              << card.GetCVC() << std::endl;

    return 0;
}
