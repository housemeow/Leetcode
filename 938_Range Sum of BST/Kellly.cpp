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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root != NULL) {
            int val = L <= root->val && root->val <= R ? root->val : 0;
            return val + rangeSumBST(root->left, L, R) +  rangeSumBST(root->right, L, R);
        }
        return 0;
    }
};
