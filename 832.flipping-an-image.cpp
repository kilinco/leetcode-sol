#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < (int)(A[i].size()/2); j++){
                int tmp = A[i][j];
                A[i][j] = (int)(A[i][A[i].size()-1-j] == 0);
                A[i][A[i].size()-1-j] = (int)(tmp == 0);
            }
            A[i][A[i].size()/2] = (A[i].size() % 2 == 1) ? (int)(A[i][A[i].size()/2] == 0) : A[i][A[i].size()/2];
        }
        return A;
    }
};

/*
[0, 1, 1]
 x     y

 tmp = 0
 0
 A[i].size() -j => 1
 3 - 1 - 0 = 2
 (1 == 0) -> 0 -> 1 
 (0 == 1) -> 0 -> 1

i = 0
j = 0
*/



