class Solution {
public:
    bool checkPerfectNumber(int num) {
        int s = 1;
        for ( int i = 2; i*i <= num ; i ++)
        {
            if ( num%i == 0 )
            {
                if ( i*i != num ) s += i + (num/i);
                else s += i;
            }
        }
        if ((s == num) && (num != 1)) 
            return true;
        return false;
    }
};
