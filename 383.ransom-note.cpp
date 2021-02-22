#include<string>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        int f[26] = {0};
        for (size_t mc = 0; mc < magazine.size(); mc++)
        {
            f[int(magazine[mc])-97]++;
        }
        for (size_t rc = 0; rc < ransomNote.size(); rc++)
        {
            f[int(ransomNote[rc])-97]--;
        }
        for (int c = 0; c < 26; c++)
        {
            if(f[c] < 0)
            {
                return false;
            }
        }
        return true;
    }
};
