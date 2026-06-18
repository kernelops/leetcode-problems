// Last updated: 6/19/2026, 12:03:55 AM
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
14    TreeNode* insertIntoBST(TreeNode* root, int val) 
15    {
16        TreeNode* node = new TreeNode(val); 
17        if (!root) return node; 
18
19        TreeNode* curr = root; 
20        TreeNode* prev = nullptr; 
21
22        while(curr){
23            prev = curr; 
24            if (val < curr->val) curr = curr->left; 
25            else curr = curr->right; 
26        }
27
28        if (val < prev->val) prev->left = node; 
29        else prev->right = node; 
30
31        return root; 
32    }
33};