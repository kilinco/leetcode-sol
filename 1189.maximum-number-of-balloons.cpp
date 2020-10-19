#include<string>
#include<map>

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
       int out = 0;
       std::map<char, int> bmap = {{'b', 0}, {'a', 0}, {'l',0}, {'o', 0}, {'n',0}};
       // parse text
       for ( int i = 0; i < text.length(); i++){
           if(bmap.end() != bmap.find(text[i])) {
               bmap[text[i]]++;
           }
       }
       // find balloons
       while(bmap['b'] > 0 && bmap['a'] > 0 && bmap['l'] > 1 && bmap['n'] > 0 && bmap['o'] > 1){
            out++;
            bmap['b']--;
            bmap['a']--;
            bmap['l'] -= 2;
            bmap['o'] -= 2;
            bmap['n']--;
       }
       return out; 
    }
};
