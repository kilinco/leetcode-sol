#include<vector>
class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
       int c=0;
        for(std::vector<int>::iterator it=nums.begin() ; it 
               != nums.end(); it++)
            c += (int(log10(*it)) % 2) ? 1: 0;
        return c;
    }
};
