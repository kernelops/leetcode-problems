// Last updated: 6/20/2026, 1:12:43 PM
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
14    void inorder(TreeNode* root, vector<int> &in)
15    {
16        if (!root) return; 
17        inorder(root->left, in); 
18        in.push_back(root->val); 
19        inorder(root->right, in);
20    }
21    int minDiffInBST(TreeNode* root) 
22    {
23        vector<int> ans; 
24        inorder(root, ans); 
25
26        int mini = INT_MAX;
27        for (int i = 1; i < ans.size(); i++) {
28            mini = min(mini, ans[i] - ans[i-1]);
29        }
30        
31        return mini;
32    }
33};