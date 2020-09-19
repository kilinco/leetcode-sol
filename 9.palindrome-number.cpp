/* 
 * Cases: 
 *  if negative -> false
 *  if divisible by 10 -> false
 * Edge cases:
 *  if 0 -> true
 *
 * Sol:
 *  Reverse the number. (Same as 7 - "Reverse Integer")
 *      if it's equal to itself -> true
 *      if it's NOT equal to itself -> false
 * */
class Solution {
public:
    bool isPalindrome(int x) {
        if ((x < 0) || (x != 0 && x % 10 == 0)) return false;
        int sum =  0;
        while (x > sum) {
            sum = sum * 10 + x % 10;
            x /= 10;
        }
        return (x == sum) || (x == sum/10);
    }
};
