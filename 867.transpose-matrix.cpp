#include<vector>

class Solution {
public:
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>>& A) {
        std::vector<std::vector<int>> out(A[0].size(), std::vector<int>(A.size(), 0));
        for (int i = 0; i < A.size(); i ++) {
             for (int j = 0; j < A[i].size(); j++){
                out[j][i] = A[i][j];
             }
         }
         return out;
    }
};
