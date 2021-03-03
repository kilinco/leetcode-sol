#include <vector>
class Solution {
public:
	std::vector<int> countBits(int num) {
		std::vector<int> res(num+1, 0);
		for (int i = 0; i<=num; i++){
			if(i&1) res[i]=1;
			res[i] += res[i/2];
		}
		return res;
    }
};
