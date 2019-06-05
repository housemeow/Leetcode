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
      TreeNode* node = root;
      return searchTree( node, L, R );
    }

private:
    int searchTree( TreeNode* node, int L, int R ) {
        if ( node == NULL )
          return 0;
        
        if ( node->val > L && node->val < R )
          return node->val + searchTree( node->left, L, R ) + searchTree( node->right, L, R );
        else if ( node->val == L)
          return node->val + searchTree( node->right, L, R );
        else if ( node->val < L )
          return searchTree( node->right, L, R );
        else if ( node->val == R )
          return node->val + searchTree( node->left, L, R );
        else if  ( node->val > R )
          return searchTree( node->left, L, R );
        else
          return 0;
    }    
};
