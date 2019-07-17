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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        return buildTree(nums, 0, size - 1);
    }
    
    TreeNode* buildTree(vector<int>& nums, int start, int end) {
        if (start <= end) {
            int center = (start + end) / 2;
            TreeNode* node = new TreeNode(nums[center]);
            
            node->left = buildTree(nums, start, center - 1);
            node->right = buildTree(nums, center + 1, end);
            
            return node;
        }
        
        return NULL;
    }
};
