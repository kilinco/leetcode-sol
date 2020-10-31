#include<vector>
#include<map> 
#include<set>
class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
       std::map<int, unsigned int> m;
       for(int i = 0; i < arr.size(); ++i) {
           std::map<int, unsigned int>::iterator it(m.find(arr[i]));
           if (it != m.end()) it->second++;
           else m[arr[i]] = 1;
        }
       std::set<unsigned int> occ;
       for(std::map<int, unsigned int>::iterator it = m.begin(); it !=m.end(); it++)
            occ.insert(it->second);
       return occ.size() == m.size();
    }
};
