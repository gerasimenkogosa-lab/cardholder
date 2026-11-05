#include "CardGenerator.h"

#include <random>

std::string CardGenerator::GenerateCardNumber()
{
    static std::random_device rd;
    static std::mt19937 generator(rd());
    static std::uniform_int_distribution<int> digit(0, 9);

    std::string number;

    for (int i = 0; i < 16; i++)
    {
        number += std::to_string(digit(generator));
    }

    return number;
}

std::string CardGenerator::GenerateCVC()
{
    static std::random_device rd;
    static std::mt19937 generator(rd());
    static std::uniform_int_distribution<int> digit(0, 9);

    std::string cvc;

    for (int i = 0; i < 3; i++)
    {
        cvc += std::to_string(digit(generator));
    }

    return cvc;
}
