class Solution {
private: 
    int stairs[45];
public:
    int climbStairs(int n) {
       if (n == 1) stairs[0] = 1;
       else if (n == 2) {
           stairs[0] = 1;
           stairs[1] = 2;
       }
       else stairs[n-1] = climbStairs(n-1) + stairs[n-3];
       return stairs[n-1];
    }
};

/*
 * inp = 4
 * exp = 5 
 * 
 * 1+1+1+1
 * 1+2+1
 * 2+1+1
 * 1+1+2
 * 2+2
 * 
 * inp = 5
 * exp = 8
 *
 * 1+1+1+1+1
 * 1+1+1+2
 * 1+1+2+1
 * 1+2+1+1
 * 2+1+1+1
 * 2+2+1
 * 2+1+2
 * 1+2+2
 *
 * inp = 6
 * 1+1+1+1+1+1
 * 1+2+1+2
 * 2+1+2+1
 * 1+2+2+1
 * 2+2+1+1
 * 1+1+2+2
 * 1+1+1+1+2
 * 2+1+1+1+1
 * 1+2+1+1+1
 * 1+1+2+1+1
 * 1+1+1+2+1
 *
 */
