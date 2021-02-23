#include<string>
class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        int count = 0;
        for (char c : stones) 
            if (jewels.find(c) != std::string::npos)
                count++;
        return count;        
    }
};
