// Last updated: 8/10/2026, 4:27:40 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* invertTree(TreeNode* root) 
15    {
16        if (!root) return nullptr; 
17
18        TreeNode* temp = root->left; 
19        root->left = root->right; 
20        root->right = temp; 
21
22        invertTree(root->left); 
23        invertTree(root->right); 
24
25        return root; 
26    }
27};