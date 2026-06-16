// Last updated: 6/17/2026, 12:28:54 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if (!root) return false; 

        if (!root->right && !root->left) return targetSum == root->val; 

        int remaining = targetSum - root->val; 
        return hasPathSum(root->left, remaining) || 
                hasPathSum(root->right, remaining);     
    }
};