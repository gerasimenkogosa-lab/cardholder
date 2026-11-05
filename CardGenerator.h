#ifndef CARDGENERATOR_H
#define CARDGENERATOR_H

#include <string>

class CardGenerator
{
public:
    static std::string GenerateCardNumber();
    static std::string GenerateCVC();
};

#endif
