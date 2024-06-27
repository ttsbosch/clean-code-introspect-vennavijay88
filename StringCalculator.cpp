#include "StringCalculator.h"
#include <sstream>
#include <stdexcept> // for std::invalid_argument
#include <vector>

int StringCalculator::add(string input)
{
   if (input.empty()) {
        return 0;
    }

    std::vector<int> numbers = splitNumbers(input);

    for (int num : numbers) {
        if (num < 0) {
            throw std::invalid_argument("Negative numbers not allowed: " + std::to_string(num));
        }
    }
   
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    return sum;
}

std::vector<int> StringCalculator::splitNumbers(const std::string& numbers) {
    std::vector<int> result;
    std::stringstream ss(numbers);
    std::string token;

    while (std::getline(ss, token, ',')) {
        int num = std::stoi(token);
        result.push_back(num);
    }

    return result;
}
