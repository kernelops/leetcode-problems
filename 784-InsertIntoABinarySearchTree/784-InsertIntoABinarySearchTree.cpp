// Last updated: 6/3/2026, 11:30:32 PM
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
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        TreeNode* node = new TreeNode(val); 
        if (root == NULL) return node;
        TreeNode* cur = root; 
        TreeNode* prev = NULL;
        while (cur != NULL)
        {
            prev = cur;
            if (cur->val < val) cur = cur->right;
            else cur = cur->left;  
        }    
        if (prev->val > val) prev->left = node;
        else prev->right = node;
        return root;
    }
};