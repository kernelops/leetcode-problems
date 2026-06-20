// Last updated: 6/21/2026, 1:06:22 AM
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
14    bool isCompleteTree(TreeNode* root) 
15    {
16        if (!root) return true; 
17
18        queue<TreeNode*> q; 
19        q.push(root); 
20        bool seenNull = false; 
21
22        while (!q.empty()){
23            TreeNode* node = q.front(); 
24            q.pop(); 
25
26            if (!node) seenNull = true; 
27            else{
28                if (seenNull) return false; 
29
30                q.push(node->left); 
31                q.push(node->right); 
32            }
33        }
34
35        return true; 
36    }
37};