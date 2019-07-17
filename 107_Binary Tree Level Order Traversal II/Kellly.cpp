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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> history;
        travel(history, root, 0);
        reverse(history);
        return history;
    }
    
    void reverse(vector<vector<int>>& history) {
        int size = history.size();
        for (int i = 0; i < size / 2; i++) {
            vector<int> temp = history[i];
            history[i] = history[size - i - 1];
            history[size - i - 1] = temp;
        }
    }
    
    void travel(vector<vector<int>>& history, TreeNode* root, int depth) {
        if (!root) {
            return;
        } else {
            if (depth >= history.size()) {
                history.push_back({});
            }
            
            travel(history, root->left, depth + 1);
            history[depth].push_back(root->val);
            travel(history, root->right, depth + 1);
        }
    }
};
