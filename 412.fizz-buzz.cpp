#include<string>
#include<vector>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> out; 
        for (int i = 1; i < n+1; i++){
            if (i % 3 == 0 && i % 5 == 0) {
                out.push_back("FizzBuzz");
            }
            else if (i % 5 == 0) {
                out.push_back("Buzz");
            }
            else if (i % 3 == 0) {
                out.push_back("Fizz");
            }
            else out.push_back(std::to_string(i));
        }
        return out;
    }
};
