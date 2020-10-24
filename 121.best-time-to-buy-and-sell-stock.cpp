#include<vector>
#include<climits>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int out = 0, minp = INT_MAX;
        for(std::vector<int>::iterator it = prices.begin(); it != prices.end(); it++) {        
            minp = std::min(minp, *it); 
            out = std::max(out, *it - minp);
        }
        return out;
    }
};

