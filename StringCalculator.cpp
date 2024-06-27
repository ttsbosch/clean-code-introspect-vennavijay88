#include "StringCalculator.h"

int StringCalculator::add(string input)
{
   if (input.empty()) {
        return 0;
    }
    size_t commaPos = input.find(',');
    int sum = 0;
    std::stringstream ss(input);
    std::string token;
    while (std::getline(ss, token, ',')) {
        sum += std::stoi(token);
    }
    return sum;
}
