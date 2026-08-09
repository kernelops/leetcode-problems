// Last updated: 8/10/2026, 4:29:17 AM
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
14    int maxDepth(TreeNode* root) 
15    {
16        if (!root) return 0; 
17
18        int lh = maxDepth(root->left); 
19        int rh = maxDepth(root->right); 
20
21        return 1 + max(lh, rh);     
22    }
23};