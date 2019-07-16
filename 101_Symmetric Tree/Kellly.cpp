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
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true;
        }
        
        string left = travelLeft(root->left),
               right = travelRight(root->right);
        
        return left == right;
    }
    
    string travelLeft(TreeNode* root) {
        if (root) {
            string s(1, root->val + '0');
            return s + travelLeft(root->left) + travelLeft(root->right);
        } else {
            return " ";
        }
    }
    
    string travelRight(TreeNode* root) {
        if (root) {
            string s(1, root->val + '0');
            return s + travelRight(root->right) + travelRight(root->left);
        } else {
            return " ";
        }
    }
};
