#include<string>
class Solution {
public:
	std::string removeKdigits(std::string num, int k) {
		std::string res = ""; 
		for (int i = 0 ; i < num.size(); i++)
		{
			while(res.size() && res.back() > num[i] && k){
				res.pop_back();
				k--;
			}
			if ( res.size() || num[i]!='0') res.push_back(num[i]);
		}
		while ( res.size() && k--) res.pop_back();	
		return (res == "") ? "0" : res;
		
        
    }
};
