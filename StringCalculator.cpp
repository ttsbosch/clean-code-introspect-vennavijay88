#include "StringCalculator.h"
#include <sstream>
#include <stdexcept> // for std::invalid_argument
#include <vector>

int StringCalculator::add(string input)
{
   std::vector<int> numbers = splitNumbers(input);
    int sum = 0;

    for (int num : numbers) {
        if (num < 0) {
            throw std::runtime_error("Negative numbers not allowed: " + std::to_string(num));
        }
        sum += num;
    }

    return sum;
}

std::vector<int> StringCalculator::splitNumbers(const std::string& numbers) {
    std::vector<int> result;
    std::stringstream ss(numbers);
    std::string token;

    while (std::getline(ss, token, ',')) {
        std::stringstream sub_ss(token);
        std::string sub_token;
        
        while (std::getline(sub_ss, sub_token, '\n')) {
            result.push_back(std::stoi(sub_token));
        }
    }

    return result;
}
