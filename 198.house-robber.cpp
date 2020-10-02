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
 *
 * Step-by-step:
 *      p  | o
 *     ---------
 * 1 >> 0  | 0   [2,7,4,3,5,11]
 *                ^
 * 2 >> 0  | 2   [2,7,4,3,5,11]
 *                  ^
 * 3 >> 2  | 7   [2,7,4,3,5,11]
 *                    ^
 * 4 >> 7  | 10  [2,7,4,3,5,11]
 *                      ^
 * 5 >> 10 | 12  [2,7,4,3,5,11]
 *                        ^
 * 6 >> 12 | 21  [2,7,4,3,5,11]
 *                          ^
 */ 

/* if 2 neighbors can't be robbed:
 * if the robber robs house i, 
 *      then it will not be able to rob houses (i-1), (i-2), (i+1), (i+2).
 * 
 * inp = [2,7,3,4,5,11,2,12]
 * out = 24 = 7+5+12
 * 
 * // f, m, l = 0, 0, 0
 * int rob(std::vector<int>& nums) {
 *   int f=0,m=0,l=0;
 *   for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
 *       int tmp = std::max(f + *it, std::max(l, m));
 *       f = m;
 *       m = l;
 *       l = tmp;
 *   }
 *   return o;
 * } 
 *
 *                              
 * Step-by-step:
 *      l  | m  |  f
 *     ---------------
 * 1 >> 2  | 0  |  0    [2,7,3,4,5,11,2,12]
 *                       ^ 
 * 2 >> 7  | 2  |  0    [2,7,3,4,5,11,2,12]
 *                         ^ 
 * 3 >> 7  | 7  |  2    [2,7,4,3,5,11,2,12]
 *                           ^
 * 4 >> 7  | 7  |  7    [2,7,4,3,5,11,2,12]
 *                             ^   
 * 5 >> 12 | 7  |  7    [2,7,4,3,5,11,2,12]
 *                               ^
 * 6 >> 18 | 12 |  7    [2,7,4,3,5,11,2,12]
 *                                 ^
 * 7 >> 18 | 12 |  12   [2,7,4,3,5,11,2,12]
 *                                    ^   
 * 8 >> 24 | 18 |  12   [2,7,4,3,5,11,2,12]
 *                                      ^
 *
*/
