#include<queue>

/*struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
*/
class Solution {
public:

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        std::queue<TreeNode*> lefty;
        std::queue<TreeNode*> righty;
        
        lefty.push(root->left);
        righty.push(root->right);
        
        while(!lefty.empty() && !righty.empty()){
            TreeNode* leftr = lefty.front(); lefty.pop();
            TreeNode* rightr = righty.front(); righty.pop();
            if (  ((leftr != NULL && rightr == NULL) 
               || (leftr == NULL && rightr != NULL))
               || ((leftr != NULL && rightr != NULL) &&
                    (leftr->val != rightr->val))) return false;
            if (leftr != NULL) {
                lefty.push(leftr->left);
                lefty.push(leftr->right); 
            }
            if (rightr != NULL) {
                righty.push(rightr->right);
                righty.push(rightr->left);
            }
        }
        return (lefty.empty() && righty.empty()); 
    }
};
