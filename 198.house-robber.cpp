#include <vector>
class Solution {
public:
    // greedy 
    int rob(std::vector<int>& nums) {
        int p = 0, o = 0;
        for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
           int tmp = std::max(p + *it, o);
           p = o;
           o = tmp;
        }
        return o;
    }
};

/* 
 * inp = [2,7,4,3,5,11]
 * exp = 21
 *
 * At each step, the max is:
 * out = 0
 * out = 2
 * out = 7
 * out = 7
 * out = 10
 * out = 12 
 * out = 21
 */
