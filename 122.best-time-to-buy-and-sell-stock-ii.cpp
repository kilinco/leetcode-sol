#include<vector>
#include<climits>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if(prices.size()<=1) return 0;
        int o = 0;
        for (std::vector<int>::iterator it = prices.begin()+1; it != prices.end(); it++)  
            if (*it - *(it-1) > 0) o += *it - *(it-1);
        return o;
    }
};
