// Last updated: 8/27/2026, 11:29:41 PM
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
14    int function(TreeNode* root, int &diameter){
15        if (!root) return 0; 
16
17        int lh = function(root->left, diameter); 
18        int rh = function(root->right, diameter);
19
20        diameter = max(diameter, lh+rh); 
21
22        return 1 + max(lh, rh); 
23    }
24    int diameterOfBinaryTree(TreeNode* root) {
25        int diameter=0; 
26        int ans = function(root, diameter); 
27
28        return diameter; 
29    }
30};