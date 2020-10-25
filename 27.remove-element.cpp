#include<vector>
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
       int ix = 0;
       for(int i = 0; i < nums.size(); i++) {
          if (nums[i] != val) {
            std::swap(nums[ix], nums[i]);
            ix++;
          }
       }
       return ix;
    }
};
