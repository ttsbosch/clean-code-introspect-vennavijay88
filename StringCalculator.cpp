#include "StringCalculator.h"

int StringCalculator::add(string input)
{
   if (input.empty()) {
        return 0;
   }
    if (input.find(',') == std::string::npos) {
        return std::stoi(input);
    }
        return 0;
}
