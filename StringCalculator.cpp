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
        size_t pos = 0;
        while ((pos = token.find('\n')) != std::string::npos) {
            token.erase(pos, 1);
        }
        result.push_back(std::stoi(token));
    }

    return result;
}
