#include<string>
#include<unordered_map>

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
       std::unordered_map<char, int> bmap = {{'b', 0}, {'a', 0}, {'l',0}, {'o', 0}, {'n',0}};
       for (int i = 0; i < text.length(); i++){
           if(bmap.end() != bmap.find(text[i])) {
              bmap[text[i]]++;
           }
       }
       return min({bmap['b'], bmap['a'], bmap['l']/2, bmap['o']/2, bmap['n']});
    }
};
