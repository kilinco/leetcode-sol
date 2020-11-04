#include <cstring>
class Solution {
public:
    bool divisorGame(int N) {
    return (N%2==0);
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
 * Even number always wins. 
 */
