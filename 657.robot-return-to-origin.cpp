#include <string>
class Solution {
public:
    bool judgeCircle(std::string moves) {
        int v = 0, h = 0;
        for(int i = 0; i < moves.size(); i++)
        {
            switch(moves[i])
            {
                case 'U':
                    v += 1;
                    break;
                case 'D':
                    v -= 1;
                    break;
                case 'L':
                    h += 1;
                    break;
                case 'R':
                    h -= 1;
                    break;
                default:
                    break;
            }
        }
        return ((v == 0) && (h == 0));
    }
};
