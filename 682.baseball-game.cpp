#include<vector>
#include<string>
class Solution {
public:
    int calPoints(std::vector<std::string>& ops) {
       int o = 0;
       std::vector<int> sc; 
       for(std::vector<std::string>::iterator it = ops.begin(); it != ops.end(); it++){
           std::cout << *it << std::endl;
            if(*it == "D") sc.push_back(sc.back()*2);
            else if(*it == "C") sc.pop_back();
            else if(*it == "+") sc.push_back(sc[sc.size()-1] + sc[sc.size()-2]);
            else sc.push_back(std::stoi(*it));
       }
       for(std::vector<int>::iterator it = sc.begin(); it != sc.end(); it++) o += *it;
        return o;
    }
};
