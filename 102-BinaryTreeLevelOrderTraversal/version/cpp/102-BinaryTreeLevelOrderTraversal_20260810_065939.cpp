// Last updated: 8/10/2026, 6:59:39 AM
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
14    vector<vector<int>> levelOrder(TreeNode* root) 
15    {
16        vector<vector<int>> ans; 
17        if (!root) return ans; 
18
19        queue<TreeNode*> q; 
20        q.push(root); 
21
22        while (!q.empty()){
23            int size = q.size();
24            vector<int> level;  
25            for (int i=0; i<size; i++){
26                TreeNode* node = q.front(); q.pop(); 
27                if (node->left) q.push(node->left); 
28                if (node->right) q.push(node->right); 
29                level.push_back(node->val); 
30            }
31            ans.push_back(level); 
32        }   
33
34        return ans;   
35    }
36};