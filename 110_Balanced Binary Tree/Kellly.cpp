/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) {
            return true;
        }
        
        return abs(getDepth(root->left) - getDepth(root->right)) <= 1 &&
               isBalanced(root->left) && isBalanced(root->right);
    }
    
    int getDepth(TreeNode* root) {
        if (root != NULL) {
            return max(1 + getDepth(root->left), 1 + getDepth(root->right));
        }
        
        return 0;
    }
};
