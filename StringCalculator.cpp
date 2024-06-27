#include "StringCalculator.h"

int StringCalculator::add(string input)
{
   if (numbers.empty()) {
        return 0;
   }
    if (numbers.find(',') == std::string::npos) {
        return std::stoi(numbers);
    }
        return 0;
}
