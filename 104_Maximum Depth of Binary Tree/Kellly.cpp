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
    int maxDepth(TreeNode* root) {
        return travel(root, 0);
    }
    
    int travel(TreeNode* root, int depth) {
        if (!root) {
            return depth;
        } else {
            return max(travel(root->left, depth+1), travel(root->right, depth+1));
        }
    }
};
