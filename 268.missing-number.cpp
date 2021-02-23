#include<vector>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size()+1;
        int r = (n*(n-1))/2;
        int s = 0;
        for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) 
            s += *it;
        return r-s;
    }
};
