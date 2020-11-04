#include <cstring>
class Solution {
public:
    bool divisorGame(int N) {
        bool dp[N+1];
        memset(dp, false, N+1);
        for (int i = 2; i <= N; i++)
            for (int j = 1; j*j <= i; j++)
                if (i % j == 0 && !dp[i-j])
                    dp[i] = true;
        return dp[N]; 
    }
};


/*
 * Alice starts first
 * Bob second
 *
 * N -> chalkboard
 * Choose x with 0 < x < N s.t. N % x == 0.
 * Replace the number N with N-x.
 * 
 * If a player can not make a move, 
 *  they lose. Return True - > If Alice wins.
 * 
 */
