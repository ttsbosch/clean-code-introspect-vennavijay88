#include<iostream>
#include<string>
#include <vector>

using namespace std;
class StringCalculator
{
   public:
   int add(string input);
   private:
   std::vector<int> splitNumbers(const std::string& numbers);
   void handleNegativeNumbers(const std::vector<int>& numbers);
};
