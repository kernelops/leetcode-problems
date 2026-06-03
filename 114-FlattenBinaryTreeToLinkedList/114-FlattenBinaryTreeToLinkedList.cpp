// Last updated: 6/3/2026, 11:33:18 PM
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
    void flatten(TreeNode* root) 
    {
        if (!root) return;
        vector<TreeNode*> pre;
        preorder(root, pre); 

        for (int i=0; i<pre.size()-1; i++)
        {
            pre[i]->left = nullptr;
            pre[i]->right = pre[i+1]; 
        }
    }

    void preorder(TreeNode* root, vector<TreeNode*> &pre)
    {
        if (!root) return;
        pre.push_back(root); 
        preorder(root->left, pre); 
        preorder(root->right, pre); 
    }
};